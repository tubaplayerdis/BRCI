/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Copyright (c) Aaron Wilk 2025, All rights reserved.                     */
/*                                                                            */
/*    Module:     GlobalHooks.cpp                                             */
/*    Author:     Aaron Wilk                                                  */
/*    Created:    27 May 2025                                                 */
/*                                                                            */
/*    Revisions:  V0.1                                                        */
/*                                                                            */
/*----------------------------------------------------------------------------*/

#include "GlobalHooks.h"
#include <Utils/GameFunctions.hpp>
#include "global.h"
#include "ChatMessageHooks.h"
#include "HelpLists.h"
#include <thread>
#include <fstream>

void __fastcall hooks::BeginPlay::HookedBeginPlayFunction(SDK::UWorld* This)
{
	OriginalBeginPlayFunction(This);
	if (!global::IsHost(This->NetDriver)) {
		//Disable Hooks
		AddChatMessage::Disable();
		OnPlayerJoined::Disable();
		StartPlay::Disable();
		global::watermark::HideWaterWark();
		return;
	}
	else {
		//Re-Enable hooks. Enable() function pretects agaisnt enabling twice.
		AddChatMessage::Enable();
		OnPlayerJoined::Enable();
		StartPlay::Enable();
	}
	global::UpdatePointers(This);
	if (global::isMapValid()) global::watermark::HideWaterWark();
	else { global::watermark::ShowWaterMark(); }
	Sleep(50); //This is janky but allows for execution of other systems to prevent freezes
	global::welcome::SendWelcomeMessageA();
	
}

bool hooks::BeginPlay::Init()
{
	if (initalized) return false;
	BeginPlayFunctionPointer = ResolveSignature(signature);
	if (BeginPlayFunctionPointer == 0) return false;
	MH_STATUS ret = MH_CreateHook((LPVOID)BeginPlayFunctionPointer, &HookedBeginPlayFunction, (void**)&OriginalBeginPlayFunction);
	initalized = true;
	return ret == MH_OK;
}

void hooks::BeginPlay::Enable()
{
	if (!initalized || enabled) return;
	MH_EnableHook((LPVOID)BeginPlayFunctionPointer);
	enabled = true;
}

void hooks::BeginPlay::Disable()
{
	if (!initalized || !enabled) return;
	MH_DisableHook((LPVOID)BeginPlayFunctionPointer);
	enabled = false;
}

void __fastcall hooks::DrawTransition::HookedDrawTransitionFunction(SDK::UGameViewportClient* This, SDK::UCanvas* Canvas)
{
	SDK::FVector2D loc = SDK::FVector2D();
	loc.X = 100;
	loc.Y = 100;
	SDK::FVector2D size = SDK::FVector2D();
	size.X = 100;
	size.Y = 100;
	Canvas->K2_DrawBox(loc, size, 10, hooks::constructors::CreateLinearColor(255, 0, 0, 1));
	OriginalDrawTransitionFunction(This, Canvas);
}

bool hooks::DrawTransition::Init()
{
	if (initalized) return false;
	DrawTransitionFunctionPointer = FindPattern(pattern, mask, GetModuleBaseN(), GetModuleSizeN());
	if (DrawTransitionFunctionPointer == 0) return false;
	MH_STATUS ret = MH_CreateHook((LPVOID)DrawTransitionFunctionPointer, &HookedDrawTransitionFunction, (void**)&OriginalDrawTransitionFunction);
	initalized = true;
	return ret == MH_OK;
}

void hooks::DrawTransition::Enable()
{
	if (!initalized || enabled) return;
	MH_EnableHook((LPVOID)DrawTransitionFunctionPointer);
	enabled = true;
}

void hooks::DrawTransition::Disable()
{
	if (!initalized || !enabled) return;
	MH_DisableHook((LPVOID)DrawTransitionFunctionPointer);
	enabled = false;
}

