﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_BrickSlider

#include "Basic.hpp"

#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function WBP_BrickSlider.WBP_BrickSlider_C.ExecuteUbergraph_WBP_BrickSlider
// 0x0038 (0x0038 - 0x0000)
struct WBP_BrickSlider_C_ExecuteUbergraph_WBP_BrickSlider final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_NewValue;                             // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateChildSize                        K2Node_MakeStruct_SlateChildSize;                  // 0x0008(0x0008)(NoDestructor)
	class UHorizontalBoxSlot*                     CallFunc_SlotAsHorizontalBoxSlot_ReturnValue;      // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateChildSize                        K2Node_MakeStruct_SlateChildSize_1;                // 0x001C(0x0008)(NoDestructor)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UHorizontalBoxSlot*                     CallFunc_SlotAsHorizontalBoxSlot_ReturnValue_1;    // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_BrickSlider_C_ExecuteUbergraph_WBP_BrickSlider) == 0x000008, "Wrong alignment on WBP_BrickSlider_C_ExecuteUbergraph_WBP_BrickSlider");
static_assert(sizeof(WBP_BrickSlider_C_ExecuteUbergraph_WBP_BrickSlider) == 0x000038, "Wrong size on WBP_BrickSlider_C_ExecuteUbergraph_WBP_BrickSlider");
static_assert(offsetof(WBP_BrickSlider_C_ExecuteUbergraph_WBP_BrickSlider, EntryPoint) == 0x000000, "Member 'WBP_BrickSlider_C_ExecuteUbergraph_WBP_BrickSlider::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_BrickSlider_C_ExecuteUbergraph_WBP_BrickSlider, K2Node_Event_NewValue) == 0x000004, "Member 'WBP_BrickSlider_C_ExecuteUbergraph_WBP_BrickSlider::K2Node_Event_NewValue' has a wrong offset!");
static_assert(offsetof(WBP_BrickSlider_C_ExecuteUbergraph_WBP_BrickSlider, K2Node_MakeStruct_SlateChildSize) == 0x000008, "Member 'WBP_BrickSlider_C_ExecuteUbergraph_WBP_BrickSlider::K2Node_MakeStruct_SlateChildSize' has a wrong offset!");
static_assert(offsetof(WBP_BrickSlider_C_ExecuteUbergraph_WBP_BrickSlider, CallFunc_SlotAsHorizontalBoxSlot_ReturnValue) == 0x000010, "Member 'WBP_BrickSlider_C_ExecuteUbergraph_WBP_BrickSlider::CallFunc_SlotAsHorizontalBoxSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BrickSlider_C_ExecuteUbergraph_WBP_BrickSlider, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x000018, "Member 'WBP_BrickSlider_C_ExecuteUbergraph_WBP_BrickSlider::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BrickSlider_C_ExecuteUbergraph_WBP_BrickSlider, K2Node_MakeStruct_SlateChildSize_1) == 0x00001C, "Member 'WBP_BrickSlider_C_ExecuteUbergraph_WBP_BrickSlider::K2Node_MakeStruct_SlateChildSize_1' has a wrong offset!");
static_assert(offsetof(WBP_BrickSlider_C_ExecuteUbergraph_WBP_BrickSlider, CallFunc_SlotAsHorizontalBoxSlot_ReturnValue_1) == 0x000028, "Member 'WBP_BrickSlider_C_ExecuteUbergraph_WBP_BrickSlider::CallFunc_SlotAsHorizontalBoxSlot_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_BrickSlider_C_ExecuteUbergraph_WBP_BrickSlider, K2Node_Event_IsDesignTime) == 0x000030, "Member 'WBP_BrickSlider_C_ExecuteUbergraph_WBP_BrickSlider::K2Node_Event_IsDesignTime' has a wrong offset!");

// Function WBP_BrickSlider.WBP_BrickSlider_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WBP_BrickSlider_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_BrickSlider_C_PreConstruct) == 0x000001, "Wrong alignment on WBP_BrickSlider_C_PreConstruct");
static_assert(sizeof(WBP_BrickSlider_C_PreConstruct) == 0x000001, "Wrong size on WBP_BrickSlider_C_PreConstruct");
static_assert(offsetof(WBP_BrickSlider_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WBP_BrickSlider_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function WBP_BrickSlider.WBP_BrickSlider_C.UpdateSliderPosition
// 0x0004 (0x0004 - 0x0000)
struct WBP_BrickSlider_C_UpdateSliderPosition final
{
public:
	float                                         NewValue;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_BrickSlider_C_UpdateSliderPosition) == 0x000004, "Wrong alignment on WBP_BrickSlider_C_UpdateSliderPosition");
static_assert(sizeof(WBP_BrickSlider_C_UpdateSliderPosition) == 0x000004, "Wrong size on WBP_BrickSlider_C_UpdateSliderPosition");
static_assert(offsetof(WBP_BrickSlider_C_UpdateSliderPosition, NewValue) == 0x000000, "Member 'WBP_BrickSlider_C_UpdateSliderPosition::NewValue' has a wrong offset!");

}

