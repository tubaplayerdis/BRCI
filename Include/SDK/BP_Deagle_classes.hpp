﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Deagle

#include "Basic.hpp"

#include "BrickRigs_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Deagle.BP_Deagle_C
// 0x0000 (0x0298 - 0x0298)
class ABP_Deagle_C final : public AFirearm
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Deagle_C">();
	}
	static class ABP_Deagle_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Deagle_C>();
	}
};
static_assert(alignof(ABP_Deagle_C) == 0x000008, "Wrong alignment on ABP_Deagle_C");
static_assert(sizeof(ABP_Deagle_C) == 0x000298, "Wrong size on ABP_Deagle_C");

}

