﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: C_Cristal_Red

#include "Basic.hpp"

#include "BrickRigs_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass C_Cristal_Red.C_Cristal_Red_C
// 0x0000 (0x0050 - 0x0050)
class UC_Cristal_Red_C final : public UBrickPattern
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"C_Cristal_Red_C">();
	}
	static class UC_Cristal_Red_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UC_Cristal_Red_C>();
	}
};
static_assert(alignof(UC_Cristal_Red_C) == 0x000008, "Wrong alignment on UC_Cristal_Red_C");
static_assert(sizeof(UC_Cristal_Red_C) == 0x000050, "Wrong size on UC_Cristal_Red_C");

}

