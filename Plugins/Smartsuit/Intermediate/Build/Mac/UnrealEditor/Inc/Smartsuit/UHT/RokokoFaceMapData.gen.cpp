// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Smartsuit/Public/RokokoFaceMapData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRokokoFaceMapData() {}

// Begin Cross Module References
LIVELINKANIMATIONCORE_API UClass* Z_Construct_UClass_ULiveLinkRemapAsset();
SMARTSUIT_API UClass* Z_Construct_UClass_URokokoFaceMapData();
SMARTSUIT_API UClass* Z_Construct_UClass_URokokoFaceMapData_NoRegister();
UPackage* Z_Construct_UPackage__Script_Smartsuit();
// End Cross Module References

// Begin Class URokokoFaceMapData Function InitializeTMap
struct Z_Construct_UFunction_URokokoFaceMapData_InitializeTMap_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/RokokoFaceMapData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URokokoFaceMapData_InitializeTMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URokokoFaceMapData, nullptr, "InitializeTMap", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URokokoFaceMapData_InitializeTMap_Statics::Function_MetaDataParams), Z_Construct_UFunction_URokokoFaceMapData_InitializeTMap_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_URokokoFaceMapData_InitializeTMap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URokokoFaceMapData_InitializeTMap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URokokoFaceMapData::execInitializeTMap)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeTMap();
	P_NATIVE_END;
}
// End Class URokokoFaceMapData Function InitializeTMap

// Begin Class URokokoFaceMapData
void URokokoFaceMapData::StaticRegisterNativesURokokoFaceMapData()
{
	UClass* Class = URokokoFaceMapData::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "InitializeTMap", &URokokoFaceMapData::execInitializeTMap },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URokokoFaceMapData);
