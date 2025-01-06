// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Smartsuit/Public/RokokoBodyRemapAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRokokoBodyRemapAsset() {}

// Begin Cross Module References
LIVELINKANIMATIONCORE_API UClass* Z_Construct_UClass_ULiveLinkRemapAsset();
SMARTSUIT_API UClass* Z_Construct_UClass_URokokoBodyMapData();
SMARTSUIT_API UClass* Z_Construct_UClass_URokokoBodyMapData_NoRegister();
UPackage* Z_Construct_UPackage__Script_Smartsuit();
// End Cross Module References

// Begin Class URokokoBodyMapData Function InitializeTMap
struct Z_Construct_UFunction_URokokoBodyMapData_InitializeTMap_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BoneRemapping" },
		{ "ModuleRelativePath", "Public/RokokoBodyRemapAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URokokoBodyMapData_InitializeTMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URokokoBodyMapData, nullptr, "InitializeTMap", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URokokoBodyMapData_InitializeTMap_Statics::Function_MetaDataParams), Z_Construct_UFunction_URokokoBodyMapData_InitializeTMap_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_URokokoBodyMapData_InitializeTMap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URokokoBodyMapData_InitializeTMap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URokokoBodyMapData::execInitializeTMap)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeTMap();
	P_NATIVE_END;
}
// End Class URokokoBodyMapData Function InitializeTMap

// Begin Class URokokoBodyMapData
void URokokoBodyMapData::StaticRegisterNativesURokokoBodyMapData()
{
	UClass* Class = URokokoBodyMapData::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "InitializeTMap", &URokokoBodyMapData::execInitializeTMap },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URokokoBodyMapData);
