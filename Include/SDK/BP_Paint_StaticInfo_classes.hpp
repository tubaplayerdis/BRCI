﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Paint_StaticInfo

#include "Basic.hpp"

#include "BrickRigs_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Paint_StaticInfo.BP_Paint_StaticInfo_C
// 0x0000 (0x0390 - 0x0390)
class UBP_Paint_StaticInfo_C : public UPaintAttachmentStaticInfo
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Paint_StaticInfo_C">();
	}
	static class UBP_Paint_StaticInfo_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_Paint_StaticInfo_C>();
	}
};
static_assert(alignof(UBP_Paint_StaticInfo_C) == 0x000010, "Wrong alignment on UBP_Paint_StaticInfo_C");
static_assert(sizeof(UBP_Paint_StaticInfo_C) == 0x000390, "Wrong size on UBP_Paint_StaticInfo_C");

}

