﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_Character

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function ABP_Character.ABP_Character_C.ExecuteUbergraph_ABP_Character
// 0x0004 (0x0004 - 0x0000)
struct ABP_Character_C_ExecuteUbergraph_ABP_Character final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ABP_Character_C_ExecuteUbergraph_ABP_Character) == 0x000004, "Wrong alignment on ABP_Character_C_ExecuteUbergraph_ABP_Character");
static_assert(sizeof(ABP_Character_C_ExecuteUbergraph_ABP_Character) == 0x000004, "Wrong size on ABP_Character_C_ExecuteUbergraph_ABP_Character");
static_assert(offsetof(ABP_Character_C_ExecuteUbergraph_ABP_Character, EntryPoint) == 0x000000, "Member 'ABP_Character_C_ExecuteUbergraph_ABP_Character::EntryPoint' has a wrong offset!");

// Function ABP_Character.ABP_Character_C.AnimGraph
// 0x0010 (0x0010 - 0x0000)
struct ABP_Character_C_AnimGraph final
{
public:
	struct FPoseLink                              AnimGraph_0;                                       // 0x0000(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(ABP_Character_C_AnimGraph) == 0x000008, "Wrong alignment on ABP_Character_C_AnimGraph");
static_assert(sizeof(ABP_Character_C_AnimGraph) == 0x000010, "Wrong size on ABP_Character_C_AnimGraph");
static_assert(offsetof(ABP_Character_C_AnimGraph, AnimGraph_0) == 0x000000, "Member 'ABP_Character_C_AnimGraph::AnimGraph_0' has a wrong offset!");

}

