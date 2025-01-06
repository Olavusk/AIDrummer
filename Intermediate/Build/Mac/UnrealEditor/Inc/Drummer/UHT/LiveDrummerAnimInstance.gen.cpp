// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Drummer/Public/Characters/Drummers/LiveDrummerAnimInstance.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveDrummerAnimInstance() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
DRUMMER_API UClass* Z_Construct_UClass_ULiveDrummerAnimInstance();
DRUMMER_API UClass* Z_Construct_UClass_ULiveDrummerAnimInstance_NoRegister();
DRUMMER_API UFunction* Z_Construct_UDelegateFunction_Drummer_OnLiveBonePositionUpdated__DelegateSignature();
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
UPackage* Z_Construct_UPackage__Script_Drummer();
// End Cross Module References

// Begin Delegate FOnLiveBonePositionUpdated
struct Z_Construct_UDelegateFunction_Drummer_OnLiveBonePositionUpdated__DelegateSignature_Statics
{
	struct _Script_Drummer_eventOnLiveBonePositionUpdated_Parms
	{
		FName BoneName;
		FVector BonePosition;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Animation instance for LiveLink-controlled mesh\n */" },
#endif
		{ "ModuleRelativePath", "Public/Characters/Drummers/LiveDrummerAnimInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Animation instance for LiveLink-controlled mesh" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BonePosition;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_Drummer_OnLiveBonePositionUpdated__DelegateSignature_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Drummer_eventOnLiveBonePositionUpdated_Parms, BoneName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Drummer_OnLiveBonePositionUpdated__DelegateSignature_Statics::NewProp_BonePosition = { "BonePosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Drummer_eventOnLiveBonePositionUpdated_Parms, BonePosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Drummer_OnLiveBonePositionUpdated__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Drummer_OnLiveBonePositionUpdated__DelegateSignature_Statics::NewProp_BoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Drummer_OnLiveBonePositionUpdated__DelegateSignature_Statics::NewProp_BonePosition,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Drummer_OnLiveBonePositionUpdated__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Drummer_OnLiveBonePositionUpdated__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Drummer, nullptr, "OnLiveBonePositionUpdated__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Drummer_OnLiveBonePositionUpdated__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Drummer_OnLiveBonePositionUpdated__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Drummer_OnLiveBonePositionUpdated__DelegateSignature_Statics::_Script_Drummer_eventOnLiveBonePositionUpdated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Drummer_OnLiveBonePositionUpdated__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Drummer_OnLiveBonePositionUpdated__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_Drummer_OnLiveBonePositionUpdated__DelegateSignature_Statics::_Script_Drummer_eventOnLiveBonePositionUpdated_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Drummer_OnLiveBonePositionUpdated__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Drummer_OnLiveBonePositionUpdated__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnLiveBonePositionUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnLiveBonePositionUpdated, FName BoneName, FVector BonePosition)
{
	struct _Script_Drummer_eventOnLiveBonePositionUpdated_Parms
	{
		FName BoneName;
		FVector BonePosition;
	};
	_Script_Drummer_eventOnLiveBonePositionUpdated_Parms Parms;
	Parms.BoneName=BoneName;
	Parms.BonePosition=BonePosition;
	OnLiveBonePositionUpdated.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnLiveBonePositionUpdated

// Begin Class ULiveDrummerAnimInstance
void ULiveDrummerAnimInstance::StaticRegisterNativesULiveDrummerAnimInstance()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULiveDrummerAnimInstance);
UClass* Z_Construct_UClass_ULiveDrummerAnimInstance_NoRegister()
{
	return ULiveDrummerAnimInstance::StaticClass();
}
struct Z_Construct_UClass_ULiveDrummerAnimInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Characters/Drummers/LiveDrummerAnimInstance.h" },
		{ "ModuleRelativePath", "Public/Characters/Drummers/LiveDrummerAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnLiveBonePositionUpdated_MetaData[] = {
		{ "Category", "Animation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// **Event to broadcast bone position updates**\n" },
#endif
		{ "ModuleRelativePath", "Public/Characters/Drummers/LiveDrummerAnimInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "**Event to broadcast bone position updates**" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLiveBonePositionUpdated;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveDrummerAnimInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULiveDrummerAnimInstance_Statics::NewProp_OnLiveBonePositionUpdated = { "OnLiveBonePositionUpdated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULiveDrummerAnimInstance, OnLiveBonePositionUpdated), Z_Construct_UDelegateFunction_Drummer_OnLiveBonePositionUpdated__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnLiveBonePositionUpdated_MetaData), NewProp_OnLiveBonePositionUpdated_MetaData) }; // 3334343738
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULiveDrummerAnimInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveDrummerAnimInstance_Statics::NewProp_OnLiveBonePositionUpdated,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveDrummerAnimInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULiveDrummerAnimInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_Drummer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveDrummerAnimInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULiveDrummerAnimInstance_Statics::ClassParams = {
	&ULiveDrummerAnimInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ULiveDrummerAnimInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ULiveDrummerAnimInstance_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveDrummerAnimInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_ULiveDrummerAnimInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULiveDrummerAnimInstance()
{
	if (!Z_Registration_Info_UClass_ULiveDrummerAnimInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULiveDrummerAnimInstance.OuterSingleton, Z_Construct_UClass_ULiveDrummerAnimInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULiveDrummerAnimInstance.OuterSingleton;
}
template<> DRUMMER_API UClass* StaticClass<ULiveDrummerAnimInstance>()
{
	return ULiveDrummerAnimInstance::StaticClass();
}
ULiveDrummerAnimInstance::ULiveDrummerAnimInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveDrummerAnimInstance);
ULiveDrummerAnimInstance::~ULiveDrummerAnimInstance() {}
// End Class ULiveDrummerAnimInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_olavu_Documents_Unreal_Projects_AIDrummer_Source_Drummer_Public_Characters_Drummers_LiveDrummerAnimInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULiveDrummerAnimInstance, ULiveDrummerAnimInstance::StaticClass, TEXT("ULiveDrummerAnimInstance"), &Z_Registration_Info_UClass_ULiveDrummerAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULiveDrummerAnimInstance), 59392045U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_olavu_Documents_Unreal_Projects_AIDrummer_Source_Drummer_Public_Characters_Drummers_LiveDrummerAnimInstance_h_774208586(TEXT("/Script/Drummer"),
	Z_CompiledInDeferFile_FID_olavu_Documents_Unreal_Projects_AIDrummer_Source_Drummer_Public_Characters_Drummers_LiveDrummerAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_olavu_Documents_Unreal_Projects_AIDrummer_Source_Drummer_Public_Characters_Drummers_LiveDrummerAnimInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