void hooks::Functions::SynchronizeProperties::SynchronizeProperties(SDK::UBrickBorder* This)
{
	if (SynchronizePropertiesFunction == 0) {
		std::cout << "Finding first time signature for syncprops!" << std::endl;
		SynchronizePropertiesFunction = ResolveSignature(signature);
		std::cout << "Found signature!" << std::endl;
	}

	using SynchronizePropertiesFn = void(__fastcall*)(SDK::UBrickBorder* Thiss);
	SynchronizePropertiesFn OnInitalizeFunction = reinterpret_cast<SynchronizePropertiesFn>(SynchronizePropertiesFunction);

	OnInitalizeFunction(This);
}

bool hooks::Functions::SynchronizeProperties::Init()
{
	SynchronizePropertiesFunction = ResolveSignature(signature);
	return SynchronizePropertiesFunction != 0;
}

void __fastcall hooks::OpenMenu::HookedOpenMenuFunction(SDK::UMenuWidget* This, SDK::FName InMenu)
{
	OriginalOpenMenuFunction(This, InMenu);
	if (!This) return;
	if (InMenu.GetRawString().c_str() == nullptr) return;
	if (InMenu.GetRawString() == "InGameMenu") global::watermark::ShowWaterMark();
	if (InMenu.GetRawString() == "None" && global::isMapValid()) global::watermark::HideWaterWark();
}

bool hooks::OpenMenu::Init()
{
	if (initalized) return false;
	OpenMenuFunctionPointer = ResolveSignature(signature);
	if (OpenMenuFunctionPointer == 0) return false;
	MH_STATUS ret = MH_CreateHook((LPVOID)OpenMenuFunctionPointer, &HookedOpenMenuFunction, (void**)&OriginalOpenMenuFunction);
	initalized = true;
	return ret == MH_OK;
}

void hooks::OpenMenu::Enable()
{
	if (!initalized || enabled) return;
	MH_EnableHook((LPVOID)OpenMenuFunctionPointer);
	enabled = true;
}

void hooks::OpenMenu::Disable()
{
	if (!initalized || !enabled) return;
	MH_DisableHook((LPVOID)OpenMenuFunctionPointer);
	enabled = false;
}

void __fastcall hooks::OnPlayerJoined::HookedOnPlayerJoinedFunction(SDK::ABrickGameSession* This, SDK::ABrickPlayerController* PC)
{
	OriginalOnPlayerJoinedFunction(This, PC);
	Sleep(10);
	modules::interpreter::sendUserSpecificMessageWithContext(global::GetPlayerInfoFromController(PC), WelcomeClientMessage, SDK::EChatContext::Global, L"Welcome!");
	UC::TArray<SDK::AActor*> raw = UC::TArray<SDK::AActor*>();
	UC::TArray<SDK::AActor*>* what = &raw;
	SDK::UGameplayStatics::GetAllActorsOfClass(World(), SDK::ABrickPlayerController::StaticClass(), what);
	std::ofstream playerFile("LastPlayersJoined.txt", std::ios::trunc);
	bool isValidFile = playerFile.is_open() && !playerFile.bad() && !playerFile.fail();
	playerFile << "Last Player List:\n";
	for (int i = 0; i < raw.Num(); i++)
	{
		SDK::ABrickPlayerController* cast = static_cast<SDK::ABrickPlayerController*>(raw[i]);
		if (cast->PlayerState) 
		{
			SDK::ABrickPlayerState* state = static_cast<SDK::ABrickPlayerState*>(cast->PlayerState);
			if(state && isValidFile) playerFile << state->GetPlayerNameText().ToString() << "\n";
		};
	}
	playerFile.close();
}

bool hooks::OnPlayerJoined::Init()
{
	if (initalized) return false;
	OnPlayerJoinedFunctionPointer = ResolveSignature(signature);
	if (OnPlayerJoinedFunctionPointer == 0) return false;
	MH_STATUS ret = MH_CreateHook((LPVOID)OnPlayerJoinedFunctionPointer, &HookedOnPlayerJoinedFunction, (void**)&OriginalOnPlayerJoinedFunction);
	initalized = true;
	return ret == MH_OK;
}

