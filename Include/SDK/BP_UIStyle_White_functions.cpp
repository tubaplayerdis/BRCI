﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_UIStyle_White

#include "Basic.hpp"

#include "BP_UIStyle_White_classes.hpp"
#include "BP_UIStyle_White_parameters.hpp"


namespace SDK
{

// Function BP_UIStyle_White.BP_UIStyle_White_C.ExecuteUbergraph_BP_UIStyle_White
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UIStyle_White_C::ExecuteUbergraph_BP_UIStyle_White(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UIStyle_White_C", "ExecuteUbergraph_BP_UIStyle_White");

	Params::BP_UIStyle_White_C_ExecuteUbergraph_BP_UIStyle_White Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_UIStyle_White.BP_UIStyle_White_C.BuildStyle
// (Event, Protected, BlueprintEvent)

void UBP_UIStyle_White_C::BuildStyle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UIStyle_White_C", "BuildStyle");

	UObject::ProcessEvent(Func, nullptr);
}

}

