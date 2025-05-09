﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_InputKey

#include "Basic.hpp"

#include "BrickRigs_structs.hpp"


namespace SDK::Params
{

// Function WBP_InputKey.WBP_InputKey_C.ExecuteUbergraph_WBP_InputKey
// 0x0040 (0x0040 - 0x0000)
struct WBP_InputKey_C_ExecuteUbergraph_WBP_InputKey final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EBrickUIIconAtlas                             Temp_byte_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EBrickUIIconAtlas                             Temp_byte_Variable_1;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7[0x1];                                        // 0x0007(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FKeyDisplayTableRow                    K2Node_Event_DisplayInfo;                          // 0x0008(0x0028)(ConstParm)
	bool                                          K2Node_Event_bIsGamepadKey;                        // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EBrickUIIconAtlas                             K2Node_Select_Default;                             // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_32[0x2];                                       // 0x0032(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FBrickUIIconSlot                       K2Node_MakeStruct_BrickUIIconSlot;                 // 0x0034(0x0008)(NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_InputKey_C_ExecuteUbergraph_WBP_InputKey) == 0x000008, "Wrong alignment on WBP_InputKey_C_ExecuteUbergraph_WBP_InputKey");
static_assert(sizeof(WBP_InputKey_C_ExecuteUbergraph_WBP_InputKey) == 0x000040, "Wrong size on WBP_InputKey_C_ExecuteUbergraph_WBP_InputKey");
static_assert(offsetof(WBP_InputKey_C_ExecuteUbergraph_WBP_InputKey, EntryPoint) == 0x000000, "Member 'WBP_InputKey_C_ExecuteUbergraph_WBP_InputKey::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_InputKey_C_ExecuteUbergraph_WBP_InputKey, Temp_bool_Variable) == 0x000004, "Member 'WBP_InputKey_C_ExecuteUbergraph_WBP_InputKey::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_InputKey_C_ExecuteUbergraph_WBP_InputKey, Temp_byte_Variable) == 0x000005, "Member 'WBP_InputKey_C_ExecuteUbergraph_WBP_InputKey::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_InputKey_C_ExecuteUbergraph_WBP_InputKey, Temp_byte_Variable_1) == 0x000006, "Member 'WBP_InputKey_C_ExecuteUbergraph_WBP_InputKey::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_InputKey_C_ExecuteUbergraph_WBP_InputKey, K2Node_Event_DisplayInfo) == 0x000008, "Member 'WBP_InputKey_C_ExecuteUbergraph_WBP_InputKey::K2Node_Event_DisplayInfo' has a wrong offset!");
static_assert(offsetof(WBP_InputKey_C_ExecuteUbergraph_WBP_InputKey, K2Node_Event_bIsGamepadKey) == 0x000030, "Member 'WBP_InputKey_C_ExecuteUbergraph_WBP_InputKey::K2Node_Event_bIsGamepadKey' has a wrong offset!");
static_assert(offsetof(WBP_InputKey_C_ExecuteUbergraph_WBP_InputKey, K2Node_Select_Default) == 0x000031, "Member 'WBP_InputKey_C_ExecuteUbergraph_WBP_InputKey::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_InputKey_C_ExecuteUbergraph_WBP_InputKey, K2Node_MakeStruct_BrickUIIconSlot) == 0x000034, "Member 'WBP_InputKey_C_ExecuteUbergraph_WBP_InputKey::K2Node_MakeStruct_BrickUIIconSlot' has a wrong offset!");
static_assert(offsetof(WBP_InputKey_C_ExecuteUbergraph_WBP_InputKey, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x00003C, "Member 'WBP_InputKey_C_ExecuteUbergraph_WBP_InputKey::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");

// Function WBP_InputKey.WBP_InputKey_C.UpdateDisplayInfo
// 0x0030 (0x0030 - 0x0000)
struct WBP_InputKey_C_UpdateDisplayInfo final
{
public:
	struct FKeyDisplayTableRow                    DisplayInfo;                                       // 0x0000(0x0028)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          bIsGamepadKey;                                     // 0x0028(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_InputKey_C_UpdateDisplayInfo) == 0x000008, "Wrong alignment on WBP_InputKey_C_UpdateDisplayInfo");
static_assert(sizeof(WBP_InputKey_C_UpdateDisplayInfo) == 0x000030, "Wrong size on WBP_InputKey_C_UpdateDisplayInfo");
static_assert(offsetof(WBP_InputKey_C_UpdateDisplayInfo, DisplayInfo) == 0x000000, "Member 'WBP_InputKey_C_UpdateDisplayInfo::DisplayInfo' has a wrong offset!");
static_assert(offsetof(WBP_InputKey_C_UpdateDisplayInfo, bIsGamepadKey) == 0x000028, "Member 'WBP_InputKey_C_UpdateDisplayInfo::bIsGamepadKey' has a wrong offset!");

}

