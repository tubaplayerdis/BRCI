﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_GenericCommercial

#include "Basic.hpp"

#include "BrickRigs_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_GenericCommercial.BP_GenericCommercial_C
// 0x0000 (0x02C0 - 0x02C0)
class ABP_GenericCommercial_C final : public ABrickBuilding
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_GenericCommercial_C">();
	}
	static class ABP_GenericCommercial_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_GenericCommercial_C>();
	}
};
static_assert(alignof(ABP_GenericCommercial_C) == 0x000010, "Wrong alignment on ABP_GenericCommercial_C");
static_assert(sizeof(ABP_GenericCommercial_C) == 0x0002C0, "Wrong size on ABP_GenericCommercial_C");

}

