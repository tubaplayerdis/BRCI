﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FluMoveSync

#include "Basic.hpp"

#include "FluMoveSync_classes.hpp"
#include "FluMoveSync_parameters.hpp"


namespace SDK
{

// Function FluMoveSync.FluMoveSyncKinematicActor.SetInterpolatedComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USceneComponent*                  Comp                                                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFluMoveSyncKinematicActor::SetInterpolatedComponent(class USceneComponent* Comp)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FluMoveSyncKinematicActor", "SetInterpolatedComponent");

	Params::FluMoveSyncKinematicActor_SetInterpolatedComponent Parms{};

	Parms.Comp = Comp;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function FluMoveSync.FluMoveSyncKinematicActor.SetMovementComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMovementComponent*               Comp                                                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFluMoveSyncKinematicActor::SetMovementComponent(class UMovementComponent* Comp)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FluMoveSyncKinematicActor", "SetMovementComponent");

	Params::FluMoveSyncKinematicActor_SetMovementComponent Parms{};

	Parms.Comp = Comp;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}

