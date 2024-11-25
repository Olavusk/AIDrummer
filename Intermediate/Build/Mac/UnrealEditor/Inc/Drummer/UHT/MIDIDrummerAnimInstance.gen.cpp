// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Drummer/Public/Characters/Drummers/MIDIDrummerAnimInstance.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMIDIDrummerAnimInstance() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
DRUMMER_API UClass* Z_Construct_UClass_AMIDIDrummer_NoRegister();
DRUMMER_API UClass* Z_Construct_UClass_UMIDIDrummerAnimInstance();
DRUMMER_API UClass* Z_Construct_UClass_UMIDIDrummerAnimInstance_NoRegister();
DRUMMER_API UFunction* Z_Construct_UDelegateFunction_Drummer_OnMIDIBonePositionUpdated__DelegateSignature();
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
UPackage* Z_Construct_UPackage__Script_Drummer();
// End Cross Module References

// Begin Delegate FOnMIDIBonePositionUpdated
struct Z_Construct_UDelegateFunction_Drummer_OnMIDIBonePositionUpdated__DelegateSignature_Statics
{
	struct _Script_Drummer_eventOnMIDIBonePositionUpdated_Parms
	{
		FName BoneName;
		FVector BonePosition;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Animation instance for the MIDIDrummer\n */" },
#endif
		{ "ModuleRelativePath", "Public/Characters/Drummers/MIDIDrummerAnimInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Animation instance for the MIDIDrummer" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BonePosition;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_Drummer_OnMIDIBonePositionUpdated__DelegateSignature_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Drummer_eventOnMIDIBonePositionUpdated_Parms, BoneName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Drummer_OnMIDIBonePositionUpdated__DelegateSignature_Statics::NewProp_BonePosition = { "BonePosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Drummer_eventOnMIDIBonePositionUpdated_Parms, BonePosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Drummer_OnMIDIBonePositionUpdated__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Drummer_OnMIDIBonePositionUpdated__DelegateSignature_Statics::NewProp_BoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Drummer_OnMIDIBonePositionUpdated__DelegateSignature_Statics::NewProp_BonePosition,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Drummer_OnMIDIBonePositionUpdated__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Drummer_OnMIDIBonePositionUpdated__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Drummer, nullptr, "OnMIDIBonePositionUpdated__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Drummer_OnMIDIBonePositionUpdated__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Drummer_OnMIDIBonePositionUpdated__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Drummer_OnMIDIBonePositionUpdated__DelegateSignature_Statics::_Script_Drummer_eventOnMIDIBonePositionUpdated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Drummer_OnMIDIBonePositionUpdated__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Drummer_OnMIDIBonePositionUpdated__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_Drummer_OnMIDIBonePositionUpdated__DelegateSignature_Statics::_Script_Drummer_eventOnMIDIBonePositionUpdated_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Drummer_OnMIDIBonePositionUpdated__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Drummer_OnMIDIBonePositionUpdated__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnMIDIBonePositionUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnMIDIBonePositionUpdated, FName BoneName, FVector BonePosition)
{
	struct _Script_Drummer_eventOnMIDIBonePositionUpdated_Parms
	{
		FName BoneName;
		FVector BonePosition;
	};
	_Script_Drummer_eventOnMIDIBonePositionUpdated_Parms Parms;
	Parms.BoneName=BoneName;
	Parms.BonePosition=BonePosition;
	OnMIDIBonePositionUpdated.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnMIDIBonePositionUpdated

// Begin Class UMIDIDrummerAnimInstance
void UMIDIDrummerAnimInstance::StaticRegisterNativesUMIDIDrummerAnimInstance()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMIDIDrummerAnimInstance);
UClass* Z_Construct_UClass_UMIDIDrummerAnimInstance_NoRegister()
{
	return UMIDIDrummerAnimInstance::StaticClass();
}
struct Z_Construct_UClass_UMIDIDrummerAnimInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Characters/Drummers/MIDIDrummerAnimInstance.h" },
		{ "ModuleRelativePath", "Public/Characters/Drummers/MIDIDrummerAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MIDIDrummer_MetaData[] = {
		{ "Category", "MIDIDrummerAnimInstance" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Reference to the MIDIDrummer\n" },
#endif
		{ "ModuleRelativePath", "Public/Characters/Drummers/MIDIDrummerAnimInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reference to the MIDIDrummer" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnMIDIBonePositionUpdated_MetaData[] = {
		{ "Category", "Animation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Event for broadcasting bone position updates\n" },
#endif
		{ "ModuleRelativePath", "Public/Characters/Drummers/MIDIDrummerAnimInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Event for broadcasting bone position updates" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MIDIDrummer;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMIDIBonePositionUpdated;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMIDIDrummerAnimInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMIDIDrummerAnimInstance_Statics::NewProp_MIDIDrummer = { "MIDIDrummer", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMIDIDrummerAnimInstance, MIDIDrummer), Z_Construct_UClass_AMIDIDrummer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MIDIDrummer_MetaData), NewProp_MIDIDrummer_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMIDIDrummerAnimInstance_Statics::NewProp_OnMIDIBonePositionUpdated = { "OnMIDIBonePositionUpdated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMIDIDrummerAnimInstance, OnMIDIBonePositionUpdated), Z_Construct_UDelegateFunction_Drummer_OnMIDIBonePositionUpdated__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnMIDIBonePositionUpdated_MetaData), NewProp_OnMIDIBonePositionUpdated_MetaData) }; // 533034630
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMIDIDrummerAnimInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIDIDrummerAnimInstance_Statics::NewProp_MIDIDrummer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIDIDrummerAnimInstance_Statics::NewProp_OnMIDIBonePositionUpdated,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMIDIDrummerAnimInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMIDIDrummerAnimInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_Drummer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMIDIDrummerAnimInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMIDIDrummerAnimInstance_Statics::ClassParams = {
	&UMIDIDrummerAnimInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMIDIDrummerAnimInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMIDIDrummerAnimInstance_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMIDIDrummerAnimInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UMIDIDrummerAnimInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMIDIDrummerAnimInstance()
{
	if (!Z_Registration_Info_UClass_UMIDIDrummerAnimInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMIDIDrummerAnimInstance.OuterSingleton, Z_Construct_UClass_UMIDIDrummerAnimInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMIDIDrummerAnimInstance.OuterSingleton;
}
template<> DRUMMER_API UClass* StaticClass<UMIDIDrummerAnimInstance>()
{
	return UMIDIDrummerAnimInstance::StaticClass();
}
UMIDIDrummerAnimInstance::UMIDIDrummerAnimInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMIDIDrummerAnimInstance);
UMIDIDrummerAnimInstance::~UMIDIDrummerAnimInstance() {}
// End Class UMIDIDrummerAnimInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_olavu_Documents_Unreal_Projects_AIDrummer_Source_Drummer_Public_Characters_Drummers_MIDIDrummerAnimInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMIDIDrummerAnimInstance, UMIDIDrummerAnimInstance::StaticClass, TEXT("UMIDIDrummerAnimInstance"), &Z_Registration_Info_UClass_UMIDIDrummerAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMIDIDrummerAnimInstance), 3615646996U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_olavu_Documents_Unreal_Projects_AIDrummer_Source_Drummer_Public_Characters_Drummers_MIDIDrummerAnimInstance_h_859001718(TEXT("/Script/Drummer"),
	Z_CompiledInDeferFile_FID_olavu_Documents_Unreal_Projects_AIDrummer_Source_Drummer_Public_Characters_Drummers_MIDIDrummerAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_olavu_Documents_Unreal_Projects_AIDrummer_Source_Drummer_Public_Characters_Drummers_MIDIDrummerAnimInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
