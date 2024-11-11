// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Drummer/Public/Midi/Drumset/SnareDrumReceiver.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSnareDrumReceiver() {}

// Begin Cross Module References
DRUMMER_API UClass* Z_Construct_UClass_AMIDIDrumReceiver();
DRUMMER_API UClass* Z_Construct_UClass_ASnareDrumReceiver();
DRUMMER_API UClass* Z_Construct_UClass_ASnareDrumReceiver_NoRegister();
UPackage* Z_Construct_UPackage__Script_Drummer();
// End Cross Module References

// Begin Class ASnareDrumReceiver
void ASnareDrumReceiver::StaticRegisterNativesASnareDrumReceiver()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASnareDrumReceiver);
UClass* Z_Construct_UClass_ASnareDrumReceiver_NoRegister()
{
	return ASnareDrumReceiver::StaticClass();
}
struct Z_Construct_UClass_ASnareDrumReceiver_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "IncludePath", "Midi/Drumset/SnareDrumReceiver.h" },
		{ "ModuleRelativePath", "Public/Midi/Drumset/SnareDrumReceiver.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASnareDrumReceiver>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ASnareDrumReceiver_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AMIDIDrumReceiver,
	(UObject* (*)())Z_Construct_UPackage__Script_Drummer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASnareDrumReceiver_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASnareDrumReceiver_Statics::ClassParams = {
	&ASnareDrumReceiver::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASnareDrumReceiver_Statics::Class_MetaDataParams), Z_Construct_UClass_ASnareDrumReceiver_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASnareDrumReceiver()
{
	if (!Z_Registration_Info_UClass_ASnareDrumReceiver.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASnareDrumReceiver.OuterSingleton, Z_Construct_UClass_ASnareDrumReceiver_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASnareDrumReceiver.OuterSingleton;
}
template<> DRUMMER_API UClass* StaticClass<ASnareDrumReceiver>()
{
	return ASnareDrumReceiver::StaticClass();
}
ASnareDrumReceiver::ASnareDrumReceiver() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASnareDrumReceiver);
ASnareDrumReceiver::~ASnareDrumReceiver() {}
// End Class ASnareDrumReceiver

// Begin Registration
struct Z_CompiledInDeferFile_FID_olavu_Documents_Unreal_Projects_AIDrummer_Source_Drummer_Public_Midi_Drumset_SnareDrumReceiver_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASnareDrumReceiver, ASnareDrumReceiver::StaticClass, TEXT("ASnareDrumReceiver"), &Z_Registration_Info_UClass_ASnareDrumReceiver, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASnareDrumReceiver), 1612986851U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_olavu_Documents_Unreal_Projects_AIDrummer_Source_Drummer_Public_Midi_Drumset_SnareDrumReceiver_h_4906493(TEXT("/Script/Drummer"),
	Z_CompiledInDeferFile_FID_olavu_Documents_Unreal_Projects_AIDrummer_Source_Drummer_Public_Midi_Drumset_SnareDrumReceiver_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_olavu_Documents_Unreal_Projects_AIDrummer_Source_Drummer_Public_Midi_Drumset_SnareDrumReceiver_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
