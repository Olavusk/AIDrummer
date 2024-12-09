// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Drummer/Public/Interfaces/MIDIEventReceiver.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMIDIEventReceiver() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
DRUMMER_API UClass* Z_Construct_UClass_UMIDIEventReceiver();
DRUMMER_API UClass* Z_Construct_UClass_UMIDIEventReceiver_NoRegister();
UPackage* Z_Construct_UPackage__Script_Drummer();
// End Cross Module References

// Begin Interface UMIDIEventReceiver
void UMIDIEventReceiver::StaticRegisterNativesUMIDIEventReceiver()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMIDIEventReceiver);
UClass* Z_Construct_UClass_UMIDIEventReceiver_NoRegister()
{
	return UMIDIEventReceiver::StaticClass();
}
struct Z_Construct_UClass_UMIDIEventReceiver_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/MIDIEventReceiver.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IMIDIEventReceiver>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMIDIEventReceiver_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Drummer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMIDIEventReceiver_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMIDIEventReceiver_Statics::ClassParams = {
	&UMIDIEventReceiver::StaticClass,
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
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMIDIEventReceiver_Statics::Class_MetaDataParams), Z_Construct_UClass_UMIDIEventReceiver_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMIDIEventReceiver()
{
	if (!Z_Registration_Info_UClass_UMIDIEventReceiver.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMIDIEventReceiver.OuterSingleton, Z_Construct_UClass_UMIDIEventReceiver_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMIDIEventReceiver.OuterSingleton;
}
template<> DRUMMER_API UClass* StaticClass<UMIDIEventReceiver>()
{
	return UMIDIEventReceiver::StaticClass();
}
UMIDIEventReceiver::UMIDIEventReceiver(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMIDIEventReceiver);
UMIDIEventReceiver::~UMIDIEventReceiver() {}
// End Interface UMIDIEventReceiver

// Begin Registration
struct Z_CompiledInDeferFile_FID_projects_AIDrummer_Source_Drummer_Public_Interfaces_MIDIEventReceiver_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMIDIEventReceiver, UMIDIEventReceiver::StaticClass, TEXT("UMIDIEventReceiver"), &Z_Registration_Info_UClass_UMIDIEventReceiver, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMIDIEventReceiver), 3129381067U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projects_AIDrummer_Source_Drummer_Public_Interfaces_MIDIEventReceiver_h_3900854846(TEXT("/Script/Drummer"),
	Z_CompiledInDeferFile_FID_projects_AIDrummer_Source_Drummer_Public_Interfaces_MIDIEventReceiver_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projects_AIDrummer_Source_Drummer_Public_Interfaces_MIDIEventReceiver_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
