// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Drummer/Public/Items/Chair/Chair.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChair() {}

// Begin Cross Module References
DRUMMER_API UClass* Z_Construct_UClass_AChair();
DRUMMER_API UClass* Z_Construct_UClass_AChair_NoRegister();
DRUMMER_API UClass* Z_Construct_UClass_AItem();
UPackage* Z_Construct_UPackage__Script_Drummer();
// End Cross Module References

// Begin Class AChair
void AChair::StaticRegisterNativesAChair()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AChair);
UClass* Z_Construct_UClass_AChair_NoRegister()
{
	return AChair::StaticClass();
}
struct Z_Construct_UClass_AChair_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Items/Chair/Chair.h" },
		{ "ModuleRelativePath", "Public/Items/Chair/Chair.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AChair>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AChair_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AItem,
	(UObject* (*)())Z_Construct_UPackage__Script_Drummer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AChair_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AChair_Statics::ClassParams = {
	&AChair::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AChair_Statics::Class_MetaDataParams), Z_Construct_UClass_AChair_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AChair()
{
	if (!Z_Registration_Info_UClass_AChair.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AChair.OuterSingleton, Z_Construct_UClass_AChair_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AChair.OuterSingleton;
}
template<> DRUMMER_API UClass* StaticClass<AChair>()
{
	return AChair::StaticClass();
}
AChair::AChair() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AChair);
AChair::~AChair() {}
// End Class AChair

// Begin Registration
struct Z_CompiledInDeferFile_FID_projects_AIDrummer_Source_Drummer_Public_Items_Chair_Chair_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AChair, AChair::StaticClass, TEXT("AChair"), &Z_Registration_Info_UClass_AChair, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AChair), 3532774728U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projects_AIDrummer_Source_Drummer_Public_Items_Chair_Chair_h_20939782(TEXT("/Script/Drummer"),
	Z_CompiledInDeferFile_FID_projects_AIDrummer_Source_Drummer_Public_Items_Chair_Chair_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projects_AIDrummer_Source_Drummer_Public_Items_Chair_Chair_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
