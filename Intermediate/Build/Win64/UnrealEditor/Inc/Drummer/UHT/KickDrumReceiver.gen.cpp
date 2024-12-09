// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Drummer/Public/Midi/Drumset/KickDrumReceiver.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKickDrumReceiver() {}

// Begin Cross Module References
DRUMMER_API UClass* Z_Construct_UClass_AKickDrumReceiver();
DRUMMER_API UClass* Z_Construct_UClass_AKickDrumReceiver_NoRegister();
DRUMMER_API UClass* Z_Construct_UClass_AMIDIDrumReceiver();
UPackage* Z_Construct_UPackage__Script_Drummer();
// End Cross Module References

// Begin Class AKickDrumReceiver
void AKickDrumReceiver::StaticRegisterNativesAKickDrumReceiver()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AKickDrumReceiver);
UClass* Z_Construct_UClass_AKickDrumReceiver_NoRegister()
{
	return AKickDrumReceiver::StaticClass();
}
struct Z_Construct_UClass_AKickDrumReceiver_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "IncludePath", "Midi/Drumset/KickDrumReceiver.h" },
		{ "ModuleRelativePath", "Public/Midi/Drumset/KickDrumReceiver.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AKickDrumReceiver>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AKickDrumReceiver_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AMIDIDrumReceiver,
	(UObject* (*)())Z_Construct_UPackage__Script_Drummer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AKickDrumReceiver_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AKickDrumReceiver_Statics::ClassParams = {
	&AKickDrumReceiver::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AKickDrumReceiver_Statics::Class_MetaDataParams), Z_Construct_UClass_AKickDrumReceiver_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AKickDrumReceiver()
{
	if (!Z_Registration_Info_UClass_AKickDrumReceiver.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AKickDrumReceiver.OuterSingleton, Z_Construct_UClass_AKickDrumReceiver_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AKickDrumReceiver.OuterSingleton;
}
template<> DRUMMER_API UClass* StaticClass<AKickDrumReceiver>()
{
	return AKickDrumReceiver::StaticClass();
}
AKickDrumReceiver::AKickDrumReceiver() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AKickDrumReceiver);
AKickDrumReceiver::~AKickDrumReceiver() {}
// End Class AKickDrumReceiver

// Begin Registration
struct Z_CompiledInDeferFile_FID_projects_AIDrummer_Source_Drummer_Public_Midi_Drumset_KickDrumReceiver_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AKickDrumReceiver, AKickDrumReceiver::StaticClass, TEXT("AKickDrumReceiver"), &Z_Registration_Info_UClass_AKickDrumReceiver, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AKickDrumReceiver), 3502764258U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projects_AIDrummer_Source_Drummer_Public_Midi_Drumset_KickDrumReceiver_h_403401892(TEXT("/Script/Drummer"),
	Z_CompiledInDeferFile_FID_projects_AIDrummer_Source_Drummer_Public_Midi_Drumset_KickDrumReceiver_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projects_AIDrummer_Source_Drummer_Public_Midi_Drumset_KickDrumReceiver_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
