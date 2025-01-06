// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Smartsuit/Public/AnimNode_RokokoFacePose.h"
#include "Runtime/Engine/Classes/Animation/AnimNodeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_RokokoFacePose() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
LIVELINKANIMATIONCORE_API UClass* Z_Construct_UClass_ULiveLinkRetargetAsset_NoRegister();
SMARTSUIT_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_RokokoFacePose();
UPackage* Z_Construct_UPackage__Script_Smartsuit();
// End Cross Module References

// Begin ScriptStruct FAnimNode_RokokoFacePose
static_assert(std::is_polymorphic<FAnimNode_RokokoFacePose>() == std::is_polymorphic<FAnimNode_Base>(), "USTRUCT FAnimNode_RokokoFacePose cannot be polymorphic unless super FAnimNode_Base is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_RokokoFacePose;
class UScriptStruct* FAnimNode_RokokoFacePose::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_RokokoFacePose.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_RokokoFacePose.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_RokokoFacePose, (UObject*)Z_Construct_UPackage__Script_Smartsuit(), TEXT("AnimNode_RokokoFacePose"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_RokokoFacePose.OuterSingleton;
}
template<> SMARTSUIT_API UScriptStruct* StaticStruct<FAnimNode_RokokoFacePose>()
{
	return FAnimNode_RokokoFacePose::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnimNode_RokokoFacePose_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AnimNode_RokokoFacePose.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputPose_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/AnimNode_RokokoFacePose.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RokokoActorName_MetaData[] = {
		{ "Category", "SourceData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SourceData, meta = (PinShownByDefault))\n//FLiveLinkSubjectName LiveLinkSubjectName;\n" },
#endif
		{ "ModuleRelativePath", "Public/AnimNode_RokokoFacePose.h" },
		{ "PinShownByDefault", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SourceData, meta = (PinShownByDefault))\nFLiveLinkSubjectName LiveLinkSubjectName;" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RetargetAsset_MetaData[] = {
		{ "Category", "Retarget" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//#if WITH_EDITORONLY_DATA\n//\x09UE_DEPRECATED(4.23, \"FName SubjectName is deprecated. Use the SubjectName of type FLiveLinkSubjectName instead.\")\n//\x09UPROPERTY()\n//\x09""FName SubjectName_DEPRECATED;\n//#endif\n" },
#endif
		{ "ModuleRelativePath", "Public/AnimNode_RokokoFacePose.h" },
		{ "PinShownByDefault", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "#if WITH_EDITORONLY_DATA\n       UE_DEPRECATED(4.23, \"FName SubjectName is deprecated. Use the SubjectName of type FLiveLinkSubjectName instead.\")\n       UPROPERTY()\n       FName SubjectName_DEPRECATED;\n#endif" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentRetargetAsset_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimNode_RokokoFacePose.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputPose;
	static const UECodeGen_Private::FNamePropertyParams NewProp_RokokoActorName;
	static const UECodeGen_Private::FClassPropertyParams NewProp_RetargetAsset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentRetargetAsset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_RokokoFacePose>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_RokokoFacePose_Statics::NewProp_InputPose = { "InputPose", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_RokokoFacePose, InputPose), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputPose_MetaData), NewProp_InputPose_MetaData) }; // 1074011079
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimNode_RokokoFacePose_Statics::NewProp_RokokoActorName = { "RokokoActorName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_RokokoFacePose, RokokoActorName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RokokoActorName_MetaData), NewProp_RokokoActorName_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FAnimNode_RokokoFacePose_Statics::NewProp_RetargetAsset = { "RetargetAsset", nullptr, (EPropertyFlags)0x0014000002000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_RokokoFacePose, RetargetAsset), Z_Construct_UClass_UClass, Z_Construct_UClass_ULiveLinkRetargetAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RetargetAsset_MetaData), NewProp_RetargetAsset_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimNode_RokokoFacePose_Statics::NewProp_CurrentRetargetAsset = { "CurrentRetargetAsset", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_RokokoFacePose, CurrentRetargetAsset), Z_Construct_UClass_ULiveLinkRetargetAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentRetargetAsset_MetaData), NewProp_CurrentRetargetAsset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_RokokoFacePose_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RokokoFacePose_Statics::NewProp_InputPose,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RokokoFacePose_Statics::NewProp_RokokoActorName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RokokoFacePose_Statics::NewProp_RetargetAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RokokoFacePose_Statics::NewProp_CurrentRetargetAsset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RokokoFacePose_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_RokokoFacePose_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Smartsuit,
	Z_Construct_UScriptStruct_FAnimNode_Base,
	&NewStructOps,
	"AnimNode_RokokoFacePose",
	Z_Construct_UScriptStruct_FAnimNode_RokokoFacePose_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RokokoFacePose_Statics::PropPointers),
	sizeof(FAnimNode_RokokoFacePose),
	alignof(FAnimNode_RokokoFacePose),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RokokoFacePose_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimNode_RokokoFacePose_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_RokokoFacePose()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_RokokoFacePose.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_RokokoFacePose.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_RokokoFacePose_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_RokokoFacePose.InnerSingleton;
}
// End ScriptStruct FAnimNode_RokokoFacePose

// Begin Registration
struct Z_CompiledInDeferFile_FID_olavu_Documents_Unreal_Projects_AIDrummer_Plugins_Smartsuit_Source_Smartsuit_Public_AnimNode_RokokoFacePose_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAnimNode_RokokoFacePose::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_RokokoFacePose_Statics::NewStructOps, TEXT("AnimNode_RokokoFacePose"), &Z_Registration_Info_UScriptStruct_AnimNode_RokokoFacePose, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_RokokoFacePose), 1323056876U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_olavu_Documents_Unreal_Projects_AIDrummer_Plugins_Smartsuit_Source_Smartsuit_Public_AnimNode_RokokoFacePose_h_1542648464(TEXT("/Script/Smartsuit"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_olavu_Documents_Unreal_Projects_AIDrummer_Plugins_Smartsuit_Source_Smartsuit_Public_AnimNode_RokokoFacePose_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_olavu_Documents_Unreal_Projects_AIDrummer_Plugins_Smartsuit_Source_Smartsuit_Public_AnimNode_RokokoFacePose_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
