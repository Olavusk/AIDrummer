// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Smartsuit/Public/SmartsuitPoseNode.h"
#include "Runtime/Engine/Public/Animation/BoneReference.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSmartsuitPoseNode() {}

// Begin Cross Module References
ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
LIVELINKANIMATIONCORE_API UClass* Z_Construct_UClass_ULiveLinkRemapAsset_NoRegister();
SMARTSUIT_API UScriptStruct* Z_Construct_UScriptStruct_FSmartsuitBodyMap();
SMARTSUIT_API UScriptStruct* Z_Construct_UScriptStruct_FSmartsuitPoseNode();
UPackage* Z_Construct_UPackage__Script_Smartsuit();
// End Cross Module References

// Begin ScriptStruct FSmartsuitBodyMap
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SmartsuitBodyMap;
class UScriptStruct* FSmartsuitBodyMap::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SmartsuitBodyMap.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SmartsuitBodyMap.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSmartsuitBodyMap, (UObject*)Z_Construct_UPackage__Script_Smartsuit(), TEXT("SmartsuitBodyMap"));
	}
	return Z_Registration_Info_UScriptStruct_SmartsuitBodyMap.OuterSingleton;
}
template<> SMARTSUIT_API UScriptStruct* StaticStruct<FSmartsuitBodyMap>()
{
	return FSmartsuitBodyMap::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*! \\brief Bone reference mapping that is used to map bones between Smartsuit sensors and skeleton.*/" },
#endif
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "! \\brief Bone reference mapping that is used to map bones between Smartsuit sensors and skeleton." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_hip_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The hip bone to control." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_stomach_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The stomach bone to control." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_chest_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The chest bone to control." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_neck_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The neck bone to control." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_head_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The head bone to control." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_leftShoulder_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The left shoulder bone to control." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_leftArm_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The left upper arm bone to control." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_leftForearm_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The left lower arm bone to control." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_leftHand_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The left hand bone to control." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_rightShoulder_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The right shoulder bone to control." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_rightArm_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The right upper arm bone to control." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_rightForearm_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The right lower arm bone to control." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_rightHand_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The right hand bone to control." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_leftUpleg_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The left upper leg bone to control." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_leftLeg_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The left lower leg bone to control." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_leftFoot_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The left foot bone to control." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_leftToe_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The left toe bone to control." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_rightUpleg_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The right upper leg bone to control." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_rightLeg_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The right lower leg bone to control." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_rightFoot_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The right foot bone to control." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_rightToe_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The right toe bone to control." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_leftThumbProximal_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_leftThumbMedial_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_leftThumbDistal_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_leftThumbTip_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_leftIndexProximal_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_leftIndexMedial_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_leftIndexDistal_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_leftIndexTip_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_leftMiddleProximal_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_leftMiddleMedial_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_leftMiddleDistal_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_leftMiddleTip_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_leftRingProximal_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_leftRingMedial_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_leftRingDistal_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_leftRingTip_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_leftLittleProximal_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_leftLittleMedial_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_leftLittleDistal_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_leftLittleTip_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_rightThumbProximal_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_rightThumbMedial_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_rightThumbDistal_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_rightThumbTip_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_rightIndexProximal_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_rightIndexMedial_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_rightIndexDistal_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_rightIndexTip_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_rightMiddleProximal_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_rightMiddleMedial_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_rightMiddleDistal_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_rightMiddleTip_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_rightRingProximal_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_rightRingMedial_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_rightRingDistal_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_rightRingTip_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_rightLittleProximal_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_rightLittleMedial_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_rightLittleDistal_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_rightLittleTip_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_hip;
	static const UECodeGen_Private::FStructPropertyParams NewProp_stomach;
	static const UECodeGen_Private::FStructPropertyParams NewProp_chest;
	static const UECodeGen_Private::FStructPropertyParams NewProp_neck;
	static const UECodeGen_Private::FStructPropertyParams NewProp_head;
	static const UECodeGen_Private::FStructPropertyParams NewProp_leftShoulder;
	static const UECodeGen_Private::FStructPropertyParams NewProp_leftArm;
	static const UECodeGen_Private::FStructPropertyParams NewProp_leftForearm;
	static const UECodeGen_Private::FStructPropertyParams NewProp_leftHand;
	static const UECodeGen_Private::FStructPropertyParams NewProp_rightShoulder;
	static const UECodeGen_Private::FStructPropertyParams NewProp_rightArm;
	static const UECodeGen_Private::FStructPropertyParams NewProp_rightForearm;
	static const UECodeGen_Private::FStructPropertyParams NewProp_rightHand;
	static const UECodeGen_Private::FStructPropertyParams NewProp_leftUpleg;
	static const UECodeGen_Private::FStructPropertyParams NewProp_leftLeg;
	static const UECodeGen_Private::FStructPropertyParams NewProp_leftFoot;
	static const UECodeGen_Private::FStructPropertyParams NewProp_leftToe;
	static const UECodeGen_Private::FStructPropertyParams NewProp_rightUpleg;
	static const UECodeGen_Private::FStructPropertyParams NewProp_rightLeg;
	static const UECodeGen_Private::FStructPropertyParams NewProp_rightFoot;
	static const UECodeGen_Private::FStructPropertyParams NewProp_rightToe;
	static const UECodeGen_Private::FStructPropertyParams NewProp_leftThumbProximal;
	static const UECodeGen_Private::FStructPropertyParams NewProp_leftThumbMedial;
	static const UECodeGen_Private::FStructPropertyParams NewProp_leftThumbDistal;
	static const UECodeGen_Private::FStructPropertyParams NewProp_leftThumbTip;
	static const UECodeGen_Private::FStructPropertyParams NewProp_leftIndexProximal;
	static const UECodeGen_Private::FStructPropertyParams NewProp_leftIndexMedial;
	static const UECodeGen_Private::FStructPropertyParams NewProp_leftIndexDistal;
	static const UECodeGen_Private::FStructPropertyParams NewProp_leftIndexTip;
	static const UECodeGen_Private::FStructPropertyParams NewProp_leftMiddleProximal;
	static const UECodeGen_Private::FStructPropertyParams NewProp_leftMiddleMedial;
	static const UECodeGen_Private::FStructPropertyParams NewProp_leftMiddleDistal;
	static const UECodeGen_Private::FStructPropertyParams NewProp_leftMiddleTip;
	static const UECodeGen_Private::FStructPropertyParams NewProp_leftRingProximal;
	static const UECodeGen_Private::FStructPropertyParams NewProp_leftRingMedial;
	static const UECodeGen_Private::FStructPropertyParams NewProp_leftRingDistal;
	static const UECodeGen_Private::FStructPropertyParams NewProp_leftRingTip;
	static const UECodeGen_Private::FStructPropertyParams NewProp_leftLittleProximal;
	static const UECodeGen_Private::FStructPropertyParams NewProp_leftLittleMedial;
	static const UECodeGen_Private::FStructPropertyParams NewProp_leftLittleDistal;
	static const UECodeGen_Private::FStructPropertyParams NewProp_leftLittleTip;
	static const UECodeGen_Private::FStructPropertyParams NewProp_rightThumbProximal;
	static const UECodeGen_Private::FStructPropertyParams NewProp_rightThumbMedial;
	static const UECodeGen_Private::FStructPropertyParams NewProp_rightThumbDistal;
	static const UECodeGen_Private::FStructPropertyParams NewProp_rightThumbTip;
	static const UECodeGen_Private::FStructPropertyParams NewProp_rightIndexProximal;
	static const UECodeGen_Private::FStructPropertyParams NewProp_rightIndexMedial;
	static const UECodeGen_Private::FStructPropertyParams NewProp_rightIndexDistal;
	static const UECodeGen_Private::FStructPropertyParams NewProp_rightIndexTip;
	static const UECodeGen_Private::FStructPropertyParams NewProp_rightMiddleProximal;
	static const UECodeGen_Private::FStructPropertyParams NewProp_rightMiddleMedial;
	static const UECodeGen_Private::FStructPropertyParams NewProp_rightMiddleDistal;
	static const UECodeGen_Private::FStructPropertyParams NewProp_rightMiddleTip;
	static const UECodeGen_Private::FStructPropertyParams NewProp_rightRingProximal;
	static const UECodeGen_Private::FStructPropertyParams NewProp_rightRingMedial;
	static const UECodeGen_Private::FStructPropertyParams NewProp_rightRingDistal;
	static const UECodeGen_Private::FStructPropertyParams NewProp_rightRingTip;
	static const UECodeGen_Private::FStructPropertyParams NewProp_rightLittleProximal;
	static const UECodeGen_Private::FStructPropertyParams NewProp_rightLittleMedial;
	static const UECodeGen_Private::FStructPropertyParams NewProp_rightLittleDistal;
	static const UECodeGen_Private::FStructPropertyParams NewProp_rightLittleTip;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSmartsuitBodyMap>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_hip = { "hip", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSmartsuitBodyMap, hip), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_hip_MetaData), NewProp_hip_MetaData) }; // 4218265988
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_stomach = { "stomach", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSmartsuitBodyMap, stomach), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_stomach_MetaData), NewProp_stomach_MetaData) }; // 4218265988
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_chest = { "chest", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSmartsuitBodyMap, chest), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_chest_MetaData), NewProp_chest_MetaData) }; // 4218265988
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_neck = { "neck", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSmartsuitBodyMap, neck), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_neck_MetaData), NewProp_neck_MetaData) }; // 4218265988
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_head = { "head", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSmartsuitBodyMap, head), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_head_MetaData), NewProp_head_MetaData) }; // 4218265988
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftShoulder = { "leftShoulder", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSmartsuitBodyMap, leftShoulder), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_leftShoulder_MetaData), NewProp_leftShoulder_MetaData) }; // 4218265988
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftArm = { "leftArm", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSmartsuitBodyMap, leftArm), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_leftArm_MetaData), NewProp_leftArm_MetaData) }; // 4218265988
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftForearm = { "leftForearm", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSmartsuitBodyMap, leftForearm), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_leftForearm_MetaData), NewProp_leftForearm_MetaData) }; // 4218265988
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftHand = { "leftHand", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSmartsuitBodyMap, leftHand), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_leftHand_MetaData), NewProp_leftHand_MetaData) }; // 4218265988
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightShoulder = { "rightShoulder", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSmartsuitBodyMap, rightShoulder), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_rightShoulder_MetaData), NewProp_rightShoulder_MetaData) }; // 4218265988
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightArm = { "rightArm", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSmartsuitBodyMap, rightArm), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_rightArm_MetaData), NewProp_rightArm_MetaData) }; // 4218265988
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightForearm = { "rightForearm", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSmartsuitBodyMap, rightForearm), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_rightForearm_MetaData), NewProp_rightForearm_MetaData) }; // 4218265988
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightHand = { "rightHand", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSmartsuitBodyMap, rightHand), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_rightHand_MetaData), NewProp_rightHand_MetaData) }; // 4218265988
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftUpleg = { "leftUpleg", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSmartsuitBodyMap, leftUpleg), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_leftUpleg_MetaData), NewProp_leftUpleg_MetaData) }; // 4218265988
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftLeg = { "leftLeg", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSmartsuitBodyMap, leftLeg), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_leftLeg_MetaData), NewProp_leftLeg_MetaData) }; // 4218265988
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftFoot = { "leftFoot", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSmartsuitBodyMap, leftFoot), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_leftFoot_MetaData), NewProp_leftFoot_MetaData) }; // 4218265988
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftToe = { "leftToe", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSmartsuitBodyMap, leftToe), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_leftToe_MetaData), NewProp_leftToe_MetaData) }; // 4218265988
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightUpleg = { "rightUpleg", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSmartsuitBodyMap, rightUpleg), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_rightUpleg_MetaData), NewProp_rightUpleg_MetaData) }; // 4218265988
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightLeg = { "rightLeg", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSmartsuitBodyMap, rightLeg), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_rightLeg_MetaData), NewProp_rightLeg_MetaData) }; // 4218265988
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightFoot = { "rightFoot", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSmartsuitBodyMap, rightFoot), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_rightFoot_MetaData), NewProp_rightFoot_MetaData) }; // 4218265988
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightToe = { "rightToe", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSmartsuitBodyMap, rightToe), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_rightToe_MetaData), NewProp_rightToe_MetaData) }; // 4218265988
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftThumbProximal = { "leftThumbProximal", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSmartsuitBodyMap, leftThumbProximal), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_leftThumbProximal_MetaData), NewProp_leftThumbProximal_MetaData) }; // 4218265988
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftThumbMedial = { "leftThumbMedial", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSmartsuitBodyMap, leftThumbMedial), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_leftThumbMedial_MetaData), NewProp_leftThumbMedial_MetaData) }; // 4218265988
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftThumbDistal = { "leftThumbDistal", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSmartsuitBodyMap, leftThumbDistal), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_leftThumbDistal_MetaData), NewProp_leftThumbDistal_MetaData) }; // 4218265988
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftThumbTip = { "leftThumbTip", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSmartsuitBodyMap, leftThumbTip), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_leftThumbTip_MetaData), NewProp_leftThumbTip_MetaData) }; // 4218265988
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftIndexProximal = { "leftIndexProximal", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSmartsuitBodyMap, leftIndexProximal), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_leftIndexProximal_MetaData), NewProp_leftIndexProximal_MetaData) }; // 4218265988
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftIndexMedial = { "leftIndexMedial", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSmartsuitBodyMap, leftIndexMedial), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_leftIndexMedial_MetaData), NewProp_leftIndexMedial_MetaData) }; // 4218265988
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftIndexDistal = { "leftIndexDistal", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSmartsuitBodyMap, leftIndexDistal), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_leftIndexDistal_MetaData), NewProp_leftIndexDistal_MetaData) }; // 4218265988
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftIndexTip = { "leftIndexTip", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSmartsuitBodyMap, leftIndexTip), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_leftIndexTip_MetaData), NewProp_leftIndexTip_MetaData) }; // 4218265988
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftMiddleProximal = { "leftMiddleProximal", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSmartsuitBodyMap, leftMiddleProximal), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_leftMiddleProximal_MetaData), NewProp_leftMiddleProximal_MetaData) }; // 4218265988
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftMiddleMedial = { "leftMiddleMedial", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSmartsuitBodyMap, leftMiddleMedial), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_leftMiddleMedial_MetaData), NewProp_leftMiddleMedial_MetaData) }; // 4218265988
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftMiddleDistal = { "leftMiddleDistal", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSmartsuitBodyMap, leftMiddleDistal), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_leftMiddleDistal_MetaData), NewProp_leftMiddleDistal_MetaData) }; // 4218265988
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftMiddleTip = { "leftMiddleTip", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSmartsuitBodyMap, leftMiddleTip), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_leftMiddleTip_MetaData), NewProp_leftMiddleTip_MetaData) }; // 4218265988
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftRingProximal = { "leftRingProximal", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSmartsuitBodyMap, leftRingProximal), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_leftRingProximal_MetaData), NewProp_leftRingProximal_MetaData) }; // 4218265988
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftRingMedial = { "leftRingMedial", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSmartsuitBodyMap, leftRingMedial), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_leftRingMedial_MetaData), NewProp_leftRingMedial_MetaData) }; // 4218265988
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftRingDistal = { "leftRingDistal", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSmartsuitBodyMap, leftRingDistal), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_leftRingDistal_MetaData), NewProp_leftRingDistal_MetaData) }; // 4218265988
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftRingTip = { "leftRingTip", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSmartsuitBodyMap, leftRingTip), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_leftRingTip_MetaData), NewProp_leftRingTip_MetaData) }; // 4218265988
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftLittleProximal = { "leftLittleProximal", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSmartsuitBodyMap, leftLittleProximal), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_leftLittleProximal_MetaData), NewProp_leftLittleProximal_MetaData) }; // 4218265988
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftLittleMedial = { "leftLittleMedial", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSmartsuitBodyMap, leftLittleMedial), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_leftLittleMedial_MetaData), NewProp_leftLittleMedial_MetaData) }; // 4218265988
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftLittleDistal = { "leftLittleDistal", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSmartsuitBodyMap, leftLittleDistal), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_leftLittleDistal_MetaData), NewProp_leftLittleDistal_MetaData) }; // 4218265988
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftLittleTip = { "leftLittleTip", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSmartsuitBodyMap, leftLittleTip), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_leftLittleTip_MetaData), NewProp_leftLittleTip_MetaData) }; // 4218265988
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightThumbProximal = { "rightThumbProximal", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSmartsuitBodyMap, rightThumbProximal), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_rightThumbProximal_MetaData), NewProp_rightThumbProximal_MetaData) }; // 4218265988
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightThumbMedial = { "rightThumbMedial", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSmartsuitBodyMap, rightThumbMedial), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_rightThumbMedial_MetaData), NewProp_rightThumbMedial_MetaData) }; // 4218265988
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightThumbDistal = { "rightThumbDistal", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSmartsuitBodyMap, rightThumbDistal), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_rightThumbDistal_MetaData), NewProp_rightThumbDistal_MetaData) }; // 4218265988
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightThumbTip = { "rightThumbTip", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSmartsuitBodyMap, rightThumbTip), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_rightThumbTip_MetaData), NewProp_rightThumbTip_MetaData) }; // 4218265988
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightIndexProximal = { "rightIndexProximal", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSmartsuitBodyMap, rightIndexProximal), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_rightIndexProximal_MetaData), NewProp_rightIndexProximal_MetaData) }; // 4218265988
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightIndexMedial = { "rightIndexMedial", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSmartsuitBodyMap, rightIndexMedial), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_rightIndexMedial_MetaData), NewProp_rightIndexMedial_MetaData) }; // 4218265988
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightIndexDistal = { "rightIndexDistal", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSmartsuitBodyMap, rightIndexDistal), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_rightIndexDistal_MetaData), NewProp_rightIndexDistal_MetaData) }; // 4218265988
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightIndexTip = { "rightIndexTip", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSmartsuitBodyMap, rightIndexTip), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_rightIndexTip_MetaData), NewProp_rightIndexTip_MetaData) }; // 4218265988
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightMiddleProximal = { "rightMiddleProximal", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSmartsuitBodyMap, rightMiddleProximal), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_rightMiddleProximal_MetaData), NewProp_rightMiddleProximal_MetaData) }; // 4218265988
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightMiddleMedial = { "rightMiddleMedial", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSmartsuitBodyMap, rightMiddleMedial), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_rightMiddleMedial_MetaData), NewProp_rightMiddleMedial_MetaData) }; // 4218265988
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightMiddleDistal = { "rightMiddleDistal", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSmartsuitBodyMap, rightMiddleDistal), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_rightMiddleDistal_MetaData), NewProp_rightMiddleDistal_MetaData) }; // 4218265988
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightMiddleTip = { "rightMiddleTip", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSmartsuitBodyMap, rightMiddleTip), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_rightMiddleTip_MetaData), NewProp_rightMiddleTip_MetaData) }; // 4218265988
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightRingProximal = { "rightRingProximal", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSmartsuitBodyMap, rightRingProximal), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_rightRingProximal_MetaData), NewProp_rightRingProximal_MetaData) }; // 4218265988
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightRingMedial = { "rightRingMedial", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSmartsuitBodyMap, rightRingMedial), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_rightRingMedial_MetaData), NewProp_rightRingMedial_MetaData) }; // 4218265988
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightRingDistal = { "rightRingDistal", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSmartsuitBodyMap, rightRingDistal), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_rightRingDistal_MetaData), NewProp_rightRingDistal_MetaData) }; // 4218265988
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightRingTip = { "rightRingTip", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSmartsuitBodyMap, rightRingTip), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_rightRingTip_MetaData), NewProp_rightRingTip_MetaData) }; // 4218265988
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightLittleProximal = { "rightLittleProximal", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSmartsuitBodyMap, rightLittleProximal), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_rightLittleProximal_MetaData), NewProp_rightLittleProximal_MetaData) }; // 4218265988
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightLittleMedial = { "rightLittleMedial", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSmartsuitBodyMap, rightLittleMedial), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_rightLittleMedial_MetaData), NewProp_rightLittleMedial_MetaData) }; // 4218265988
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightLittleDistal = { "rightLittleDistal", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSmartsuitBodyMap, rightLittleDistal), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_rightLittleDistal_MetaData), NewProp_rightLittleDistal_MetaData) }; // 4218265988
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightLittleTip = { "rightLittleTip", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSmartsuitBodyMap, rightLittleTip), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_rightLittleTip_MetaData), NewProp_rightLittleTip_MetaData) }; // 4218265988
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_hip,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_stomach,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_chest,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_neck,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_head,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftShoulder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftArm,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftForearm,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftHand,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightShoulder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightArm,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightForearm,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightHand,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftUpleg,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftLeg,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftFoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftToe,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightUpleg,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightLeg,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightFoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightToe,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftThumbProximal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftThumbMedial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftThumbDistal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftThumbTip,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftIndexProximal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftIndexMedial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftIndexDistal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftIndexTip,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftMiddleProximal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftMiddleMedial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftMiddleDistal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftMiddleTip,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftRingProximal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftRingMedial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftRingDistal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftRingTip,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftLittleProximal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftLittleMedial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftLittleDistal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftLittleTip,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightThumbProximal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightThumbMedial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightThumbDistal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightThumbTip,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightIndexProximal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightIndexMedial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightIndexDistal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightIndexTip,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightMiddleProximal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightMiddleMedial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightMiddleDistal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightMiddleTip,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightRingProximal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightRingMedial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightRingDistal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightRingTip,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightLittleProximal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightLittleMedial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightLittleDistal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightLittleTip,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Smartsuit,
	nullptr,
	&NewStructOps,
	"SmartsuitBodyMap",
	Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::PropPointers),
	sizeof(FSmartsuitBodyMap),
	alignof(FSmartsuitBodyMap),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSmartsuitBodyMap()
{
	if (!Z_Registration_Info_UScriptStruct_SmartsuitBodyMap.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SmartsuitBodyMap.InnerSingleton, Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SmartsuitBodyMap.InnerSingleton;
}
// End ScriptStruct FSmartsuitBodyMap

// Begin ScriptStruct FSmartsuitPoseNode
static_assert(std::is_polymorphic<FSmartsuitPoseNode>() == std::is_polymorphic<FAnimNode_SkeletalControlBase>(), "USTRUCT FSmartsuitPoseNode cannot be polymorphic unless super FAnimNode_SkeletalControlBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SmartsuitPoseNode;
class UScriptStruct* FSmartsuitPoseNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SmartsuitPoseNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SmartsuitPoseNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSmartsuitPoseNode, (UObject*)Z_Construct_UPackage__Script_Smartsuit(), TEXT("SmartsuitPoseNode"));
	}
	return Z_Registration_Info_UScriptStruct_SmartsuitPoseNode.OuterSingleton;
}
template<> SMARTSUIT_API UScriptStruct* StaticStruct<FSmartsuitPoseNode>()
{
	return FSmartsuitPoseNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSmartsuitPoseNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*! \\brief An animation controller which poses a humanoid character to the pose as received from the Smartsuit.\n*\n* This is the main animation blueprint node for Smartsuit. It takes as input a character in T-pose along with a mapping of the bones necessary to drive the animation.\n* Then it rotates the bones and translates the hip so the character behaves as the player in the Smartsuit.\n*/" },
#endif
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "! \\brief An animation controller which poses a humanoid character to the pose as received from the Smartsuit.\n*\n* This is the main animation blueprint node for Smartsuit. It takes as input a character in T-pose along with a mapping of the bones necessary to drive the animation.\n* Then it rotates the bones and translates the hip so the character behaves as the player in the Smartsuit." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneMap_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*EditAnywhere, BlueprintReadWrite, Category = SmartsuitAnimationSetup, meta = (NeverAsPin, ToolTip = \"A mapping between the Smartsuit expected bone names and the bones that will animate from the Smartsuit component. Every bone is required for the animation to work properly.\")*/" },
#endif
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "EditAnywhere, BlueprintReadWrite, Category = SmartsuitAnimationSetup, meta = (NeverAsPin, ToolTip = \"A mapping between the Smartsuit expected bone names and the bones that will animate from the Smartsuit component. Every bone is required for the animation to work properly.\")" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RetargetAsset_MetaData[] = {
		{ "Category", "Retarget" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
		{ "PinShownByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentRetargetAsset_MetaData[] = {
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RokokoActorName_MetaData[] = {
		{ "Category", "SourceData" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
		{ "PinShownByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bApplyRootMotion_MetaData[] = {
		{ "Category", "RootMotion" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If enabled, root motion will be applied from this pose. This can help prevent characters from moving through walls etc. */" },
#endif
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
		{ "PinShownByDefault", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If enabled, root motion will be applied from this pose. This can help prevent characters from moving through walls etc." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShoulderSpace_MetaData[] = {
		{ "Category", "Space" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Use to shoulder space. Tweaks the clavicle/shoulder rotation, around approx. the character up axis. Make sure that skeleton axis are imported correctly into Unreal! Defaults to 0.0f */" },
#endif
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
		{ "PinShownByDefault", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Use to shoulder space. Tweaks the clavicle/shoulder rotation, around approx. the character up axis. Make sure that skeleton axis are imported correctly into Unreal! Defaults to 0.0f" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArmSpace_MetaData[] = {
		{ "Category", "Space" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Use to tweak arm space. Tweaks the upper arm rotation around approx. the character forward axis. Make sure that skeleton axis are imported correctly into Unreal! Defaults to 0.0f */" },
#endif
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
		{ "PinShownByDefault", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Use to tweak arm space. Tweaks the upper arm rotation around approx. the character forward axis. Make sure that skeleton axis are imported correctly into Unreal! Defaults to 0.0f" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BoneMap;
	static const UECodeGen_Private::FClassPropertyParams NewProp_RetargetAsset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentRetargetAsset;
	static const UECodeGen_Private::FNamePropertyParams NewProp_RokokoActorName;
	static void NewProp_bApplyRootMotion_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyRootMotion;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ShoulderSpace;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ArmSpace;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSmartsuitPoseNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitPoseNode_Statics::NewProp_BoneMap = { "BoneMap", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSmartsuitPoseNode, BoneMap), Z_Construct_UScriptStruct_FSmartsuitBodyMap, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneMap_MetaData), NewProp_BoneMap_MetaData) }; // 3915636488
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FSmartsuitPoseNode_Statics::NewProp_RetargetAsset = { "RetargetAsset", nullptr, (EPropertyFlags)0x0014000002000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSmartsuitPoseNode, RetargetAsset), Z_Construct_UClass_UClass, Z_Construct_UClass_ULiveLinkRemapAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RetargetAsset_MetaData), NewProp_RetargetAsset_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSmartsuitPoseNode_Statics::NewProp_CurrentRetargetAsset = { "CurrentRetargetAsset", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSmartsuitPoseNode, CurrentRetargetAsset), Z_Construct_UClass_ULiveLinkRemapAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentRetargetAsset_MetaData), NewProp_CurrentRetargetAsset_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSmartsuitPoseNode_Statics::NewProp_RokokoActorName = { "RokokoActorName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSmartsuitPoseNode, RokokoActorName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RokokoActorName_MetaData), NewProp_RokokoActorName_MetaData) };
void Z_Construct_UScriptStruct_FSmartsuitPoseNode_Statics::NewProp_bApplyRootMotion_SetBit(void* Obj)
{
	((FSmartsuitPoseNode*)Obj)->bApplyRootMotion = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSmartsuitPoseNode_Statics::NewProp_bApplyRootMotion = { "bApplyRootMotion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSmartsuitPoseNode), &Z_Construct_UScriptStruct_FSmartsuitPoseNode_Statics::NewProp_bApplyRootMotion_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bApplyRootMotion_MetaData), NewProp_bApplyRootMotion_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSmartsuitPoseNode_Statics::NewProp_ShoulderSpace = { "ShoulderSpace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSmartsuitPoseNode, ShoulderSpace), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShoulderSpace_MetaData), NewProp_ShoulderSpace_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSmartsuitPoseNode_Statics::NewProp_ArmSpace = { "ArmSpace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSmartsuitPoseNode, ArmSpace), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArmSpace_MetaData), NewProp_ArmSpace_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSmartsuitPoseNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitPoseNode_Statics::NewProp_BoneMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitPoseNode_Statics::NewProp_RetargetAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitPoseNode_Statics::NewProp_CurrentRetargetAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitPoseNode_Statics::NewProp_RokokoActorName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitPoseNode_Statics::NewProp_bApplyRootMotion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitPoseNode_Statics::NewProp_ShoulderSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitPoseNode_Statics::NewProp_ArmSpace,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitPoseNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSmartsuitPoseNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Smartsuit,
	Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase,
	&NewStructOps,
	"SmartsuitPoseNode",
	Z_Construct_UScriptStruct_FSmartsuitPoseNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitPoseNode_Statics::PropPointers),
	sizeof(FSmartsuitPoseNode),
	alignof(FSmartsuitPoseNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitPoseNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSmartsuitPoseNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSmartsuitPoseNode()
{
	if (!Z_Registration_Info_UScriptStruct_SmartsuitPoseNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SmartsuitPoseNode.InnerSingleton, Z_Construct_UScriptStruct_FSmartsuitPoseNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SmartsuitPoseNode.InnerSingleton;
}
// End ScriptStruct FSmartsuitPoseNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_olavu_Documents_Unreal_Projects_rokoko_studio_live_unreal_engine_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitPoseNode_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSmartsuitBodyMap::StaticStruct, Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewStructOps, TEXT("SmartsuitBodyMap"), &Z_Registration_Info_UScriptStruct_SmartsuitBodyMap, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSmartsuitBodyMap), 3915636488U) },
		{ FSmartsuitPoseNode::StaticStruct, Z_Construct_UScriptStruct_FSmartsuitPoseNode_Statics::NewStructOps, TEXT("SmartsuitPoseNode"), &Z_Registration_Info_UScriptStruct_SmartsuitPoseNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSmartsuitPoseNode), 2464155229U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_olavu_Documents_Unreal_Projects_rokoko_studio_live_unreal_engine_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitPoseNode_h_2928589420(TEXT("/Script/Smartsuit"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_olavu_Documents_Unreal_Projects_rokoko_studio_live_unreal_engine_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitPoseNode_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_olavu_Documents_Unreal_Projects_rokoko_studio_live_unreal_engine_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitPoseNode_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
