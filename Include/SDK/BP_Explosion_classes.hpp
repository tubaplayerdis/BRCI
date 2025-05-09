﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Explosion

#include "Basic.hpp"

#include "BrickRigs_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Explosion.BP_Explosion_C
// 0x0000 (0x0270 - 0x0270)
class ABP_Explosion_C final : public AExplosion
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Explosion_C">();
	}
	static class ABP_Explosion_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Explosion_C>();
	}
};
static_assert(alignof(ABP_Explosion_C) == 0x000008, "Wrong alignment on ABP_Explosion_C");
static_assert(sizeof(ABP_Explosion_C) == 0x000270, "Wrong size on ABP_Explosion_C");

}

