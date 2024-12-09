// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Drummer/Public/Characters/DrummerCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDrummerCharacter() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
DRUMMER_API UClass* Z_Construct_UClass_ADrummerCharacter();
DRUMMER_API UClass* Z_Construct_UClass_ADrummerCharacter_NoRegister();
DRUMMER_API UClass* Z_Construct_UClass_ADrumstick_NoRegister();
DRUMMER_API UClass* Z_Construct_UClass_AItem_NoRegister();
DRUMMER_API UClass* Z_Construct_UClass_AMIDIEventBroadcaster_NoRegister();
DRUMMER_API UClass* Z_Construct_UClass_AWeapon_NoRegister();
DRUMMER_API UClass* Z_Construct_UClass_UMIDIEventReceiver_NoRegister();
DRUMMER_API UEnum* Z_Construct_UEnum_Drummer_EActionState();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionEnabled();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
UPackage* Z_Construct_UPackage__Script_Drummer();
// End Cross Module References

// Begin Class ADrummerCharacter Function Arm
struct Z_Construct_UFunction_ADrummerCharacter_Arm_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/DrummerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADrummerCharacter_Arm_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADrummerCharacter, nullptr, "Arm", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADrummerCharacter_Arm_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADrummerCharacter_Arm_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ADrummerCharacter_Arm()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADrummerCharacter_Arm_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADrummerCharacter::execArm)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Arm();
	P_NATIVE_END;
}
// End Class ADrummerCharacter Function Arm

// Begin Class ADrummerCharacter Function AttackEnd
struct Z_Construct_UFunction_ADrummerCharacter_AttackEnd_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/DrummerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADrummerCharacter_AttackEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADrummerCharacter, nullptr, "AttackEnd", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADrummerCharacter_AttackEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADrummerCharacter_AttackEnd_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ADrummerCharacter_AttackEnd()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADrummerCharacter_AttackEnd_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADrummerCharacter::execAttackEnd)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AttackEnd();
	P_NATIVE_END;
}
// End Class ADrummerCharacter Function AttackEnd

// Begin Class ADrummerCharacter Function Disarm
struct Z_Construct_UFunction_ADrummerCharacter_Disarm_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/DrummerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADrummerCharacter_Disarm_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADrummerCharacter, nullptr, "Disarm", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADrummerCharacter_Disarm_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADrummerCharacter_Disarm_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ADrummerCharacter_Disarm()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADrummerCharacter_Disarm_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADrummerCharacter::execDisarm)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Disarm();
	P_NATIVE_END;
}
// End Class ADrummerCharacter Function Disarm

// Begin Class ADrummerCharacter Function EnterDrummingState
struct Z_Construct_UFunction_ADrummerCharacter_EnterDrummingState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/DrummerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADrummerCharacter_EnterDrummingState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADrummerCharacter, nullptr, "EnterDrummingState", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADrummerCharacter_EnterDrummingState_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADrummerCharacter_EnterDrummingState_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ADrummerCharacter_EnterDrummingState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADrummerCharacter_EnterDrummingState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADrummerCharacter::execEnterDrummingState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EnterDrummingState();
	P_NATIVE_END;
}
// End Class ADrummerCharacter Function EnterDrummingState

// Begin Class ADrummerCharacter Function EquipDrumsticks
struct Z_Construct_UFunction_ADrummerCharacter_EquipDrumsticks_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/DrummerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADrummerCharacter_EquipDrumsticks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADrummerCharacter, nullptr, "EquipDrumsticks", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADrummerCharacter_EquipDrumsticks_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADrummerCharacter_EquipDrumsticks_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ADrummerCharacter_EquipDrumsticks()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADrummerCharacter_EquipDrumsticks_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADrummerCharacter::execEquipDrumsticks)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EquipDrumsticks();
	P_NATIVE_END;
}
// End Class ADrummerCharacter Function EquipDrumsticks

