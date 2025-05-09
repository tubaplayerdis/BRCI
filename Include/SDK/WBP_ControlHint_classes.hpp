﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ControlHint

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "BrickRigs_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_ControlHint.WBP_ControlHint_C
// 0x0008 (0x0360 - 0x0358)
class UWBP_ControlHint_C final : public UControlHintWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0358(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_WBP_ControlHint(int32 EntryPoint);
	void UpdateInputChordVisibility(bool bNewVisible);
	void SetIconSize(float NewSize);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_ControlHint_C">();
	}
	static class UWBP_ControlHint_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_ControlHint_C>();
	}
};
static_assert(alignof(UWBP_ControlHint_C) == 0x000008, "Wrong alignment on UWBP_ControlHint_C");
static_assert(sizeof(UWBP_ControlHint_C) == 0x000360, "Wrong size on UWBP_ControlHint_C");
static_assert(offsetof(UWBP_ControlHint_C, UberGraphFrame) == 0x000358, "Member 'UWBP_ControlHint_C::UberGraphFrame' has a wrong offset!");

}

