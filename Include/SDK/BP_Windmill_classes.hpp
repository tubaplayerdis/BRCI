﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Windmill

#include "Basic.hpp"

#include "BrickRigs_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Windmill.BP_Windmill_C
// 0x0000 (0x0268 - 0x0268)
class ABP_Windmill_C final : public AWindmill
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Windmill_C">();
	}
	static class ABP_Windmill_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Windmill_C>();
	}
};
static_assert(alignof(ABP_Windmill_C) == 0x000008, "Wrong alignment on ABP_Windmill_C");
static_assert(sizeof(ABP_Windmill_C) == 0x000268, "Wrong size on ABP_Windmill_C");

}