// Begin Class ADrummerCharacter Function FinishEquipping
struct Z_Construct_UFunction_ADrummerCharacter_FinishEquipping_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/DrummerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADrummerCharacter_FinishEquipping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADrummerCharacter, nullptr, "FinishEquipping", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADrummerCharacter_FinishEquipping_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADrummerCharacter_FinishEquipping_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ADrummerCharacter_FinishEquipping()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADrummerCharacter_FinishEquipping_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADrummerCharacter::execFinishEquipping)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FinishEquipping();
	P_NATIVE_END;
}
// End Class ADrummerCharacter Function FinishEquipping

// Begin Class ADrummerCharacter Function SetDrumstickCollisionEnabled
struct Z_Construct_UFunction_ADrummerCharacter_SetDrumstickCollisionEnabled_Statics
{
	struct DrummerCharacter_eventSetDrumstickCollisionEnabled_Parms
	{
		TEnumAsByte<ECollisionEnabled::Type> CollisionEnabled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/DrummerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_CollisionEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ADrummerCharacter_SetDrumstickCollisionEnabled_Statics::NewProp_CollisionEnabled = { "CollisionEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DrummerCharacter_eventSetDrumstickCollisionEnabled_Parms, CollisionEnabled), Z_Construct_UEnum_Engine_ECollisionEnabled, METADATA_PARAMS(0, nullptr) }; // 2362857466
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADrummerCharacter_SetDrumstickCollisionEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADrummerCharacter_SetDrumstickCollisionEnabled_Statics::NewProp_CollisionEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADrummerCharacter_SetDrumstickCollisionEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADrummerCharacter_SetDrumstickCollisionEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADrummerCharacter, nullptr, "SetDrumstickCollisionEnabled", nullptr, nullptr, Z_Construct_UFunction_ADrummerCharacter_SetDrumstickCollisionEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADrummerCharacter_SetDrumstickCollisionEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADrummerCharacter_SetDrumstickCollisionEnabled_Statics::DrummerCharacter_eventSetDrumstickCollisionEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADrummerCharacter_SetDrumstickCollisionEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADrummerCharacter_SetDrumstickCollisionEnabled_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADrummerCharacter_SetDrumstickCollisionEnabled_Statics::DrummerCharacter_eventSetDrumstickCollisionEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADrummerCharacter_SetDrumstickCollisionEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADrummerCharacter_SetDrumstickCollisionEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADrummerCharacter::execSetDrumstickCollisionEnabled)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_CollisionEnabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDrumstickCollisionEnabled(ECollisionEnabled::Type(Z_Param_CollisionEnabled));
	P_NATIVE_END;
}
// End Class ADrummerCharacter Function SetDrumstickCollisionEnabled

// Begin Class ADrummerCharacter Function SetWeaponCollisionEnabled
struct Z_Construct_UFunction_ADrummerCharacter_SetWeaponCollisionEnabled_Statics
{
	struct DrummerCharacter_eventSetWeaponCollisionEnabled_Parms
	{
		TEnumAsByte<ECollisionEnabled::Type> CollisionEnabled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/DrummerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_CollisionEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ADrummerCharacter_SetWeaponCollisionEnabled_Statics::NewProp_CollisionEnabled = { "CollisionEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DrummerCharacter_eventSetWeaponCollisionEnabled_Parms, CollisionEnabled), Z_Construct_UEnum_Engine_ECollisionEnabled, METADATA_PARAMS(0, nullptr) }; // 2362857466
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADrummerCharacter_SetWeaponCollisionEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADrummerCharacter_SetWeaponCollisionEnabled_Statics::NewProp_CollisionEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADrummerCharacter_SetWeaponCollisionEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADrummerCharacter_SetWeaponCollisionEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADrummerCharacter, nullptr, "SetWeaponCollisionEnabled", nullptr, nullptr, Z_Construct_UFunction_ADrummerCharacter_SetWeaponCollisionEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADrummerCharacter_SetWeaponCollisionEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADrummerCharacter_SetWeaponCollisionEnabled_Statics::DrummerCharacter_eventSetWeaponCollisionEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADrummerCharacter_SetWeaponCollisionEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADrummerCharacter_SetWeaponCollisionEnabled_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADrummerCharacter_SetWeaponCollisionEnabled_Statics::DrummerCharacter_eventSetWeaponCollisionEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADrummerCharacter_SetWeaponCollisionEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADrummerCharacter_SetWeaponCollisionEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADrummerCharacter::execSetWeaponCollisionEnabled)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_CollisionEnabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetWeaponCollisionEnabled(ECollisionEnabled::Type(Z_Param_CollisionEnabled));
	P_NATIVE_END;
}
// End Class ADrummerCharacter Function SetWeaponCollisionEnabled

// Begin Class ADrummerCharacter
void ADrummerCharacter::StaticRegisterNativesADrummerCharacter()
{
	UClass* Class = ADrummerCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Arm", &ADrummerCharacter::execArm },
		{ "AttackEnd", &ADrummerCharacter::execAttackEnd },
		{ "Disarm", &ADrummerCharacter::execDisarm },
		{ "EnterDrummingState", &ADrummerCharacter::execEnterDrummingState },
		{ "EquipDrumsticks", &ADrummerCharacter::execEquipDrumsticks },
		{ "FinishEquipping", &ADrummerCharacter::execFinishEquipping },
		{ "SetDrumstickCollisionEnabled", &ADrummerCharacter::execSetDrumstickCollisionEnabled },
		{ "SetWeaponCollisionEnabled", &ADrummerCharacter::execSetWeaponCollisionEnabled },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADrummerCharacter);
UClass* Z_Construct_UClass_ADrummerCharacter_NoRegister()
{
	return ADrummerCharacter::StaticClass();
}
struct Z_Construct_UClass_ADrummerCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Characters/DrummerCharacter.h" },
		{ "ModuleRelativePath", "Public/Characters/DrummerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DrummerContext_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Characters/DrummerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Characters/DrummerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Characters/DrummerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Characters/DrummerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Characters/DrummerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Characters/DrummerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MIDIBroadcaster_MetaData[] = {
		{ "Category", "MIDI" },
		{ "ModuleRelativePath", "Public/Characters/DrummerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActionState_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "DrummerCharacter" },
		{ "ModuleRelativePath", "Public/Characters/DrummerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[] = {
		{ "Category", "DrummerCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/DrummerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ViewCamera_MetaData[] = {
		{ "Category", "DrummerCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/DrummerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappingItem_MetaData[] = {
		{ "Category", "DrummerCharacter" },
		{ "ModuleRelativePath", "Public/Characters/DrummerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EquippedWeapon_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/Characters/DrummerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EquippedRightHandDrumstick_MetaData[] = {
		{ "Category", "Drumstick" },
		{ "ModuleRelativePath", "Public/Characters/DrummerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EquippedLeftHandDrumstick_MetaData[] = {
		{ "Category", "Drumstick" },
		{ "ModuleRelativePath", "Public/Characters/DrummerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DrumstickClass_MetaData[] = {
		{ "Category", "Drumstick" },
		{ "ModuleRelativePath", "Public/Characters/DrummerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackMontage_MetaData[] = {
		{ "Category", "Montages" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Animation montages\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Characters/DrummerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Animation montages" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EquipMontage_MetaData[] = {
		{ "Category", "Montages" },
		{ "ModuleRelativePath", "Public/Characters/DrummerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SimpleDrumMontage_MetaData[] = {
		{ "Category", "Montages" },
		{ "ModuleRelativePath", "Public/Characters/DrummerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DrummerContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MovementAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttackAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MIDIBroadcaster;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ActionState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ActionState;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ViewCamera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappingItem;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EquippedWeapon;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EquippedRightHandDrumstick;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EquippedLeftHandDrumstick;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DrumstickClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttackMontage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EquipMontage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SimpleDrumMontage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ADrummerCharacter_Arm, "Arm" }, // 2240789902
		{ &Z_Construct_UFunction_ADrummerCharacter_AttackEnd, "AttackEnd" }, // 2216290967
		{ &Z_Construct_UFunction_ADrummerCharacter_Disarm, "Disarm" }, // 33327586
		{ &Z_Construct_UFunction_ADrummerCharacter_EnterDrummingState, "EnterDrummingState" }, // 1250024600
		{ &Z_Construct_UFunction_ADrummerCharacter_EquipDrumsticks, "EquipDrumsticks" }, // 3691158017
		{ &Z_Construct_UFunction_ADrummerCharacter_FinishEquipping, "FinishEquipping" }, // 1989418662
		{ &Z_Construct_UFunction_ADrummerCharacter_SetDrumstickCollisionEnabled, "SetDrumstickCollisionEnabled" }, // 508905460
		{ &Z_Construct_UFunction_ADrummerCharacter_SetWeaponCollisionEnabled, "SetWeaponCollisionEnabled" }, // 1634687634
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADrummerCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADrummerCharacter_Statics::NewProp_DrummerContext = { "DrummerContext", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADrummerCharacter, DrummerContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DrummerContext_MetaData), NewProp_DrummerContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADrummerCharacter_Statics::NewProp_MovementAction = { "MovementAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADrummerCharacter, MovementAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementAction_MetaData), NewProp_MovementAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADrummerCharacter_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADrummerCharacter, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAction_MetaData), NewProp_LookAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADrummerCharacter_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADrummerCharacter, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpAction_MetaData), NewProp_JumpAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADrummerCharacter_Statics::NewProp_AttackAction = { "AttackAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADrummerCharacter, AttackAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackAction_MetaData), NewProp_AttackAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADrummerCharacter_Statics::NewProp_InteractAction = { "InteractAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADrummerCharacter, InteractAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractAction_MetaData), NewProp_InteractAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADrummerCharacter_Statics::NewProp_MIDIBroadcaster = { "MIDIBroadcaster", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADrummerCharacter, MIDIBroadcaster), Z_Construct_UClass_AMIDIEventBroadcaster_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MIDIBroadcaster_MetaData), NewProp_MIDIBroadcaster_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ADrummerCharacter_Statics::NewProp_ActionState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ADrummerCharacter_Statics::NewProp_ActionState = { "ActionState", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADrummerCharacter, ActionState), Z_Construct_UEnum_Drummer_EActionState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActionState_MetaData), NewProp_ActionState_MetaData) }; // 2938374222
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADrummerCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADrummerCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraBoom_MetaData), NewProp_CameraBoom_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADrummerCharacter_Statics::NewProp_ViewCamera = { "ViewCamera", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADrummerCharacter, ViewCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ViewCamera_MetaData), NewProp_ViewCamera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADrummerCharacter_Statics::NewProp_OverlappingItem = { "OverlappingItem", nullptr, (EPropertyFlags)0x0040000000020801, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADrummerCharacter, OverlappingItem), Z_Construct_UClass_AItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappingItem_MetaData), NewProp_OverlappingItem_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADrummerCharacter_Statics::NewProp_EquippedWeapon = { "EquippedWeapon", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADrummerCharacter, EquippedWeapon), Z_Construct_UClass_AWeapon_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EquippedWeapon_MetaData), NewProp_EquippedWeapon_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADrummerCharacter_Statics::NewProp_EquippedRightHandDrumstick = { "EquippedRightHandDrumstick", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADrummerCharacter, EquippedRightHandDrumstick), Z_Construct_UClass_ADrumstick_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EquippedRightHandDrumstick_MetaData), NewProp_EquippedRightHandDrumstick_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADrummerCharacter_Statics::NewProp_EquippedLeftHandDrumstick = { "EquippedLeftHandDrumstick", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADrummerCharacter, EquippedLeftHandDrumstick), Z_Construct_UClass_ADrumstick_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EquippedLeftHandDrumstick_MetaData), NewProp_EquippedLeftHandDrumstick_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ADrummerCharacter_Statics::NewProp_DrumstickClass = { "DrumstickClass", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADrummerCharacter, DrumstickClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ADrumstick_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DrumstickClass_MetaData), NewProp_DrumstickClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADrummerCharacter_Statics::NewProp_AttackMontage = { "AttackMontage", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADrummerCharacter, AttackMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackMontage_MetaData), NewProp_AttackMontage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADrummerCharacter_Statics::NewProp_EquipMontage = { "EquipMontage", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADrummerCharacter, EquipMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EquipMontage_MetaData), NewProp_EquipMontage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADrummerCharacter_Statics::NewProp_SimpleDrumMontage = { "SimpleDrumMontage", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADrummerCharacter, SimpleDrumMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SimpleDrumMontage_MetaData), NewProp_SimpleDrumMontage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADrummerCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADrummerCharacter_Statics::NewProp_DrummerContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADrummerCharacter_Statics::NewProp_MovementAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADrummerCharacter_Statics::NewProp_LookAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADrummerCharacter_Statics::NewProp_JumpAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADrummerCharacter_Statics::NewProp_AttackAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADrummerCharacter_Statics::NewProp_InteractAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADrummerCharacter_Statics::NewProp_MIDIBroadcaster,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADrummerCharacter_Statics::NewProp_ActionState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADrummerCharacter_Statics::NewProp_ActionState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADrummerCharacter_Statics::NewProp_CameraBoom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADrummerCharacter_Statics::NewProp_ViewCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADrummerCharacter_Statics::NewProp_OverlappingItem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADrummerCharacter_Statics::NewProp_EquippedWeapon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADrummerCharacter_Statics::NewProp_EquippedRightHandDrumstick,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADrummerCharacter_Statics::NewProp_EquippedLeftHandDrumstick,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADrummerCharacter_Statics::NewProp_DrumstickClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADrummerCharacter_Statics::NewProp_AttackMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADrummerCharacter_Statics::NewProp_EquipMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADrummerCharacter_Statics::NewProp_SimpleDrumMontage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADrummerCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADrummerCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_Drummer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADrummerCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ADrummerCharacter_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UMIDIEventReceiver_NoRegister, (int32)VTABLE_OFFSET(ADrummerCharacter, IMIDIEventReceiver), false },  // 3129381067
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADrummerCharacter_Statics::ClassParams = {
	&ADrummerCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ADrummerCharacter_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ADrummerCharacter_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADrummerCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ADrummerCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADrummerCharacter()
{
	if (!Z_Registration_Info_UClass_ADrummerCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADrummerCharacter.OuterSingleton, Z_Construct_UClass_ADrummerCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADrummerCharacter.OuterSingleton;
}
template<> DRUMMER_API UClass* StaticClass<ADrummerCharacter>()
{
	return ADrummerCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADrummerCharacter);
ADrummerCharacter::~ADrummerCharacter() {}
// End Class ADrummerCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_projects_AIDrummer_Source_Drummer_Public_Characters_DrummerCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADrummerCharacter, ADrummerCharacter::StaticClass, TEXT("ADrummerCharacter"), &Z_Registration_Info_UClass_ADrummerCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADrummerCharacter), 4196262029U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projects_AIDrummer_Source_Drummer_Public_Characters_DrummerCharacter_h_3904909530(TEXT("/Script/Drummer"),
	Z_CompiledInDeferFile_FID_projects_AIDrummer_Source_Drummer_Public_Characters_DrummerCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projects_AIDrummer_Source_Drummer_Public_Characters_DrummerCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
