﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_InputActionList

#include "Basic.hpp"

#include "BrickRigs_structs.hpp"


namespace SDK::Params
{

// Function WBP_InputActionList.WBP_InputActionList_C.ExecuteUbergraph_WBP_InputActionList
// 0x0030 (0x0030 - 0x0000)
struct WBP_InputActionList_C_ExecuteUbergraph_WBP_InputActionList final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable;                               // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable_1;                             // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EInputActionListMode                          Temp_byte_Variable;                                // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EInputActionListMode                          K2Node_Event_NewMode;                              // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Select_Default;                             // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_MakeLiteralFloat_ReturnValue;             // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_MakeLiteralFloat_ReturnValue_1;           // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Select_Default_1;                           // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_InputActionList_C_ExecuteUbergraph_WBP_InputActionList) == 0x000008, "Wrong alignment on WBP_InputActionList_C_ExecuteUbergraph_WBP_InputActionList");
static_assert(sizeof(WBP_InputActionList_C_ExecuteUbergraph_WBP_InputActionList) == 0x000030, "Wrong size on WBP_InputActionList_C_ExecuteUbergraph_WBP_InputActionList");
static_assert(offsetof(WBP_InputActionList_C_ExecuteUbergraph_WBP_InputActionList, EntryPoint) == 0x000000, "Member 'WBP_InputActionList_C_ExecuteUbergraph_WBP_InputActionList::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_InputActionList_C_ExecuteUbergraph_WBP_InputActionList, Temp_bool_Variable) == 0x000004, "Member 'WBP_InputActionList_C_ExecuteUbergraph_WBP_InputActionList::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_InputActionList_C_ExecuteUbergraph_WBP_InputActionList, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'WBP_InputActionList_C_ExecuteUbergraph_WBP_InputActionList::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InputActionList_C_ExecuteUbergraph_WBP_InputActionList, Temp_float_Variable) == 0x000010, "Member 'WBP_InputActionList_C_ExecuteUbergraph_WBP_InputActionList::Temp_float_Variable' has a wrong offset!");
static_assert(offsetof(WBP_InputActionList_C_ExecuteUbergraph_WBP_InputActionList, Temp_float_Variable_1) == 0x000014, "Member 'WBP_InputActionList_C_ExecuteUbergraph_WBP_InputActionList::Temp_float_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_InputActionList_C_ExecuteUbergraph_WBP_InputActionList, Temp_byte_Variable) == 0x000018, "Member 'WBP_InputActionList_C_ExecuteUbergraph_WBP_InputActionList::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_InputActionList_C_ExecuteUbergraph_WBP_InputActionList, K2Node_Event_IsDesignTime) == 0x000019, "Member 'WBP_InputActionList_C_ExecuteUbergraph_WBP_InputActionList::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(WBP_InputActionList_C_ExecuteUbergraph_WBP_InputActionList, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x00001A, "Member 'WBP_InputActionList_C_ExecuteUbergraph_WBP_InputActionList::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InputActionList_C_ExecuteUbergraph_WBP_InputActionList, K2Node_Event_NewMode) == 0x00001B, "Member 'WBP_InputActionList_C_ExecuteUbergraph_WBP_InputActionList::K2Node_Event_NewMode' has a wrong offset!");
static_assert(offsetof(WBP_InputActionList_C_ExecuteUbergraph_WBP_InputActionList, K2Node_Select_Default) == 0x00001C, "Member 'WBP_InputActionList_C_ExecuteUbergraph_WBP_InputActionList::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_InputActionList_C_ExecuteUbergraph_WBP_InputActionList, CallFunc_MakeLiteralFloat_ReturnValue) == 0x000020, "Member 'WBP_InputActionList_C_ExecuteUbergraph_WBP_InputActionList::CallFunc_MakeLiteralFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InputActionList_C_ExecuteUbergraph_WBP_InputActionList, CallFunc_MakeLiteralFloat_ReturnValue_1) == 0x000024, "Member 'WBP_InputActionList_C_ExecuteUbergraph_WBP_InputActionList::CallFunc_MakeLiteralFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_InputActionList_C_ExecuteUbergraph_WBP_InputActionList, K2Node_Select_Default_1) == 0x000028, "Member 'WBP_InputActionList_C_ExecuteUbergraph_WBP_InputActionList::K2Node_Select_Default_1' has a wrong offset!");

// Function WBP_InputActionList.WBP_InputActionList_C.UpdateInputActionListMode
// 0x0001 (0x0001 - 0x0000)
struct WBP_InputActionList_C_UpdateInputActionListMode final
{
public:
	EInputActionListMode                          NewMode;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_InputActionList_C_UpdateInputActionListMode) == 0x000001, "Wrong alignment on WBP_InputActionList_C_UpdateInputActionListMode");
static_assert(sizeof(WBP_InputActionList_C_UpdateInputActionListMode) == 0x000001, "Wrong size on WBP_InputActionList_C_UpdateInputActionListMode");
static_assert(offsetof(WBP_InputActionList_C_UpdateInputActionListMode, NewMode) == 0x000000, "Member 'WBP_InputActionList_C_UpdateInputActionListMode::NewMode' has a wrong offset!");

// Function WBP_InputActionList.WBP_InputActionList_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WBP_InputActionList_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_InputActionList_C_PreConstruct) == 0x000001, "Wrong alignment on WBP_InputActionList_C_PreConstruct");
static_assert(sizeof(WBP_InputActionList_C_PreConstruct) == 0x000001, "Wrong size on WBP_InputActionList_C_PreConstruct");
static_assert(offsetof(WBP_InputActionList_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WBP_InputActionList_C_PreConstruct::IsDesignTime' has a wrong offset!");

}

