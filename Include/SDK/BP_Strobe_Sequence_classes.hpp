﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Strobe_Sequence

#include "Basic.hpp"

#include "BP_Blinker_Category_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Strobe_Sequence.BP_Strobe_Sequence_C
// 0x0000 (0x0080 - 0x0080)
class UBP_Strobe_Sequence_C final : public UBP_Blinker_Category_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Strobe_Sequence_C">();
	}
	static class UBP_Strobe_Sequence_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_Strobe_Sequence_C>();
	}
};
static_assert(alignof(UBP_Strobe_Sequence_C) == 0x000008, "Wrong alignment on UBP_Strobe_Sequence_C");
static_assert(sizeof(UBP_Strobe_Sequence_C) == 0x000080, "Wrong size on UBP_Strobe_Sequence_C");

}

