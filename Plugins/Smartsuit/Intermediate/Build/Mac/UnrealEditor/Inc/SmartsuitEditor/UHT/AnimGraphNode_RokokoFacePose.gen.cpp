// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SmartsuitEditor/Public/AnimGraphNode_RokokoFacePose.h"
#include "Smartsuit/Public/AnimNode_RokokoFacePose.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimGraphNode_RokokoFacePose() {}

// Begin Cross Module References
ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_Base();
SMARTSUIT_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_RokokoFacePose();
SMARTSUITEDITOR_API UClass* Z_Construct_UClass_UAnimGraphNode_RokokoFacePose();
SMARTSUITEDITOR_API UClass* Z_Construct_UClass_UAnimGraphNode_RokokoFacePose_NoRegister();
UPackage* Z_Construct_UPackage__Script_SmartsuitEditor();
// End Cross Module References

// Begin Class UAnimGraphNode_RokokoFacePose
void UAnimGraphNode_RokokoFacePose::StaticRegisterNativesUAnimGraphNode_RokokoFacePose()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimGraphNode_RokokoFacePose);
UClass* Z_Construct_UClass_UAnimGraphNode_RokokoFacePose_NoRegister()
{
	return UAnimGraphNode_RokokoFacePose::StaticClass();
}
struct Z_Construct_UClass_UAnimGraphNode_RokokoFacePose_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AnimGraphNode_RokokoFacePose.h" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_RokokoFacePose.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_RokokoFacePose.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Node;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimGraphNode_RokokoFacePose>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimGraphNode_RokokoFacePose_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimGraphNode_RokokoFacePose, Node), Z_Construct_UScriptStruct_FAnimNode_RokokoFacePose, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Node_MetaData), NewProp_Node_MetaData) }; // 1323056876
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimGraphNode_RokokoFacePose_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_RokokoFacePose_Statics::NewProp_Node,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_RokokoFacePose_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAnimGraphNode_RokokoFacePose_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimGraphNode_Base,
	(UObject* (*)())Z_Construct_UPackage__Script_SmartsuitEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_RokokoFacePose_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimGraphNode_RokokoFacePose_Statics::ClassParams = {
	&UAnimGraphNode_RokokoFacePose::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAnimGraphNode_RokokoFacePose_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_RokokoFacePose_Statics::PropPointers),
	0,
	0x008000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_RokokoFacePose_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimGraphNode_RokokoFacePose_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimGraphNode_RokokoFacePose()
{
	if (!Z_Registration_Info_UClass_UAnimGraphNode_RokokoFacePose.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimGraphNode_RokokoFacePose.OuterSingleton, Z_Construct_UClass_UAnimGraphNode_RokokoFacePose_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimGraphNode_RokokoFacePose.OuterSingleton;
}
template<> SMARTSUITEDITOR_API UClass* StaticClass<UAnimGraphNode_RokokoFacePose>()
{
	return UAnimGraphNode_RokokoFacePose::StaticClass();
}
UAnimGraphNode_RokokoFacePose::UAnimGraphNode_RokokoFacePose(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimGraphNode_RokokoFacePose);
UAnimGraphNode_RokokoFacePose::~UAnimGraphNode_RokokoFacePose() {}
// End Class UAnimGraphNode_RokokoFacePose

// Begin Registration
struct Z_CompiledInDeferFile_FID_olavu_Documents_Unreal_Projects_rokoko_studio_live_unreal_engine_Plugins_Smartsuit_Source_SmartsuitEditor_Public_AnimGraphNode_RokokoFacePose_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimGraphNode_RokokoFacePose, UAnimGraphNode_RokokoFacePose::StaticClass, TEXT("UAnimGraphNode_RokokoFacePose"), &Z_Registration_Info_UClass_UAnimGraphNode_RokokoFacePose, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimGraphNode_RokokoFacePose), 3389642733U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_olavu_Documents_Unreal_Projects_rokoko_studio_live_unreal_engine_Plugins_Smartsuit_Source_SmartsuitEditor_Public_AnimGraphNode_RokokoFacePose_h_737649500(TEXT("/Script/SmartsuitEditor"),
	Z_CompiledInDeferFile_FID_olavu_Documents_Unreal_Projects_rokoko_studio_live_unreal_engine_Plugins_Smartsuit_Source_SmartsuitEditor_Public_AnimGraphNode_RokokoFacePose_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_olavu_Documents_Unreal_Projects_rokoko_studio_live_unreal_engine_Plugins_Smartsuit_Source_SmartsuitEditor_Public_AnimGraphNode_RokokoFacePose_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