void hooks::OnPlayerJoined::Enable()
{
	if (!initalized || enabled) return;
	MH_EnableHook((LPVOID)OnPlayerJoinedFunctionPointer);
	enabled = true;
}

void hooks::OnPlayerJoined::Disable()
{
	if (!initalized || !enabled) return;
	MH_DisableHook((LPVOID)OnPlayerJoinedFunctionPointer);
	enabled = false;
}

char __fastcall hooks::LoadMap::HookedLoadMapFunction(SDK::UEngine* This, SDK::FWorldContext* WorldContext, void* URL, void* Pending, void* Error)
{
	char ret = OriginalLoadMapFunction(This, WorldContext, URL, Pending, Error);
	global::mapLevelName = World()->PersistentLevel->Outer->GetName();
	if (global::mapLevelName == "MainMenu") global::watermark::ShowWaterMark();
	Sleep(20);
	return ret;
}

bool hooks::LoadMap::Init()
{
	if (initalized) return false;
	LoadMapFunctionPointer = ResolveSignature(signature);
	if (LoadMapFunctionPointer == 0) return false;
	MH_STATUS ret = MH_CreateHook((LPVOID)LoadMapFunctionPointer, &HookedLoadMapFunction, (void**)&OriginalLoadMapFunction);
	initalized = true;
	return ret == MH_OK;
}

void hooks::LoadMap::Enable()
{
	if (!initalized || enabled) return;
	MH_EnableHook((LPVOID)LoadMapFunctionPointer);
	enabled = true;
}

void hooks::LoadMap::Disable()
{
	if (!initalized || !enabled) return;
	MH_DisableHook((LPVOID)LoadMapFunctionPointer);
	enabled = false;
}

bool hooks::Functions::isServer::isServer(SDK::UNetDriver* driver)
{
	if (!driver) return false;
	using IsServerFn = bool(__fastcall*)(SDK::UNetDriver*);
	void** vtable = *(void***)driver;
	IsServerFn IsServerFunc = reinterpret_cast<IsServerFn>(vtable[0x378 / 8]);
	return IsServerFunc(driver);
}

void hooks::Functions::UpdateWorldSetupParams::UpdateWorldSetupParams(bool fadeIn)
{
	uintptr_t UpdateWorldSetupParamsFunction = (uintptr_t)GetModuleHandle(NULL) + 0x0E30830;

	using UpdateWorldSetupParamsFn = void(__fastcall*)(SDK::AWorldSetupActor* This, bool bFadeIn);
	UpdateWorldSetupParamsFn OnUpdateWorldSetupParams = reinterpret_cast<UpdateWorldSetupParamsFn>(UpdateWorldSetupParamsFunction);

	OnUpdateWorldSetupParams(global::GetWorldSetupActor(), fadeIn);
}

void __fastcall hooks::StartPlay::HookedStartPlayFunction(SDK::AGameMode* This)
{
	OriginalStartPlayFunction(This);
	std::cout << "Started Play!" << std::endl;
	global::UpdatePointers(SDK::UWorld::GetWorld());
}

bool hooks::StartPlay::Init()
{
	if (initalized) return false;
	StartPlayFunctionPointer = ResolveSignature(signature);
	if (StartPlayFunctionPointer == 0) return false;
	MH_STATUS ret = MH_CreateHook((LPVOID)StartPlayFunctionPointer, &HookedStartPlayFunction, (void**)&OriginalStartPlayFunction);
	initalized = true;
	std::cout << ret << std::endl;
	return ret == MH_OK;
}

void hooks::StartPlay::Enable()
{
	if (!initalized || enabled) return;
	MH_EnableHook((LPVOID)StartPlayFunctionPointer);
	enabled = true;
}

void hooks::StartPlay::Disable()
{
	if (!initalized || !enabled) return;
	MH_DisableHook((LPVOID)StartPlayFunctionPointer);
	enabled = false;
}
