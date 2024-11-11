// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Drummer/Public/Characters/DrummerAnimInstance.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDrummerAnimInstance() {}

// Begin Cross Module References
DRUMMER_API UClass* Z_Construct_UClass_ADrummerCharacter_NoRegister();
DRUMMER_API UClass* Z_Construct_UClass_UDrummerAnimInstance();
DRUMMER_API UClass* Z_Construct_UClass_UDrummerAnimInstance_NoRegister();
DRUMMER_API UEnum* Z_Construct_UEnum_Drummer_ECharacterState();
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Drummer();
// End Cross Module References

// Begin Class UDrummerAnimInstance
void UDrummerAnimInstance::StaticRegisterNativesUDrummerAnimInstance()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDrummerAnimInstance);
UClass* Z_Construct_UClass_UDrummerAnimInstance_NoRegister()
{
	return UDrummerAnimInstance::StaticClass();
}
struct Z_Construct_UClass_UDrummerAnimInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Characters/DrummerAnimInstance.h" },
		{ "ModuleRelativePath", "Public/Characters/DrummerAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DrummerCharacter_MetaData[] = {
		{ "Category", "DrummerAnimInstance" },
		{ "ModuleRelativePath", "Public/Characters/DrummerAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DrummerCharacterMovement_MetaData[] = {
		{ "Category", "Movement" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/DrummerAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroundSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Characters/DrummerAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsFalling_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Characters/DrummerAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterState_MetaData[] = {
		{ "Category", "Movement | Character State" },
		{ "ModuleRelativePath", "Public/Characters/DrummerAnimInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DrummerCharacter;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DrummerCharacterMovement;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GroundSpeed;
	static void NewProp_IsFalling_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsFalling;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CharacterState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CharacterState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDrummerAnimInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDrummerAnimInstance_Statics::NewProp_DrummerCharacter = { "DrummerCharacter", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDrummerAnimInstance, DrummerCharacter), Z_Construct_UClass_ADrummerCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DrummerCharacter_MetaData), NewProp_DrummerCharacter_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDrummerAnimInstance_Statics::NewProp_DrummerCharacterMovement = { "DrummerCharacterMovement", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDrummerAnimInstance, DrummerCharacterMovement), Z_Construct_UClass_UCharacterMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DrummerCharacterMovement_MetaData), NewProp_DrummerCharacterMovement_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDrummerAnimInstance_Statics::NewProp_GroundSpeed = { "GroundSpeed", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDrummerAnimInstance, GroundSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroundSpeed_MetaData), NewProp_GroundSpeed_MetaData) };
void Z_Construct_UClass_UDrummerAnimInstance_Statics::NewProp_IsFalling_SetBit(void* Obj)
{
	((UDrummerAnimInstance*)Obj)->IsFalling = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDrummerAnimInstance_Statics::NewProp_IsFalling = { "IsFalling", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDrummerAnimInstance), &Z_Construct_UClass_UDrummerAnimInstance_Statics::NewProp_IsFalling_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsFalling_MetaData), NewProp_IsFalling_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDrummerAnimInstance_Statics::NewProp_CharacterState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDrummerAnimInstance_Statics::NewProp_CharacterState = { "CharacterState", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDrummerAnimInstance, CharacterState), Z_Construct_UEnum_Drummer_ECharacterState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterState_MetaData), NewProp_CharacterState_MetaData) }; // 1720296074
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDrummerAnimInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDrummerAnimInstance_Statics::NewProp_DrummerCharacter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDrummerAnimInstance_Statics::NewProp_DrummerCharacterMovement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDrummerAnimInstance_Statics::NewProp_GroundSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDrummerAnimInstance_Statics::NewProp_IsFalling,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDrummerAnimInstance_Statics::NewProp_CharacterState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDrummerAnimInstance_Statics::NewProp_CharacterState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDrummerAnimInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDrummerAnimInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_Drummer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDrummerAnimInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDrummerAnimInstance_Statics::ClassParams = {
	&UDrummerAnimInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDrummerAnimInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDrummerAnimInstance_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDrummerAnimInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UDrummerAnimInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDrummerAnimInstance()
{
	if (!Z_Registration_Info_UClass_UDrummerAnimInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDrummerAnimInstance.OuterSingleton, Z_Construct_UClass_UDrummerAnimInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDrummerAnimInstance.OuterSingleton;
}
template<> DRUMMER_API UClass* StaticClass<UDrummerAnimInstance>()
{
	return UDrummerAnimInstance::StaticClass();
}
UDrummerAnimInstance::UDrummerAnimInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDrummerAnimInstance);
UDrummerAnimInstance::~UDrummerAnimInstance() {}
// End Class UDrummerAnimInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_olavu_Documents_Unreal_Projects_AIDrummer_Source_Drummer_Public_Characters_DrummerAnimInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDrummerAnimInstance, UDrummerAnimInstance::StaticClass, TEXT("UDrummerAnimInstance"), &Z_Registration_Info_UClass_UDrummerAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDrummerAnimInstance), 3410455320U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_olavu_Documents_Unreal_Projects_AIDrummer_Source_Drummer_Public_Characters_DrummerAnimInstance_h_2818481816(TEXT("/Script/Drummer"),
	Z_CompiledInDeferFile_FID_olavu_Documents_Unreal_Projects_AIDrummer_Source_Drummer_Public_Characters_DrummerAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_olavu_Documents_Unreal_Projects_AIDrummer_Source_Drummer_Public_Characters_DrummerAnimInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
