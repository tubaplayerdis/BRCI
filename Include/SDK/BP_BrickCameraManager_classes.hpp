﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BrickCameraManager

#include "Basic.hpp"

#include "BrickRigs_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_BrickCameraManager.BP_BrickCameraManager_C
// 0x0000 (0x2890 - 0x2890)
class ABP_BrickCameraManager_C final : public ABrickCameraManager
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BrickCameraManager_C">();
	}
	static class ABP_BrickCameraManager_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_BrickCameraManager_C>();
	}
};
static_assert(alignof(ABP_BrickCameraManager_C) == 0x000010, "Wrong alignment on ABP_BrickCameraManager_C");
static_assert(sizeof(ABP_BrickCameraManager_C) == 0x002890, "Wrong size on ABP_BrickCameraManager_C");

}

