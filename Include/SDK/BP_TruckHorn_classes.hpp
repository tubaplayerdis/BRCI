﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TruckHorn

#include "Basic.hpp"

#include "BrickRigs_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_TruckHorn.BP_TruckHorn_C
// 0x0000 (0x0060 - 0x0060)
class UBP_TruckHorn_C final : public USirenType
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_TruckHorn_C">();
	}
	static class UBP_TruckHorn_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_TruckHorn_C>();
	}
};
static_assert(alignof(UBP_TruckHorn_C) == 0x000008, "Wrong alignment on UBP_TruckHorn_C");
static_assert(sizeof(UBP_TruckHorn_C) == 0x000060, "Wrong size on UBP_TruckHorn_C");

}

