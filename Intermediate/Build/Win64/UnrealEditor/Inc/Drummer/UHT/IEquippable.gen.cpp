// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Drummer/Public/Interfaces/IEquippable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIEquippable() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
DRUMMER_API UClass* Z_Construct_UClass_UIEquippable();
DRUMMER_API UClass* Z_Construct_UClass_UIEquippable_NoRegister();
UPackage* Z_Construct_UPackage__Script_Drummer();
// End Cross Module References

// Begin Interface UIEquippable
void UIEquippable::StaticRegisterNativesUIEquippable()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIEquippable);
UClass* Z_Construct_UClass_UIEquippable_NoRegister()
{
	return UIEquippable::StaticClass();
}
struct Z_Construct_UClass_UIEquippable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/IEquippable.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IIEquippable>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UIEquippable_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Drummer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIEquippable_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIEquippable_Statics::ClassParams = {
	&UIEquippable::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIEquippable_Statics::Class_MetaDataParams), Z_Construct_UClass_UIEquippable_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIEquippable()
{
	if (!Z_Registration_Info_UClass_UIEquippable.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIEquippable.OuterSingleton, Z_Construct_UClass_UIEquippable_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIEquippable.OuterSingleton;
}
template<> DRUMMER_API UClass* StaticClass<UIEquippable>()
{
	return UIEquippable::StaticClass();
}
UIEquippable::UIEquippable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIEquippable);
UIEquippable::~UIEquippable() {}
// End Interface UIEquippable

// Begin Registration
struct Z_CompiledInDeferFile_FID_projects_AIDrummer_Source_Drummer_Public_Interfaces_IEquippable_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIEquippable, UIEquippable::StaticClass, TEXT("UIEquippable"), &Z_Registration_Info_UClass_UIEquippable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIEquippable), 331210288U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projects_AIDrummer_Source_Drummer_Public_Interfaces_IEquippable_h_672584912(TEXT("/Script/Drummer"),
	Z_CompiledInDeferFile_FID_projects_AIDrummer_Source_Drummer_Public_Interfaces_IEquippable_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projects_AIDrummer_Source_Drummer_Public_Interfaces_IEquippable_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
