// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SmartsuitEditor/Private/VirtualProductionSourceFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVirtualProductionSourceFactory() {}

// Begin Cross Module References
LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkSourceFactory();
SMARTSUITEDITOR_API UClass* Z_Construct_UClass_UVirtualProductionSourceFactory();
SMARTSUITEDITOR_API UClass* Z_Construct_UClass_UVirtualProductionSourceFactory_NoRegister();
UPackage* Z_Construct_UPackage__Script_SmartsuitEditor();
// End Cross Module References

// Begin Class UVirtualProductionSourceFactory
void UVirtualProductionSourceFactory::StaticRegisterNativesUVirtualProductionSourceFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVirtualProductionSourceFactory);
UClass* Z_Construct_UClass_UVirtualProductionSourceFactory_NoRegister()
{
	return UVirtualProductionSourceFactory::StaticClass();
}
struct Z_Construct_UClass_UVirtualProductionSourceFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "VirtualProductionSourceFactory.h" },
		{ "ModuleRelativePath", "Private/VirtualProductionSourceFactory.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVirtualProductionSourceFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVirtualProductionSourceFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ULiveLinkSourceFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_SmartsuitEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualProductionSourceFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVirtualProductionSourceFactory_Statics::ClassParams = {
	&UVirtualProductionSourceFactory::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualProductionSourceFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UVirtualProductionSourceFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVirtualProductionSourceFactory()
{
	if (!Z_Registration_Info_UClass_UVirtualProductionSourceFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVirtualProductionSourceFactory.OuterSingleton, Z_Construct_UClass_UVirtualProductionSourceFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVirtualProductionSourceFactory.OuterSingleton;
}
template<> SMARTSUITEDITOR_API UClass* StaticClass<UVirtualProductionSourceFactory>()
{
	return UVirtualProductionSourceFactory::StaticClass();
}
UVirtualProductionSourceFactory::UVirtualProductionSourceFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVirtualProductionSourceFactory);
UVirtualProductionSourceFactory::~UVirtualProductionSourceFactory() {}
// End Class UVirtualProductionSourceFactory

// Begin Registration
struct Z_CompiledInDeferFile_FID_olavu_Documents_Unreal_Projects_rokoko_studio_live_unreal_engine_Plugins_Smartsuit_Source_SmartsuitEditor_Private_VirtualProductionSourceFactory_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVirtualProductionSourceFactory, UVirtualProductionSourceFactory::StaticClass, TEXT("UVirtualProductionSourceFactory"), &Z_Registration_Info_UClass_UVirtualProductionSourceFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVirtualProductionSourceFactory), 1625427974U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_olavu_Documents_Unreal_Projects_rokoko_studio_live_unreal_engine_Plugins_Smartsuit_Source_SmartsuitEditor_Private_VirtualProductionSourceFactory_h_888476395(TEXT("/Script/SmartsuitEditor"),
	Z_CompiledInDeferFile_FID_olavu_Documents_Unreal_Projects_rokoko_studio_live_unreal_engine_Plugins_Smartsuit_Source_SmartsuitEditor_Private_VirtualProductionSourceFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_olavu_Documents_Unreal_Projects_rokoko_studio_live_unreal_engine_Plugins_Smartsuit_Source_SmartsuitEditor_Private_VirtualProductionSourceFactory_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
