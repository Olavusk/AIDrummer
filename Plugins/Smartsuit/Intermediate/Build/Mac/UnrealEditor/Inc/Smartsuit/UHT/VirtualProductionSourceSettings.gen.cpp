// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Smartsuit/Public/VirtualProductionSourceSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVirtualProductionSourceSettings() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkSourceSettings();
SMARTSUIT_API UClass* Z_Construct_UClass_UVirtualProductionSourceSettings();
SMARTSUIT_API UClass* Z_Construct_UClass_UVirtualProductionSourceSettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_Smartsuit();
// End Cross Module References

// Begin Class UVirtualProductionSourceSettings
void UVirtualProductionSourceSettings::StaticRegisterNativesUVirtualProductionSourceSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVirtualProductionSourceSettings);
UClass* Z_Construct_UClass_UVirtualProductionSourceSettings_NoRegister()
{
	return UVirtualProductionSourceSettings::StaticClass();
}
struct Z_Construct_UClass_UVirtualProductionSourceSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "VirtualProductionSourceSettings.h" },
		{ "ModuleRelativePath", "Public/VirtualProductionSourceSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTrimNamespaces_MetaData[] = {
		{ "Category", "Source" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** keep a base name for received bone names, strip out all namespace **/" },
#endif
		{ "ModuleRelativePath", "Public/VirtualProductionSourceSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "keep a base name for received bone names, strip out all namespace *" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseRotationOrderZYX_MetaData[] = {
		{ "Category", "Source" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** do a position and rotation a mixamo compatible, ZYX rotation order **/" },
#endif
		{ "ModuleRelativePath", "Public/VirtualProductionSourceSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "do a position and rotation a mixamo compatible, ZYX rotation order *" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HipPreRotation_MetaData[] = {
		{ "Category", "Source" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** pre rotation for a hips **/" },
#endif
		{ "ModuleRelativePath", "Public/VirtualProductionSourceSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "pre rotation for a hips *" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bTrimNamespaces_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTrimNamespaces;
	static void NewProp_bUseRotationOrderZYX_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseRotationOrderZYX;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HipPreRotation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVirtualProductionSourceSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UVirtualProductionSourceSettings_Statics::NewProp_bTrimNamespaces_SetBit(void* Obj)
{
	((UVirtualProductionSourceSettings*)Obj)->bTrimNamespaces = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVirtualProductionSourceSettings_Statics::NewProp_bTrimNamespaces = { "bTrimNamespaces", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVirtualProductionSourceSettings), &Z_Construct_UClass_UVirtualProductionSourceSettings_Statics::NewProp_bTrimNamespaces_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTrimNamespaces_MetaData), NewProp_bTrimNamespaces_MetaData) };
void Z_Construct_UClass_UVirtualProductionSourceSettings_Statics::NewProp_bUseRotationOrderZYX_SetBit(void* Obj)
{
	((UVirtualProductionSourceSettings*)Obj)->bUseRotationOrderZYX = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVirtualProductionSourceSettings_Statics::NewProp_bUseRotationOrderZYX = { "bUseRotationOrderZYX", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVirtualProductionSourceSettings), &Z_Construct_UClass_UVirtualProductionSourceSettings_Statics::NewProp_bUseRotationOrderZYX_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseRotationOrderZYX_MetaData), NewProp_bUseRotationOrderZYX_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVirtualProductionSourceSettings_Statics::NewProp_HipPreRotation = { "HipPreRotation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVirtualProductionSourceSettings, HipPreRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HipPreRotation_MetaData), NewProp_HipPreRotation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVirtualProductionSourceSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVirtualProductionSourceSettings_Statics::NewProp_bTrimNamespaces,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVirtualProductionSourceSettings_Statics::NewProp_bUseRotationOrderZYX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVirtualProductionSourceSettings_Statics::NewProp_HipPreRotation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualProductionSourceSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVirtualProductionSourceSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ULiveLinkSourceSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_Smartsuit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualProductionSourceSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVirtualProductionSourceSettings_Statics::ClassParams = {
	&UVirtualProductionSourceSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVirtualProductionSourceSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualProductionSourceSettings_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualProductionSourceSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UVirtualProductionSourceSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVirtualProductionSourceSettings()
{
	if (!Z_Registration_Info_UClass_UVirtualProductionSourceSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVirtualProductionSourceSettings.OuterSingleton, Z_Construct_UClass_UVirtualProductionSourceSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVirtualProductionSourceSettings.OuterSingleton;
}
template<> SMARTSUIT_API UClass* StaticClass<UVirtualProductionSourceSettings>()
{
	return UVirtualProductionSourceSettings::StaticClass();
}
UVirtualProductionSourceSettings::UVirtualProductionSourceSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVirtualProductionSourceSettings);
UVirtualProductionSourceSettings::~UVirtualProductionSourceSettings() {}
// End Class UVirtualProductionSourceSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_olavu_Documents_Unreal_Projects_AIDrummer_Plugins_Smartsuit_Source_Smartsuit_Public_VirtualProductionSourceSettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVirtualProductionSourceSettings, UVirtualProductionSourceSettings::StaticClass, TEXT("UVirtualProductionSourceSettings"), &Z_Registration_Info_UClass_UVirtualProductionSourceSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVirtualProductionSourceSettings), 568628056U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_olavu_Documents_Unreal_Projects_AIDrummer_Plugins_Smartsuit_Source_Smartsuit_Public_VirtualProductionSourceSettings_h_846279054(TEXT("/Script/Smartsuit"),
	Z_CompiledInDeferFile_FID_olavu_Documents_Unreal_Projects_AIDrummer_Plugins_Smartsuit_Source_Smartsuit_Public_VirtualProductionSourceSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_olavu_Documents_Unreal_Projects_AIDrummer_Plugins_Smartsuit_Source_Smartsuit_Public_VirtualProductionSourceSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