UClass* Z_Construct_UClass_URokokoBodyMapData_NoRegister()
{
	return URokokoBodyMapData::StaticClass();
}
struct Z_Construct_UClass_URokokoBodyMapData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "RokokoBodyRemapAsset.h" },
		{ "ModuleRelativePath", "Public/RokokoBodyRemapAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NameMapping_MetaData[] = {
		{ "Category", "BoneRemapping" },
		{ "ModuleRelativePath", "Public/RokokoBodyRemapAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_hip_MetaData[] = {
		{ "Category", "BoneRemapping" },
		{ "ModuleRelativePath", "Public/RokokoBodyRemapAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_stomach_MetaData[] = {
		{ "Category", "BoneRemapping" },
		{ "ModuleRelativePath", "Public/RokokoBodyRemapAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_chest_MetaData[] = {
		{ "Category", "BoneRemapping" },
		{ "ModuleRelativePath", "Public/RokokoBodyRemapAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_neck_MetaData[] = {
		{ "Category", "BoneRemapping" },
		{ "ModuleRelativePath", "Public/RokokoBodyRemapAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_head_MetaData[] = {
		{ "Category", "BoneRemapping" },
		{ "ModuleRelativePath", "Public/RokokoBodyRemapAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_leftShoulder_MetaData[] = {
		{ "Category", "BoneRemapping" },
		{ "ModuleRelativePath", "Public/RokokoBodyRemapAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_leftArm_MetaData[] = {
		{ "Category", "BoneRemapping" },
		{ "ModuleRelativePath", "Public/RokokoBodyRemapAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_leftForearm_MetaData[] = {
		{ "Category", "BoneRemapping" },
		{ "ModuleRelativePath", "Public/RokokoBodyRemapAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_leftHand_MetaData[] = {
		{ "Category", "BoneRemapping" },
		{ "ModuleRelativePath", "Public/RokokoBodyRemapAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_rightShoulder_MetaData[] = {
		{ "Category", "BoneRemapping" },
		{ "ModuleRelativePath", "Public/RokokoBodyRemapAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_rightArm_MetaData[] = {
		{ "Category", "BoneRemapping" },
		{ "ModuleRelativePath", "Public/RokokoBodyRemapAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_rightForearm_MetaData[] = {
		{ "Category", "BoneRemapping" },
		{ "ModuleRelativePath", "Public/RokokoBodyRemapAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_rightHand_MetaData[] = {
		{ "Category", "BoneRemapping" },
		{ "ModuleRelativePath", "Public/RokokoBodyRemapAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_leftUpleg_MetaData[] = {
		{ "Category", "BoneRemapping" },
		{ "ModuleRelativePath", "Public/RokokoBodyRemapAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_leftLeg_MetaData[] = {
		{ "Category", "BoneRemapping" },
		{ "ModuleRelativePath", "Public/RokokoBodyRemapAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_leftFoot_MetaData[] = {
		{ "Category", "BoneRemapping" },
		{ "ModuleRelativePath", "Public/RokokoBodyRemapAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_leftToe_MetaData[] = {
		{ "Category", "BoneRemapping" },
		{ "ModuleRelativePath", "Public/RokokoBodyRemapAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_rightUpleg_MetaData[] = {
		{ "Category", "BoneRemapping" },
		{ "ModuleRelativePath", "Public/RokokoBodyRemapAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_rightLeg_MetaData[] = {
		{ "Category", "BoneRemapping" },
		{ "ModuleRelativePath", "Public/RokokoBodyRemapAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_rightFoot_MetaData[] = {
		{ "Category", "BoneRemapping" },
		{ "ModuleRelativePath", "Public/RokokoBodyRemapAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_rightToe_MetaData[] = {
		{ "Category", "BoneRemapping" },
		{ "ModuleRelativePath", "Public/RokokoBodyRemapAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_leftThumbProximal_MetaData[] = {
		{ "Category", "BoneRemapping" },
		{ "ModuleRelativePath", "Public/RokokoBodyRemapAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_leftThumbMedial_MetaData[] = {
		{ "Category", "BoneRemapping" },
		{ "ModuleRelativePath", "Public/RokokoBodyRemapAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_leftThumbDistal_MetaData[] = {
		{ "Category", "BoneRemapping" },
		{ "ModuleRelativePath", "Public/RokokoBodyRemapAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_leftThumbTip_MetaData[] = {
		{ "Category", "BoneRemapping" },
		{ "ModuleRelativePath", "Public/RokokoBodyRemapAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_leftIndexProximal_MetaData[] = {
		{ "Category", "BoneRemapping" },
		{ "ModuleRelativePath", "Public/RokokoBodyRemapAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_leftIndexMedial_MetaData[] = {
		{ "Category", "BoneRemapping" },
		{ "ModuleRelativePath", "Public/RokokoBodyRemapAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_leftIndexDistal_MetaData[] = {
		{ "Category", "BoneRemapping" },
		{ "ModuleRelativePath", "Public/RokokoBodyRemapAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_leftIndexTip_MetaData[] = {
		{ "Category", "BoneRemapping" },
		{ "ModuleRelativePath", "Public/RokokoBodyRemapAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_leftMiddleProximal_MetaData[] = {
		{ "Category", "BoneRemapping" },
		{ "ModuleRelativePath", "Public/RokokoBodyRemapAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_leftMiddleMedial_MetaData[] = {
		{ "Category", "BoneRemapping" },
		{ "ModuleRelativePath", "Public/RokokoBodyRemapAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_leftMiddleDistal_MetaData[] = {
		{ "Category", "BoneRemapping" },
		{ "ModuleRelativePath", "Public/RokokoBodyRemapAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_leftMiddleTip_MetaData[] = {
		{ "Category", "BoneRemapping" },
		{ "ModuleRelativePath", "Public/RokokoBodyRemapAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_leftRingProximal_MetaData[] = {
		{ "Category", "BoneRemapping" },
		{ "ModuleRelativePath", "Public/RokokoBodyRemapAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_leftRingMedial_MetaData[] = {
		{ "Category", "BoneRemapping" },
		{ "ModuleRelativePath", "Public/RokokoBodyRemapAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_leftRingDistal_MetaData[] = {
		{ "Category", "BoneRemapping" },
		{ "ModuleRelativePath", "Public/RokokoBodyRemapAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_leftRingTip_MetaData[] = {
		{ "Category", "BoneRemapping" },
		{ "ModuleRelativePath", "Public/RokokoBodyRemapAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_leftLittleProximal_MetaData[] = {
		{ "Category", "BoneRemapping" },
		{ "ModuleRelativePath", "Public/RokokoBodyRemapAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_leftLittleMedial_MetaData[] = {
		{ "Category", "BoneRemapping" },
		{ "ModuleRelativePath", "Public/RokokoBodyRemapAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_leftLittleDistal_MetaData[] = {
		{ "Category", "BoneRemapping" },
		{ "ModuleRelativePath", "Public/RokokoBodyRemapAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_leftLittleTip_MetaData[] = {
		{ "Category", "BoneRemapping" },
		{ "ModuleRelativePath", "Public/RokokoBodyRemapAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_rightThumbProximal_MetaData[] = {
		{ "Category", "BoneRemapping" },
		{ "ModuleRelativePath", "Public/RokokoBodyRemapAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_rightThumbMedial_MetaData[] = {
		{ "Category", "BoneRemapping" },
		{ "ModuleRelativePath", "Public/RokokoBodyRemapAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_rightThumbDistal_MetaData[] = {
		{ "Category", "BoneRemapping" },
		{ "ModuleRelativePath", "Public/RokokoBodyRemapAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_rightThumbTip_MetaData[] = {
		{ "Category", "BoneRemapping" },
		{ "ModuleRelativePath", "Public/RokokoBodyRemapAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_rightIndexProximal_MetaData[] = {
		{ "Category", "BoneRemapping" },
		{ "ModuleRelativePath", "Public/RokokoBodyRemapAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_rightIndexMedial_MetaData[] = {
		{ "Category", "BoneRemapping" },
		{ "ModuleRelativePath", "Public/RokokoBodyRemapAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_rightIndexDistal_MetaData[] = {
		{ "Category", "BoneRemapping" },
		{ "ModuleRelativePath", "Public/RokokoBodyRemapAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_rightIndexTip_MetaData[] = {
		{ "Category", "BoneRemapping" },
		{ "ModuleRelativePath", "Public/RokokoBodyRemapAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_rightMiddleProximal_MetaData[] = {
		{ "Category", "BoneRemapping" },
		{ "ModuleRelativePath", "Public/RokokoBodyRemapAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_rightMiddleMedial_MetaData[] = {
		{ "Category", "BoneRemapping" },
		{ "ModuleRelativePath", "Public/RokokoBodyRemapAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_rightMiddleDistal_MetaData[] = {
		{ "Category", "BoneRemapping" },
		{ "ModuleRelativePath", "Public/RokokoBodyRemapAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_rightMiddleTip_MetaData[] = {
		{ "Category", "BoneRemapping" },
		{ "ModuleRelativePath", "Public/RokokoBodyRemapAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_rightRingProximal_MetaData[] = {
		{ "Category", "BoneRemapping" },
		{ "ModuleRelativePath", "Public/RokokoBodyRemapAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_rightRingMedial_MetaData[] = {
		{ "Category", "BoneRemapping" },
		{ "ModuleRelativePath", "Public/RokokoBodyRemapAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_rightRingDistal_MetaData[] = {
		{ "Category", "BoneRemapping" },
		{ "ModuleRelativePath", "Public/RokokoBodyRemapAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_rightRingTip_MetaData[] = {
		{ "Category", "BoneRemapping" },
		{ "ModuleRelativePath", "Public/RokokoBodyRemapAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_rightLittleProximal_MetaData[] = {
		{ "Category", "BoneRemapping" },
		{ "ModuleRelativePath", "Public/RokokoBodyRemapAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_rightLittleMedial_MetaData[] = {
		{ "Category", "BoneRemapping" },
		{ "ModuleRelativePath", "Public/RokokoBodyRemapAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_rightLittleDistal_MetaData[] = {
		{ "Category", "BoneRemapping" },
		{ "ModuleRelativePath", "Public/RokokoBodyRemapAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_rightLittleTip_MetaData[] = {
		{ "Category", "BoneRemapping" },
		{ "ModuleRelativePath", "Public/RokokoBodyRemapAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_NameMapping_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_NameMapping_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_NameMapping;
	static const UECodeGen_Private::FNamePropertyParams NewProp_hip;
	static const UECodeGen_Private::FNamePropertyParams NewProp_stomach;
	static const UECodeGen_Private::FNamePropertyParams NewProp_chest;
	static const UECodeGen_Private::FNamePropertyParams NewProp_neck;
	static const UECodeGen_Private::FNamePropertyParams NewProp_head;
	static const UECodeGen_Private::FNamePropertyParams NewProp_leftShoulder;
	static const UECodeGen_Private::FNamePropertyParams NewProp_leftArm;
	static const UECodeGen_Private::FNamePropertyParams NewProp_leftForearm;
	static const UECodeGen_Private::FNamePropertyParams NewProp_leftHand;
	static const UECodeGen_Private::FNamePropertyParams NewProp_rightShoulder;
	static const UECodeGen_Private::FNamePropertyParams NewProp_rightArm;
	static const UECodeGen_Private::FNamePropertyParams NewProp_rightForearm;
	static const UECodeGen_Private::FNamePropertyParams NewProp_rightHand;
	static const UECodeGen_Private::FNamePropertyParams NewProp_leftUpleg;
	static const UECodeGen_Private::FNamePropertyParams NewProp_leftLeg;
	static const UECodeGen_Private::FNamePropertyParams NewProp_leftFoot;
	static const UECodeGen_Private::FNamePropertyParams NewProp_leftToe;
	static const UECodeGen_Private::FNamePropertyParams NewProp_rightUpleg;
	static const UECodeGen_Private::FNamePropertyParams NewProp_rightLeg;
	static const UECodeGen_Private::FNamePropertyParams NewProp_rightFoot;
	static const UECodeGen_Private::FNamePropertyParams NewProp_rightToe;
	static const UECodeGen_Private::FNamePropertyParams NewProp_leftThumbProximal;
	static const UECodeGen_Private::FNamePropertyParams NewProp_leftThumbMedial;
	static const UECodeGen_Private::FNamePropertyParams NewProp_leftThumbDistal;
	static const UECodeGen_Private::FNamePropertyParams NewProp_leftThumbTip;
	static const UECodeGen_Private::FNamePropertyParams NewProp_leftIndexProximal;
	static const UECodeGen_Private::FNamePropertyParams NewProp_leftIndexMedial;
	static const UECodeGen_Private::FNamePropertyParams NewProp_leftIndexDistal;
	static const UECodeGen_Private::FNamePropertyParams NewProp_leftIndexTip;
	static const UECodeGen_Private::FNamePropertyParams NewProp_leftMiddleProximal;
	static const UECodeGen_Private::FNamePropertyParams NewProp_leftMiddleMedial;
	static const UECodeGen_Private::FNamePropertyParams NewProp_leftMiddleDistal;
	static const UECodeGen_Private::FNamePropertyParams NewProp_leftMiddleTip;
	static const UECodeGen_Private::FNamePropertyParams NewProp_leftRingProximal;
	static const UECodeGen_Private::FNamePropertyParams NewProp_leftRingMedial;
	static const UECodeGen_Private::FNamePropertyParams NewProp_leftRingDistal;
	static const UECodeGen_Private::FNamePropertyParams NewProp_leftRingTip;
	static const UECodeGen_Private::FNamePropertyParams NewProp_leftLittleProximal;
	static const UECodeGen_Private::FNamePropertyParams NewProp_leftLittleMedial;
	static const UECodeGen_Private::FNamePropertyParams NewProp_leftLittleDistal;
	static const UECodeGen_Private::FNamePropertyParams NewProp_leftLittleTip;
	static const UECodeGen_Private::FNamePropertyParams NewProp_rightThumbProximal;
	static const UECodeGen_Private::FNamePropertyParams NewProp_rightThumbMedial;
	static const UECodeGen_Private::FNamePropertyParams NewProp_rightThumbDistal;
	static const UECodeGen_Private::FNamePropertyParams NewProp_rightThumbTip;
	static const UECodeGen_Private::FNamePropertyParams NewProp_rightIndexProximal;
	static const UECodeGen_Private::FNamePropertyParams NewProp_rightIndexMedial;
	static const UECodeGen_Private::FNamePropertyParams NewProp_rightIndexDistal;
	static const UECodeGen_Private::FNamePropertyParams NewProp_rightIndexTip;
	static const UECodeGen_Private::FNamePropertyParams NewProp_rightMiddleProximal;
	static const UECodeGen_Private::FNamePropertyParams NewProp_rightMiddleMedial;
	static const UECodeGen_Private::FNamePropertyParams NewProp_rightMiddleDistal;
	static const UECodeGen_Private::FNamePropertyParams NewProp_rightMiddleTip;
	static const UECodeGen_Private::FNamePropertyParams NewProp_rightRingProximal;
	static const UECodeGen_Private::FNamePropertyParams NewProp_rightRingMedial;
	static const UECodeGen_Private::FNamePropertyParams NewProp_rightRingDistal;
	static const UECodeGen_Private::FNamePropertyParams NewProp_rightRingTip;
	static const UECodeGen_Private::FNamePropertyParams NewProp_rightLittleProximal;
	static const UECodeGen_Private::FNamePropertyParams NewProp_rightLittleMedial;
	static const UECodeGen_Private::FNamePropertyParams NewProp_rightLittleDistal;
	static const UECodeGen_Private::FNamePropertyParams NewProp_rightLittleTip;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URokokoBodyMapData_InitializeTMap, "InitializeTMap" }, // 3913012693
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URokokoBodyMapData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_NameMapping_ValueProp = { "NameMapping", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_NameMapping_Key_KeyProp = { "NameMapping_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_NameMapping = { "NameMapping", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URokokoBodyMapData, NameMapping), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NameMapping_MetaData), NewProp_NameMapping_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_hip = { "hip", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URokokoBodyMapData, hip), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_hip_MetaData), NewProp_hip_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_stomach = { "stomach", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URokokoBodyMapData, stomach), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_stomach_MetaData), NewProp_stomach_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_chest = { "chest", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URokokoBodyMapData, chest), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_chest_MetaData), NewProp_chest_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_neck = { "neck", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URokokoBodyMapData, neck), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_neck_MetaData), NewProp_neck_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_head = { "head", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URokokoBodyMapData, head), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_head_MetaData), NewProp_head_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftShoulder = { "leftShoulder", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URokokoBodyMapData, leftShoulder), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_leftShoulder_MetaData), NewProp_leftShoulder_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftArm = { "leftArm", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URokokoBodyMapData, leftArm), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_leftArm_MetaData), NewProp_leftArm_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftForearm = { "leftForearm", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URokokoBodyMapData, leftForearm), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_leftForearm_MetaData), NewProp_leftForearm_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftHand = { "leftHand", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URokokoBodyMapData, leftHand), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_leftHand_MetaData), NewProp_leftHand_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightShoulder = { "rightShoulder", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URokokoBodyMapData, rightShoulder), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_rightShoulder_MetaData), NewProp_rightShoulder_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightArm = { "rightArm", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URokokoBodyMapData, rightArm), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_rightArm_MetaData), NewProp_rightArm_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightForearm = { "rightForearm", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URokokoBodyMapData, rightForearm), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_rightForearm_MetaData), NewProp_rightForearm_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightHand = { "rightHand", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URokokoBodyMapData, rightHand), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_rightHand_MetaData), NewProp_rightHand_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftUpleg = { "leftUpleg", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URokokoBodyMapData, leftUpleg), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_leftUpleg_MetaData), NewProp_leftUpleg_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftLeg = { "leftLeg", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URokokoBodyMapData, leftLeg), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_leftLeg_MetaData), NewProp_leftLeg_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftFoot = { "leftFoot", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URokokoBodyMapData, leftFoot), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_leftFoot_MetaData), NewProp_leftFoot_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftToe = { "leftToe", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URokokoBodyMapData, leftToe), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_leftToe_MetaData), NewProp_leftToe_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightUpleg = { "rightUpleg", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URokokoBodyMapData, rightUpleg), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_rightUpleg_MetaData), NewProp_rightUpleg_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightLeg = { "rightLeg", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URokokoBodyMapData, rightLeg), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_rightLeg_MetaData), NewProp_rightLeg_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightFoot = { "rightFoot", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URokokoBodyMapData, rightFoot), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_rightFoot_MetaData), NewProp_rightFoot_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightToe = { "rightToe", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URokokoBodyMapData, rightToe), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_rightToe_MetaData), NewProp_rightToe_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftThumbProximal = { "leftThumbProximal", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URokokoBodyMapData, leftThumbProximal), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_leftThumbProximal_MetaData), NewProp_leftThumbProximal_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftThumbMedial = { "leftThumbMedial", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URokokoBodyMapData, leftThumbMedial), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_leftThumbMedial_MetaData), NewProp_leftThumbMedial_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftThumbDistal = { "leftThumbDistal", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URokokoBodyMapData, leftThumbDistal), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_leftThumbDistal_MetaData), NewProp_leftThumbDistal_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftThumbTip = { "leftThumbTip", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URokokoBodyMapData, leftThumbTip), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_leftThumbTip_MetaData), NewProp_leftThumbTip_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftIndexProximal = { "leftIndexProximal", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URokokoBodyMapData, leftIndexProximal), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_leftIndexProximal_MetaData), NewProp_leftIndexProximal_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftIndexMedial = { "leftIndexMedial", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URokokoBodyMapData, leftIndexMedial), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_leftIndexMedial_MetaData), NewProp_leftIndexMedial_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftIndexDistal = { "leftIndexDistal", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URokokoBodyMapData, leftIndexDistal), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_leftIndexDistal_MetaData), NewProp_leftIndexDistal_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftIndexTip = { "leftIndexTip", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URokokoBodyMapData, leftIndexTip), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_leftIndexTip_MetaData), NewProp_leftIndexTip_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftMiddleProximal = { "leftMiddleProximal", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URokokoBodyMapData, leftMiddleProximal), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_leftMiddleProximal_MetaData), NewProp_leftMiddleProximal_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftMiddleMedial = { "leftMiddleMedial", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URokokoBodyMapData, leftMiddleMedial), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_leftMiddleMedial_MetaData), NewProp_leftMiddleMedial_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftMiddleDistal = { "leftMiddleDistal", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URokokoBodyMapData, leftMiddleDistal), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_leftMiddleDistal_MetaData), NewProp_leftMiddleDistal_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftMiddleTip = { "leftMiddleTip", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URokokoBodyMapData, leftMiddleTip), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_leftMiddleTip_MetaData), NewProp_leftMiddleTip_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftRingProximal = { "leftRingProximal", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URokokoBodyMapData, leftRingProximal), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_leftRingProximal_MetaData), NewProp_leftRingProximal_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftRingMedial = { "leftRingMedial", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URokokoBodyMapData, leftRingMedial), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_leftRingMedial_MetaData), NewProp_leftRingMedial_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftRingDistal = { "leftRingDistal", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URokokoBodyMapData, leftRingDistal), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_leftRingDistal_MetaData), NewProp_leftRingDistal_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftRingTip = { "leftRingTip", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URokokoBodyMapData, leftRingTip), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_leftRingTip_MetaData), NewProp_leftRingTip_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftLittleProximal = { "leftLittleProximal", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URokokoBodyMapData, leftLittleProximal), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_leftLittleProximal_MetaData), NewProp_leftLittleProximal_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftLittleMedial = { "leftLittleMedial", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URokokoBodyMapData, leftLittleMedial), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_leftLittleMedial_MetaData), NewProp_leftLittleMedial_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftLittleDistal = { "leftLittleDistal", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URokokoBodyMapData, leftLittleDistal), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_leftLittleDistal_MetaData), NewProp_leftLittleDistal_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftLittleTip = { "leftLittleTip", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URokokoBodyMapData, leftLittleTip), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_leftLittleTip_MetaData), NewProp_leftLittleTip_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightThumbProximal = { "rightThumbProximal", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URokokoBodyMapData, rightThumbProximal), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_rightThumbProximal_MetaData), NewProp_rightThumbProximal_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightThumbMedial = { "rightThumbMedial", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URokokoBodyMapData, rightThumbMedial), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_rightThumbMedial_MetaData), NewProp_rightThumbMedial_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightThumbDistal = { "rightThumbDistal", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URokokoBodyMapData, rightThumbDistal), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_rightThumbDistal_MetaData), NewProp_rightThumbDistal_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightThumbTip = { "rightThumbTip", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URokokoBodyMapData, rightThumbTip), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_rightThumbTip_MetaData), NewProp_rightThumbTip_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightIndexProximal = { "rightIndexProximal", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URokokoBodyMapData, rightIndexProximal), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_rightIndexProximal_MetaData), NewProp_rightIndexProximal_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightIndexMedial = { "rightIndexMedial", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URokokoBodyMapData, rightIndexMedial), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_rightIndexMedial_MetaData), NewProp_rightIndexMedial_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightIndexDistal = { "rightIndexDistal", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URokokoBodyMapData, rightIndexDistal), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_rightIndexDistal_MetaData), NewProp_rightIndexDistal_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightIndexTip = { "rightIndexTip", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URokokoBodyMapData, rightIndexTip), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_rightIndexTip_MetaData), NewProp_rightIndexTip_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightMiddleProximal = { "rightMiddleProximal", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URokokoBodyMapData, rightMiddleProximal), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_rightMiddleProximal_MetaData), NewProp_rightMiddleProximal_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightMiddleMedial = { "rightMiddleMedial", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URokokoBodyMapData, rightMiddleMedial), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_rightMiddleMedial_MetaData), NewProp_rightMiddleMedial_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightMiddleDistal = { "rightMiddleDistal", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URokokoBodyMapData, rightMiddleDistal), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_rightMiddleDistal_MetaData), NewProp_rightMiddleDistal_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightMiddleTip = { "rightMiddleTip", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URokokoBodyMapData, rightMiddleTip), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_rightMiddleTip_MetaData), NewProp_rightMiddleTip_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightRingProximal = { "rightRingProximal", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URokokoBodyMapData, rightRingProximal), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_rightRingProximal_MetaData), NewProp_rightRingProximal_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightRingMedial = { "rightRingMedial", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URokokoBodyMapData, rightRingMedial), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_rightRingMedial_MetaData), NewProp_rightRingMedial_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightRingDistal = { "rightRingDistal", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URokokoBodyMapData, rightRingDistal), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_rightRingDistal_MetaData), NewProp_rightRingDistal_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightRingTip = { "rightRingTip", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URokokoBodyMapData, rightRingTip), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_rightRingTip_MetaData), NewProp_rightRingTip_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightLittleProximal = { "rightLittleProximal", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URokokoBodyMapData, rightLittleProximal), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_rightLittleProximal_MetaData), NewProp_rightLittleProximal_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightLittleMedial = { "rightLittleMedial", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URokokoBodyMapData, rightLittleMedial), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_rightLittleMedial_MetaData), NewProp_rightLittleMedial_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightLittleDistal = { "rightLittleDistal", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URokokoBodyMapData, rightLittleDistal), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_rightLittleDistal_MetaData), NewProp_rightLittleDistal_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightLittleTip = { "rightLittleTip", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URokokoBodyMapData, rightLittleTip), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_rightLittleTip_MetaData), NewProp_rightLittleTip_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URokokoBodyMapData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_NameMapping_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_NameMapping_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_NameMapping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_hip,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_stomach,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_chest,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_neck,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_head,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftShoulder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftArm,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftForearm,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftHand,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightShoulder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightArm,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightForearm,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightHand,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftUpleg,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftLeg,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftFoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftToe,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightUpleg,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightLeg,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightFoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightToe,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftThumbProximal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftThumbMedial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftThumbDistal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftThumbTip,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftIndexProximal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftIndexMedial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftIndexDistal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftIndexTip,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftMiddleProximal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftMiddleMedial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftMiddleDistal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftMiddleTip,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftRingProximal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftRingMedial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftRingDistal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftRingTip,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftLittleProximal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftLittleMedial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftLittleDistal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftLittleTip,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightThumbProximal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightThumbMedial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightThumbDistal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightThumbTip,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightIndexProximal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightIndexMedial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightIndexDistal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightIndexTip,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightMiddleProximal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightMiddleMedial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightMiddleDistal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightMiddleTip,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightRingProximal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightRingMedial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightRingDistal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightRingTip,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightLittleProximal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightLittleMedial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightLittleDistal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightLittleTip,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URokokoBodyMapData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URokokoBodyMapData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ULiveLinkRemapAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_Smartsuit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URokokoBodyMapData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URokokoBodyMapData_Statics::ClassParams = {
	&URokokoBodyMapData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_URokokoBodyMapData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_URokokoBodyMapData_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URokokoBodyMapData_Statics::Class_MetaDataParams), Z_Construct_UClass_URokokoBodyMapData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URokokoBodyMapData()
{
	if (!Z_Registration_Info_UClass_URokokoBodyMapData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URokokoBodyMapData.OuterSingleton, Z_Construct_UClass_URokokoBodyMapData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URokokoBodyMapData.OuterSingleton;
}
template<> SMARTSUIT_API UClass* StaticClass<URokokoBodyMapData>()
{
	return URokokoBodyMapData::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(URokokoBodyMapData);
URokokoBodyMapData::~URokokoBodyMapData() {}
// End Class URokokoBodyMapData

// Begin Registration
struct Z_CompiledInDeferFile_FID_olavu_Documents_Unreal_Projects_AIDrummer_Plugins_Smartsuit_Source_Smartsuit_Public_RokokoBodyRemapAsset_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URokokoBodyMapData, URokokoBodyMapData::StaticClass, TEXT("URokokoBodyMapData"), &Z_Registration_Info_UClass_URokokoBodyMapData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URokokoBodyMapData), 4154716012U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_olavu_Documents_Unreal_Projects_AIDrummer_Plugins_Smartsuit_Source_Smartsuit_Public_RokokoBodyRemapAsset_h_2220397985(TEXT("/Script/Smartsuit"),
	Z_CompiledInDeferFile_FID_olavu_Documents_Unreal_Projects_AIDrummer_Plugins_Smartsuit_Source_Smartsuit_Public_RokokoBodyRemapAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_olavu_Documents_Unreal_Projects_AIDrummer_Plugins_Smartsuit_Source_Smartsuit_Public_RokokoBodyRemapAsset_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
