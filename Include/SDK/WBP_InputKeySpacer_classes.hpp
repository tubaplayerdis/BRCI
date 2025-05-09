﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_InputKeySpacer

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BrickRigs_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_InputKeySpacer.WBP_InputKeySpacer_C
// 0x0010 (0x0270 - 0x0260)
class UWBP_InputKeySpacer_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBrickImage*                            Image;                                             // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_InputKeySpacer(int32 EntryPoint);
	void UpdateStyleState(EBrickUIColorStyle NewStyle, EBrickUIStyleState NewState);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_InputKeySpacer_C">();
	}
	static class UWBP_InputKeySpacer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_InputKeySpacer_C>();
	}
};
static_assert(alignof(UWBP_InputKeySpacer_C) == 0x000008, "Wrong alignment on UWBP_InputKeySpacer_C");
static_assert(sizeof(UWBP_InputKeySpacer_C) == 0x000270, "Wrong size on UWBP_InputKeySpacer_C");
static_assert(offsetof(UWBP_InputKeySpacer_C, UberGraphFrame) == 0x000260, "Member 'UWBP_InputKeySpacer_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_InputKeySpacer_C, Image) == 0x000268, "Member 'UWBP_InputKeySpacer_C::Image' has a wrong offset!");

}

