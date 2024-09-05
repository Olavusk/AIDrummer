// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Drummer/Public/Characters/DrummerCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDrummerCharacter() {}
// Cross Module References
	DRUMMER_API UClass* Z_Construct_UClass_ADrummerCharacter();
	DRUMMER_API UClass* Z_Construct_UClass_ADrummerCharacter_NoRegister();
	DRUMMER_API UClass* Z_Construct_UClass_AItem_NoRegister();
	DRUMMER_API UClass* Z_Construct_UClass_AWeapon_NoRegister();
	DRUMMER_API UEnum* Z_Construct_UEnum_Drummer_EActionState();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Drummer();
// End Cross Module References
	DEFINE_FUNCTION(ADrummerCharacter::execAttackEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AttackEnd();
		P_NATIVE_END;
	}
	void ADrummerCharacter::StaticRegisterNativesADrummerCharacter()
	{
		UClass* Class = ADrummerCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AttackEnd", &ADrummerCharacter::execAttackEnd },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ADrummerCharacter_AttackEnd_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADrummerCharacter_AttackEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/DrummerCharacter.h" },
	};
#endif
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
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADrummerCharacter);
	UClass* Z_Construct_UClass_ADrummerCharacter_NoRegister()
	{
		return ADrummerCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ADrummerCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DrummerContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DrummerContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MovementAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttackAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AttackAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractAction;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ActionState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActionState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ActionState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewCamera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ViewCamera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappingItem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappingItem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EquippedWeapon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EquippedWeapon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttackMontage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AttackMontage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EquipMontage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EquipMontage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADrummerCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Drummer,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADrummerCharacter_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ADrummerCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ADrummerCharacter_AttackEnd, "AttackEnd" }, // 4062595048
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADrummerCharacter_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADrummerCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Characters/DrummerCharacter.h" },
		{ "ModuleRelativePath", "Public/Characters/DrummerCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADrummerCharacter_Statics::NewProp_DrummerContext_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Characters/DrummerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADrummerCharacter_Statics::NewProp_DrummerContext = { "DrummerContext", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADrummerCharacter, DrummerContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADrummerCharacter_Statics::NewProp_DrummerContext_MetaData), Z_Construct_UClass_ADrummerCharacter_Statics::NewProp_DrummerContext_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADrummerCharacter_Statics::NewProp_MovementAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Characters/DrummerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADrummerCharacter_Statics::NewProp_MovementAction = { "MovementAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADrummerCharacter, MovementAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADrummerCharacter_Statics::NewProp_MovementAction_MetaData), Z_Construct_UClass_ADrummerCharacter_Statics::NewProp_MovementAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADrummerCharacter_Statics::NewProp_LookAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Characters/DrummerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADrummerCharacter_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADrummerCharacter, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADrummerCharacter_Statics::NewProp_LookAction_MetaData), Z_Construct_UClass_ADrummerCharacter_Statics::NewProp_LookAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADrummerCharacter_Statics::NewProp_JumpAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Characters/DrummerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADrummerCharacter_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADrummerCharacter, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADrummerCharacter_Statics::NewProp_JumpAction_MetaData), Z_Construct_UClass_ADrummerCharacter_Statics::NewProp_JumpAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADrummerCharacter_Statics::NewProp_AttackAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Characters/DrummerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADrummerCharacter_Statics::NewProp_AttackAction = { "AttackAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADrummerCharacter, AttackAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADrummerCharacter_Statics::NewProp_AttackAction_MetaData), Z_Construct_UClass_ADrummerCharacter_Statics::NewProp_AttackAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADrummerCharacter_Statics::NewProp_InteractAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Characters/DrummerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADrummerCharacter_Statics::NewProp_InteractAction = { "InteractAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADrummerCharacter, InteractAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADrummerCharacter_Statics::NewProp_InteractAction_MetaData), Z_Construct_UClass_ADrummerCharacter_Statics::NewProp_InteractAction_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ADrummerCharacter_Statics::NewProp_ActionState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADrummerCharacter_Statics::NewProp_ActionState_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "DrummerCharacter" },
		{ "ModuleRelativePath", "Public/Characters/DrummerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ADrummerCharacter_Statics::NewProp_ActionState = { "ActionState", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADrummerCharacter, ActionState), Z_Construct_UEnum_Drummer_EActionState, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADrummerCharacter_Statics::NewProp_ActionState_MetaData), Z_Construct_UClass_ADrummerCharacter_Statics::NewProp_ActionState_MetaData) }; // 2320188286
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADrummerCharacter_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "Category", "DrummerCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/DrummerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADrummerCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADrummerCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADrummerCharacter_Statics::NewProp_CameraBoom_MetaData), Z_Construct_UClass_ADrummerCharacter_Statics::NewProp_CameraBoom_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADrummerCharacter_Statics::NewProp_ViewCamera_MetaData[] = {
		{ "Category", "DrummerCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/DrummerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADrummerCharacter_Statics::NewProp_ViewCamera = { "ViewCamera", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADrummerCharacter, ViewCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADrummerCharacter_Statics::NewProp_ViewCamera_MetaData), Z_Construct_UClass_ADrummerCharacter_Statics::NewProp_ViewCamera_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADrummerCharacter_Statics::NewProp_OverlappingItem_MetaData[] = {
		{ "Category", "DrummerCharacter" },
		{ "ModuleRelativePath", "Public/Characters/DrummerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADrummerCharacter_Statics::NewProp_OverlappingItem = { "OverlappingItem", nullptr, (EPropertyFlags)0x0040000000020801, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADrummerCharacter, OverlappingItem), Z_Construct_UClass_AItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADrummerCharacter_Statics::NewProp_OverlappingItem_MetaData), Z_Construct_UClass_ADrummerCharacter_Statics::NewProp_OverlappingItem_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADrummerCharacter_Statics::NewProp_EquippedWeapon_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/Characters/DrummerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADrummerCharacter_Statics::NewProp_EquippedWeapon = { "EquippedWeapon", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADrummerCharacter, EquippedWeapon), Z_Construct_UClass_AWeapon_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADrummerCharacter_Statics::NewProp_EquippedWeapon_MetaData), Z_Construct_UClass_ADrummerCharacter_Statics::NewProp_EquippedWeapon_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADrummerCharacter_Statics::NewProp_AttackMontage_MetaData[] = {
		{ "Category", "Montages" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Animation montages\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Characters/DrummerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Animation montages" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADrummerCharacter_Statics::NewProp_AttackMontage = { "AttackMontage", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADrummerCharacter, AttackMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADrummerCharacter_Statics::NewProp_AttackMontage_MetaData), Z_Construct_UClass_ADrummerCharacter_Statics::NewProp_AttackMontage_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADrummerCharacter_Statics::NewProp_EquipMontage_MetaData[] = {
		{ "Category", "Montages" },
		{ "ModuleRelativePath", "Public/Characters/DrummerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADrummerCharacter_Statics::NewProp_EquipMontage = { "EquipMontage", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADrummerCharacter, EquipMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADrummerCharacter_Statics::NewProp_EquipMontage_MetaData), Z_Construct_UClass_ADrummerCharacter_Statics::NewProp_EquipMontage_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADrummerCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADrummerCharacter_Statics::NewProp_DrummerContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADrummerCharacter_Statics::NewProp_MovementAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADrummerCharacter_Statics::NewProp_LookAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADrummerCharacter_Statics::NewProp_JumpAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADrummerCharacter_Statics::NewProp_AttackAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADrummerCharacter_Statics::NewProp_InteractAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADrummerCharacter_Statics::NewProp_ActionState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADrummerCharacter_Statics::NewProp_ActionState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADrummerCharacter_Statics::NewProp_CameraBoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADrummerCharacter_Statics::NewProp_ViewCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADrummerCharacter_Statics::NewProp_OverlappingItem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADrummerCharacter_Statics::NewProp_EquippedWeapon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADrummerCharacter_Statics::NewProp_AttackMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADrummerCharacter_Statics::NewProp_EquipMontage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADrummerCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADrummerCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ADrummerCharacter_Statics::ClassParams = {
		&ADrummerCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ADrummerCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ADrummerCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADrummerCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ADrummerCharacter_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADrummerCharacter_Statics::PropPointers) < 2048);
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
	struct Z_CompiledInDeferFile_FID_olavu_Documents_Unreal_Projects_Drummer_Source_Drummer_Public_Characters_DrummerCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_olavu_Documents_Unreal_Projects_Drummer_Source_Drummer_Public_Characters_DrummerCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ADrummerCharacter, ADrummerCharacter::StaticClass, TEXT("ADrummerCharacter"), &Z_Registration_Info_UClass_ADrummerCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADrummerCharacter), 2101946730U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_olavu_Documents_Unreal_Projects_Drummer_Source_Drummer_Public_Characters_DrummerCharacter_h_221866801(TEXT("/Script/Drummer"),
		Z_CompiledInDeferFile_FID_olavu_Documents_Unreal_Projects_Drummer_Source_Drummer_Public_Characters_DrummerCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_olavu_Documents_Unreal_Projects_Drummer_Source_Drummer_Public_Characters_DrummerCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
