﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BOF_Rods

#include "Basic.hpp"

#include "BrickRigs_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BOF_Rods.BOF_Rods_C
// 0x0000 (0x00B0 - 0x00B0)
class UBOF_Rods_C final : public UBrickEditorObjectFilter
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BOF_Rods_C">();
	}
	static class UBOF_Rods_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBOF_Rods_C>();
	}
};
static_assert(alignof(UBOF_Rods_C) == 0x000008, "Wrong alignment on UBOF_Rods_C");
static_assert(sizeof(UBOF_Rods_C) == 0x0000B0, "Wrong size on UBOF_Rods_C");

}

