/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Copyright (c) Aaron Wilk 2025, All rights reserved.                     */
/*                                                                            */
/*    Module:     ChatMessageHooks.h                                          */
/*    Author:     Aaron Wilk                                                  */
/*    Created:    3 May 2025                                                  */
/*                                                                            */
/*    Revisions:  V0.1                                                        */
/*                                                                            */
/*----------------------------------------------------------------------------*/

#pragma once
#include <BR-SDK.hpp>
#include "windows.h"

namespace hooks
{
	constexpr const char* ADD_CHAT_MESSAGE = "48 89 7C 24 ?? 41 56 48 83 EC ?? 48 8B FA 4C 8B F1 E8 ?? ?? ?? ?? 84 C0 0F 84 ?? ?? ?? ??";
	constexpr const char* FBRICK_CHAT_MESSAGE = "48 89 5C 24 ?? 57 48 83 EC ?? 88 11 48 8B D9 48 83 C1 ?? 49 8B D0 33 FF E8 ?? ?? ?? ??";
	constexpr const char* F_SLATE_COLOR = "0F 10 02 33 C0 0F 11 01 48 89 41 ?? 48 89 41 ?? 48 8B C1 C6 41 ?? ?? C3";

	namespace AddChatMessage
	{
		inline bool enabled = false;
		inline bool initalized = false;
		inline uintptr_t AddChatMessageFunctionPointer = 0;//Initalized in Init()

		using  AddChatMessage_t = void(__fastcall*)(SDK::ABrickGameSession* This, const SDK::FBrickChatMessage& ChatMessage);
		inline  AddChatMessage_t OriginalAddChatMessageFunction = nullptr;

		void __fastcall HookedAddChatMessageFunction(SDK::ABrickGameSession* This, const SDK::FBrickChatMessage& ChatMessage);

		bool Init();
		void Enable();
		void Disable();
	}

	namespace constructors
	{
		//Use this by passing a valid structure created with the default constructor. The last player controller is the intended recipiet of the message.
		void FBrickChatMessageConstructor(SDK::FBrickChatMessage* This, SDK::EChatMessageType ChatType, SDK::ABrickPlayerController* PC);

		void FSlateColorConstructor(SDK::FSlateColor* This, SDK::FLinearColor* InColor);

		/*
		* Colors are 0-255 and A is 0-1
		* FLinearColor expect values from 0-1 not 0-255, given that, 0-255 values are taken and mapped down in the function.
		*/
		SDK::FLinearColor CreateLinearColor(float R, float G, float B, float A);


		/*
		* Colors are 0-1 and A is 0-1
		* FLinearColor expect values from 0-1 not 0-255, and since this is the normal function, inputs are 0-1.
		*/
		SDK::FLinearColor CreateLinearColorNorm(float R, float G, float B, float A);

		/*
		* Colors are 0-255 and A is 0-1
		*/
		SDK::FSlateColor CreateSlateColor(float R, float G, float B, float A);
	}
}