UClass* Z_Construct_UClass_URokokoFaceMapData_NoRegister()
{
	return URokokoFaceMapData::StaticClass();
}
struct Z_Construct_UClass_URokokoFaceMapData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "RokokoFaceMapData.h" },
		{ "ModuleRelativePath", "Public/RokokoFaceMapData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NameMapping_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/RokokoFaceMapData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_browDownLeft_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/RokokoFaceMapData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_browDownRight_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/RokokoFaceMapData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_browInnerUp_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/RokokoFaceMapData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_browOuterUpLeft_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/RokokoFaceMapData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_browOuterUpRight_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/RokokoFaceMapData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_cheekPuff_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/RokokoFaceMapData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_cheekSquintLeft_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/RokokoFaceMapData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_cheekSquintRight_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/RokokoFaceMapData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_eyeBlinkLeft_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/RokokoFaceMapData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_eyeBlinkRight_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/RokokoFaceMapData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_eyeLookDownLeft_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/RokokoFaceMapData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_eyeLookDownRight_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/RokokoFaceMapData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_eyeLookInLeft_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/RokokoFaceMapData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_eyeLookInRight_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/RokokoFaceMapData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_eyeLookOutLeft_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/RokokoFaceMapData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_eyeLookOutRight_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/RokokoFaceMapData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_eyeLookUpLeft_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/RokokoFaceMapData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_eyeLookUpRight_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/RokokoFaceMapData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_eyeSquintLeft_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/RokokoFaceMapData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_eyeSquintRight_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/RokokoFaceMapData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_eyeWideLeft_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/RokokoFaceMapData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_eyeWideRight_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/RokokoFaceMapData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_jawOpen_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/RokokoFaceMapData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_jawForward_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/RokokoFaceMapData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_jawLeft_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/RokokoFaceMapData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_jawRight_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/RokokoFaceMapData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_mouthClose_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/RokokoFaceMapData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_mouthDimpleLeft_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/RokokoFaceMapData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_mouthDimpleRight_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/RokokoFaceMapData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_mouthFrownLeft_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/RokokoFaceMapData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_mouthFrownRight_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/RokokoFaceMapData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_mouthFunnel_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/RokokoFaceMapData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_mouthLeft_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/RokokoFaceMapData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_mouthLowerDownLeft_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/RokokoFaceMapData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_mouthLowerDownRight_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/RokokoFaceMapData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_mouthPressLeft_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/RokokoFaceMapData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_mouthPressRight_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/RokokoFaceMapData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_mouthPucker_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/RokokoFaceMapData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_mouthRight_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/RokokoFaceMapData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_mouthRollLower_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/RokokoFaceMapData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_mouthRollUpper_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/RokokoFaceMapData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_mouthShrugLower_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/RokokoFaceMapData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_mouthShrugUpper_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/RokokoFaceMapData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_mouthSmileLeft_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/RokokoFaceMapData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_mouthSmileRight_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/RokokoFaceMapData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_mouthStretchLeft_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/RokokoFaceMapData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_mouthStretchRight_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/RokokoFaceMapData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_mouthUpperUpLeft_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/RokokoFaceMapData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_mouthUpperUpRight_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/RokokoFaceMapData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_noseSneerLeft_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/RokokoFaceMapData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_noseSneerRight_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/RokokoFaceMapData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_tongueOut_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/RokokoFaceMapData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_NameMapping_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_NameMapping_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_NameMapping;
	static const UECodeGen_Private::FNamePropertyParams NewProp_browDownLeft;
	static const UECodeGen_Private::FNamePropertyParams NewProp_browDownRight;
	static const UECodeGen_Private::FNamePropertyParams NewProp_browInnerUp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_browOuterUpLeft;
	static const UECodeGen_Private::FNamePropertyParams NewProp_browOuterUpRight;
	static const UECodeGen_Private::FNamePropertyParams NewProp_cheekPuff;
	static const UECodeGen_Private::FNamePropertyParams NewProp_cheekSquintLeft;
	static const UECodeGen_Private::FNamePropertyParams NewProp_cheekSquintRight;
	static const UECodeGen_Private::FNamePropertyParams NewProp_eyeBlinkLeft;
	static const UECodeGen_Private::FNamePropertyParams NewProp_eyeBlinkRight;
	static const UECodeGen_Private::FNamePropertyParams NewProp_eyeLookDownLeft;
	static const UECodeGen_Private::FNamePropertyParams NewProp_eyeLookDownRight;
	static const UECodeGen_Private::FNamePropertyParams NewProp_eyeLookInLeft;
	static const UECodeGen_Private::FNamePropertyParams NewProp_eyeLookInRight;
	static const UECodeGen_Private::FNamePropertyParams NewProp_eyeLookOutLeft;
	static const UECodeGen_Private::FNamePropertyParams NewProp_eyeLookOutRight;
	static const UECodeGen_Private::FNamePropertyParams NewProp_eyeLookUpLeft;
	static const UECodeGen_Private::FNamePropertyParams NewProp_eyeLookUpRight;
	static const UECodeGen_Private::FNamePropertyParams NewProp_eyeSquintLeft;
	static const UECodeGen_Private::FNamePropertyParams NewProp_eyeSquintRight;
	static const UECodeGen_Private::FNamePropertyParams NewProp_eyeWideLeft;
	static const UECodeGen_Private::FNamePropertyParams NewProp_eyeWideRight;
	static const UECodeGen_Private::FNamePropertyParams NewProp_jawOpen;
	static const UECodeGen_Private::FNamePropertyParams NewProp_jawForward;
	static const UECodeGen_Private::FNamePropertyParams NewProp_jawLeft;
	static const UECodeGen_Private::FNamePropertyParams NewProp_jawRight;
	static const UECodeGen_Private::FNamePropertyParams NewProp_mouthClose;
	static const UECodeGen_Private::FNamePropertyParams NewProp_mouthDimpleLeft;
	static const UECodeGen_Private::FNamePropertyParams NewProp_mouthDimpleRight;
	static const UECodeGen_Private::FNamePropertyParams NewProp_mouthFrownLeft;
	static const UECodeGen_Private::FNamePropertyParams NewProp_mouthFrownRight;
	static const UECodeGen_Private::FNamePropertyParams NewProp_mouthFunnel;
	static const UECodeGen_Private::FNamePropertyParams NewProp_mouthLeft;
	static const UECodeGen_Private::FNamePropertyParams NewProp_mouthLowerDownLeft;
	static const UECodeGen_Private::FNamePropertyParams NewProp_mouthLowerDownRight;
	static const UECodeGen_Private::FNamePropertyParams NewProp_mouthPressLeft;
	static const UECodeGen_Private::FNamePropertyParams NewProp_mouthPressRight;
	static const UECodeGen_Private::FNamePropertyParams NewProp_mouthPucker;
	static const UECodeGen_Private::FNamePropertyParams NewProp_mouthRight;
	static const UECodeGen_Private::FNamePropertyParams NewProp_mouthRollLower;
	static const UECodeGen_Private::FNamePropertyParams NewProp_mouthRollUpper;
	static const UECodeGen_Private::FNamePropertyParams NewProp_mouthShrugLower;
	static const UECodeGen_Private::FNamePropertyParams NewProp_mouthShrugUpper;
	static const UECodeGen_Private::FNamePropertyParams NewProp_mouthSmileLeft;
	static const UECodeGen_Private::FNamePropertyParams NewProp_mouthSmileRight;
	static const UECodeGen_Private::FNamePropertyParams NewProp_mouthStretchLeft;
	static const UECodeGen_Private::FNamePropertyParams NewProp_mouthStretchRight;
	static const UECodeGen_Private::FNamePropertyParams NewProp_mouthUpperUpLeft;
	static const UECodeGen_Private::FNamePropertyParams NewProp_mouthUpperUpRight;
	static const UECodeGen_Private::FNamePropertyParams NewProp_noseSneerLeft;
	static const UECodeGen_Private::FNamePropertyParams NewProp_noseSneerRight;
	static const UECodeGen_Private::FNamePropertyParams NewProp_tongueOut;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URokokoFaceMapData_InitializeTMap, "InitializeTMap" }, // 1053695991
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URokokoFaceMapData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_NameMapping_ValueProp = { "NameMapping", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_NameMapping_Key_KeyProp = { "NameMapping_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_NameMapping = { "NameMapping", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URokokoFaceMapData, NameMapping), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NameMapping_MetaData), NewProp_NameMapping_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_browDownLeft = { "browDownLeft", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URokokoFaceMapData, browDownLeft), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_browDownLeft_MetaData), NewProp_browDownLeft_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_browDownRight = { "browDownRight", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URokokoFaceMapData, browDownRight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_browDownRight_MetaData), NewProp_browDownRight_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_browInnerUp = { "browInnerUp", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URokokoFaceMapData, browInnerUp), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_browInnerUp_MetaData), NewProp_browInnerUp_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_browOuterUpLeft = { "browOuterUpLeft", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URokokoFaceMapData, browOuterUpLeft), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_browOuterUpLeft_MetaData), NewProp_browOuterUpLeft_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_browOuterUpRight = { "browOuterUpRight", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URokokoFaceMapData, browOuterUpRight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_browOuterUpRight_MetaData), NewProp_browOuterUpRight_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_cheekPuff = { "cheekPuff", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URokokoFaceMapData, cheekPuff), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_cheekPuff_MetaData), NewProp_cheekPuff_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_cheekSquintLeft = { "cheekSquintLeft", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URokokoFaceMapData, cheekSquintLeft), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_cheekSquintLeft_MetaData), NewProp_cheekSquintLeft_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_cheekSquintRight = { "cheekSquintRight", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URokokoFaceMapData, cheekSquintRight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_cheekSquintRight_MetaData), NewProp_cheekSquintRight_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeBlinkLeft = { "eyeBlinkLeft", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URokokoFaceMapData, eyeBlinkLeft), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_eyeBlinkLeft_MetaData), NewProp_eyeBlinkLeft_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeBlinkRight = { "eyeBlinkRight", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URokokoFaceMapData, eyeBlinkRight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_eyeBlinkRight_MetaData), NewProp_eyeBlinkRight_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeLookDownLeft = { "eyeLookDownLeft", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URokokoFaceMapData, eyeLookDownLeft), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_eyeLookDownLeft_MetaData), NewProp_eyeLookDownLeft_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeLookDownRight = { "eyeLookDownRight", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URokokoFaceMapData, eyeLookDownRight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_eyeLookDownRight_MetaData), NewProp_eyeLookDownRight_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeLookInLeft = { "eyeLookInLeft", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URokokoFaceMapData, eyeLookInLeft), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_eyeLookInLeft_MetaData), NewProp_eyeLookInLeft_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeLookInRight = { "eyeLookInRight", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URokokoFaceMapData, eyeLookInRight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_eyeLookInRight_MetaData), NewProp_eyeLookInRight_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeLookOutLeft = { "eyeLookOutLeft", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URokokoFaceMapData, eyeLookOutLeft), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_eyeLookOutLeft_MetaData), NewProp_eyeLookOutLeft_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeLookOutRight = { "eyeLookOutRight", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URokokoFaceMapData, eyeLookOutRight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_eyeLookOutRight_MetaData), NewProp_eyeLookOutRight_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeLookUpLeft = { "eyeLookUpLeft", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URokokoFaceMapData, eyeLookUpLeft), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_eyeLookUpLeft_MetaData), NewProp_eyeLookUpLeft_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeLookUpRight = { "eyeLookUpRight", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URokokoFaceMapData, eyeLookUpRight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_eyeLookUpRight_MetaData), NewProp_eyeLookUpRight_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeSquintLeft = { "eyeSquintLeft", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URokokoFaceMapData, eyeSquintLeft), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_eyeSquintLeft_MetaData), NewProp_eyeSquintLeft_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeSquintRight = { "eyeSquintRight", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URokokoFaceMapData, eyeSquintRight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_eyeSquintRight_MetaData), NewProp_eyeSquintRight_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeWideLeft = { "eyeWideLeft", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URokokoFaceMapData, eyeWideLeft), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_eyeWideLeft_MetaData), NewProp_eyeWideLeft_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeWideRight = { "eyeWideRight", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URokokoFaceMapData, eyeWideRight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_eyeWideRight_MetaData), NewProp_eyeWideRight_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_jawOpen = { "jawOpen", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URokokoFaceMapData, jawOpen), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_jawOpen_MetaData), NewProp_jawOpen_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_jawForward = { "jawForward", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URokokoFaceMapData, jawForward), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_jawForward_MetaData), NewProp_jawForward_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_jawLeft = { "jawLeft", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URokokoFaceMapData, jawLeft), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_jawLeft_MetaData), NewProp_jawLeft_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_jawRight = { "jawRight", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URokokoFaceMapData, jawRight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_jawRight_MetaData), NewProp_jawRight_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthClose = { "mouthClose", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URokokoFaceMapData, mouthClose), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_mouthClose_MetaData), NewProp_mouthClose_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthDimpleLeft = { "mouthDimpleLeft", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URokokoFaceMapData, mouthDimpleLeft), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_mouthDimpleLeft_MetaData), NewProp_mouthDimpleLeft_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthDimpleRight = { "mouthDimpleRight", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URokokoFaceMapData, mouthDimpleRight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_mouthDimpleRight_MetaData), NewProp_mouthDimpleRight_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthFrownLeft = { "mouthFrownLeft", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URokokoFaceMapData, mouthFrownLeft), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_mouthFrownLeft_MetaData), NewProp_mouthFrownLeft_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthFrownRight = { "mouthFrownRight", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URokokoFaceMapData, mouthFrownRight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_mouthFrownRight_MetaData), NewProp_mouthFrownRight_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthFunnel = { "mouthFunnel", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URokokoFaceMapData, mouthFunnel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_mouthFunnel_MetaData), NewProp_mouthFunnel_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthLeft = { "mouthLeft", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URokokoFaceMapData, mouthLeft), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_mouthLeft_MetaData), NewProp_mouthLeft_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthLowerDownLeft = { "mouthLowerDownLeft", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URokokoFaceMapData, mouthLowerDownLeft), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_mouthLowerDownLeft_MetaData), NewProp_mouthLowerDownLeft_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthLowerDownRight = { "mouthLowerDownRight", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URokokoFaceMapData, mouthLowerDownRight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_mouthLowerDownRight_MetaData), NewProp_mouthLowerDownRight_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthPressLeft = { "mouthPressLeft", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URokokoFaceMapData, mouthPressLeft), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_mouthPressLeft_MetaData), NewProp_mouthPressLeft_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthPressRight = { "mouthPressRight", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URokokoFaceMapData, mouthPressRight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_mouthPressRight_MetaData), NewProp_mouthPressRight_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthPucker = { "mouthPucker", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URokokoFaceMapData, mouthPucker), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_mouthPucker_MetaData), NewProp_mouthPucker_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthRight = { "mouthRight", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URokokoFaceMapData, mouthRight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_mouthRight_MetaData), NewProp_mouthRight_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthRollLower = { "mouthRollLower", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URokokoFaceMapData, mouthRollLower), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_mouthRollLower_MetaData), NewProp_mouthRollLower_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthRollUpper = { "mouthRollUpper", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URokokoFaceMapData, mouthRollUpper), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_mouthRollUpper_MetaData), NewProp_mouthRollUpper_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthShrugLower = { "mouthShrugLower", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URokokoFaceMapData, mouthShrugLower), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_mouthShrugLower_MetaData), NewProp_mouthShrugLower_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthShrugUpper = { "mouthShrugUpper", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URokokoFaceMapData, mouthShrugUpper), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_mouthShrugUpper_MetaData), NewProp_mouthShrugUpper_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthSmileLeft = { "mouthSmileLeft", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URokokoFaceMapData, mouthSmileLeft), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_mouthSmileLeft_MetaData), NewProp_mouthSmileLeft_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthSmileRight = { "mouthSmileRight", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URokokoFaceMapData, mouthSmileRight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_mouthSmileRight_MetaData), NewProp_mouthSmileRight_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthStretchLeft = { "mouthStretchLeft", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URokokoFaceMapData, mouthStretchLeft), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_mouthStretchLeft_MetaData), NewProp_mouthStretchLeft_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthStretchRight = { "mouthStretchRight", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URokokoFaceMapData, mouthStretchRight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_mouthStretchRight_MetaData), NewProp_mouthStretchRight_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthUpperUpLeft = { "mouthUpperUpLeft", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URokokoFaceMapData, mouthUpperUpLeft), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_mouthUpperUpLeft_MetaData), NewProp_mouthUpperUpLeft_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthUpperUpRight = { "mouthUpperUpRight", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URokokoFaceMapData, mouthUpperUpRight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_mouthUpperUpRight_MetaData), NewProp_mouthUpperUpRight_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_noseSneerLeft = { "noseSneerLeft", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URokokoFaceMapData, noseSneerLeft), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_noseSneerLeft_MetaData), NewProp_noseSneerLeft_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_noseSneerRight = { "noseSneerRight", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URokokoFaceMapData, noseSneerRight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_noseSneerRight_MetaData), NewProp_noseSneerRight_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_tongueOut = { "tongueOut", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URokokoFaceMapData, tongueOut), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_tongueOut_MetaData), NewProp_tongueOut_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URokokoFaceMapData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_NameMapping_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_NameMapping_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_NameMapping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_browDownLeft,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_browDownRight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_browInnerUp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_browOuterUpLeft,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_browOuterUpRight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_cheekPuff,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_cheekSquintLeft,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_cheekSquintRight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeBlinkLeft,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeBlinkRight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeLookDownLeft,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeLookDownRight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeLookInLeft,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeLookInRight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeLookOutLeft,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeLookOutRight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeLookUpLeft,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeLookUpRight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeSquintLeft,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeSquintRight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeWideLeft,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeWideRight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_jawOpen,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_jawForward,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_jawLeft,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_jawRight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthClose,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthDimpleLeft,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthDimpleRight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthFrownLeft,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthFrownRight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthFunnel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthLeft,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthLowerDownLeft,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthLowerDownRight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthPressLeft,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthPressRight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthPucker,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthRight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthRollLower,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthRollUpper,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthShrugLower,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthShrugUpper,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthSmileLeft,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthSmileRight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthStretchLeft,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthStretchRight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthUpperUpLeft,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthUpperUpRight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_noseSneerLeft,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_noseSneerRight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_tongueOut,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URokokoFaceMapData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URokokoFaceMapData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ULiveLinkRemapAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_Smartsuit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URokokoFaceMapData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URokokoFaceMapData_Statics::ClassParams = {
	&URokokoFaceMapData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_URokokoFaceMapData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_URokokoFaceMapData_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URokokoFaceMapData_Statics::Class_MetaDataParams), Z_Construct_UClass_URokokoFaceMapData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URokokoFaceMapData()
{
	if (!Z_Registration_Info_UClass_URokokoFaceMapData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URokokoFaceMapData.OuterSingleton, Z_Construct_UClass_URokokoFaceMapData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URokokoFaceMapData.OuterSingleton;
}
template<> SMARTSUIT_API UClass* StaticClass<URokokoFaceMapData>()
{
	return URokokoFaceMapData::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(URokokoFaceMapData);
URokokoFaceMapData::~URokokoFaceMapData() {}
// End Class URokokoFaceMapData

// Begin Registration
struct Z_CompiledInDeferFile_FID_olavu_Documents_Unreal_Projects_rokoko_studio_live_unreal_engine_Plugins_Smartsuit_Source_Smartsuit_Public_RokokoFaceMapData_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URokokoFaceMapData, URokokoFaceMapData::StaticClass, TEXT("URokokoFaceMapData"), &Z_Registration_Info_UClass_URokokoFaceMapData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URokokoFaceMapData), 2279582210U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_olavu_Documents_Unreal_Projects_rokoko_studio_live_unreal_engine_Plugins_Smartsuit_Source_Smartsuit_Public_RokokoFaceMapData_h_3336061315(TEXT("/Script/Smartsuit"),
	Z_CompiledInDeferFile_FID_olavu_Documents_Unreal_Projects_rokoko_studio_live_unreal_engine_Plugins_Smartsuit_Source_Smartsuit_Public_RokokoFaceMapData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_olavu_Documents_Unreal_Projects_rokoko_studio_live_unreal_engine_Plugins_Smartsuit_Source_Smartsuit_Public_RokokoFaceMapData_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
