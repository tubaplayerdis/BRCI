﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Team_Zombies

#include "Basic.hpp"

#include "BP_Team_Default_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Team_Zombies.BP_Team_Zombies_C
// 0x0000 (0x00C8 - 0x00C8)
class UBP_Team_Zombies_C final : public UBP_Team_Default_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Team_Zombies_C">();
	}
	static class UBP_Team_Zombies_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_Team_Zombies_C>();
	}
};
static_assert(alignof(UBP_Team_Zombies_C) == 0x000008, "Wrong alignment on UBP_Team_Zombies_C");
static_assert(sizeof(UBP_Team_Zombies_C) == 0x0000C8, "Wrong size on UBP_Team_Zombies_C");

}

