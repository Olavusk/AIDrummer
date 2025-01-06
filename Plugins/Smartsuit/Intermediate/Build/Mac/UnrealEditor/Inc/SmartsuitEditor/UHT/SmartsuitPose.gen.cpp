// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SmartsuitEditor/Public/SmartsuitPose.h"
#include "Smartsuit/Public/SmartsuitPoseNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSmartsuitPose() {}

// Begin Cross Module References
ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_SkeletalControlBase();
SMARTSUIT_API UScriptStruct* Z_Construct_UScriptStruct_FSmartsuitPoseNode();
SMARTSUITEDITOR_API UClass* Z_Construct_UClass_USmartsuitPose();
SMARTSUITEDITOR_API UClass* Z_Construct_UClass_USmartsuitPose_NoRegister();
UPackage* Z_Construct_UPackage__Script_SmartsuitEditor();
// End Cross Module References

// Begin Class USmartsuitPose
void USmartsuitPose::StaticRegisterNativesUSmartsuitPose()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USmartsuitPose);
UClass* Z_Construct_UClass_USmartsuitPose_NoRegister()
{
	return USmartsuitPose::StaticClass();
}
struct Z_Construct_UClass_USmartsuitPose_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// @cond no_doc\n" },
#endif
		{ "IncludePath", "SmartsuitPose.h" },
		{ "Keywords", "Smartsuit Pose" },
		{ "ModuleRelativePath", "Public/SmartsuitPose.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@cond no_doc" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/SmartsuitPose.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Node;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USmartsuitPose>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USmartsuitPose_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USmartsuitPose, Node), Z_Construct_UScriptStruct_FSmartsuitPoseNode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Node_MetaData), NewProp_Node_MetaData) }; // 2464155229
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USmartsuitPose_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmartsuitPose_Statics::NewProp_Node,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USmartsuitPose_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USmartsuitPose_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimGraphNode_SkeletalControlBase,
	(UObject* (*)())Z_Construct_UPackage__Script_SmartsuitEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USmartsuitPose_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USmartsuitPose_Statics::ClassParams = {
	&USmartsuitPose::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USmartsuitPose_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USmartsuitPose_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USmartsuitPose_Statics::Class_MetaDataParams), Z_Construct_UClass_USmartsuitPose_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USmartsuitPose()
{
	if (!Z_Registration_Info_UClass_USmartsuitPose.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USmartsuitPose.OuterSingleton, Z_Construct_UClass_USmartsuitPose_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USmartsuitPose.OuterSingleton;
}
template<> SMARTSUITEDITOR_API UClass* StaticClass<USmartsuitPose>()
{
	return USmartsuitPose::StaticClass();
}
USmartsuitPose::USmartsuitPose(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USmartsuitPose);
USmartsuitPose::~USmartsuitPose() {}
// End Class USmartsuitPose

// Begin Registration
struct Z_CompiledInDeferFile_FID_olavu_Documents_Unreal_Projects_AIDrummer_Plugins_Smartsuit_Source_SmartsuitEditor_Public_SmartsuitPose_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USmartsuitPose, USmartsuitPose::StaticClass, TEXT("USmartsuitPose"), &Z_Registration_Info_UClass_USmartsuitPose, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USmartsuitPose), 3867158573U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_olavu_Documents_Unreal_Projects_AIDrummer_Plugins_Smartsuit_Source_SmartsuitEditor_Public_SmartsuitPose_h_457218746(TEXT("/Script/SmartsuitEditor"),
	Z_CompiledInDeferFile_FID_olavu_Documents_Unreal_Projects_AIDrummer_Plugins_Smartsuit_Source_SmartsuitEditor_Public_SmartsuitPose_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_olavu_Documents_Unreal_Projects_AIDrummer_Plugins_Smartsuit_Source_SmartsuitEditor_Public_SmartsuitPose_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
