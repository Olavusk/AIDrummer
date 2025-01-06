// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Smartsuit/Public/SmartsuitBlueprintLibrary.h"
#include "Smartsuit/Public/RokokoSkeletonData.h"
#include "Smartsuit/Public/VirtualProductionFrame.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSmartsuitBlueprintLibrary() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
SMARTSUIT_API UClass* Z_Construct_UClass_ASmartsuitController_NoRegister();
SMARTSUIT_API UClass* Z_Construct_UClass_USmartsuitBlueprintLibrary();
SMARTSUIT_API UClass* Z_Construct_UClass_USmartsuitBlueprintLibrary_NoRegister();
SMARTSUIT_API UScriptStruct* Z_Construct_UScriptStruct_FFace();
SMARTSUIT_API UScriptStruct* Z_Construct_UScriptStruct_FProp();
SMARTSUIT_API UScriptStruct* Z_Construct_UScriptStruct_FSuitData();
SMARTSUIT_API UScriptStruct* Z_Construct_UScriptStruct_FTracker();
UPackage* Z_Construct_UPackage__Script_Smartsuit();
// End Cross Module References

// Begin Class USmartsuitBlueprintLibrary Function CreateVirtualProductionSource
struct Z_Construct_UFunction_USmartsuitBlueprintLibrary_CreateVirtualProductionSource_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rokoko" },
		{ "ModuleRelativePath", "Public/SmartsuitBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USmartsuitBlueprintLibrary_CreateVirtualProductionSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USmartsuitBlueprintLibrary, nullptr, "CreateVirtualProductionSource", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USmartsuitBlueprintLibrary_CreateVirtualProductionSource_Statics::Function_MetaDataParams), Z_Construct_UFunction_USmartsuitBlueprintLibrary_CreateVirtualProductionSource_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USmartsuitBlueprintLibrary_CreateVirtualProductionSource()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USmartsuitBlueprintLibrary_CreateVirtualProductionSource_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USmartsuitBlueprintLibrary::execCreateVirtualProductionSource)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	USmartsuitBlueprintLibrary::CreateVirtualProductionSource();
	P_NATIVE_END;
}
// End Class USmartsuitBlueprintLibrary Function CreateVirtualProductionSource

// Begin Class USmartsuitBlueprintLibrary Function FQuatToRotator
struct Z_Construct_UFunction_USmartsuitBlueprintLibrary_FQuatToRotator_Statics
{
	struct SmartsuitBlueprintLibrary_eventFQuatToRotator_Parms
	{
		FQuat rotation;
		FRotator ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rokoko" },
		{ "ModuleRelativePath", "Public/SmartsuitBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Converts Quaternions into rotators." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_rotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USmartsuitBlueprintLibrary_FQuatToRotator_Statics::NewProp_rotation = { "rotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SmartsuitBlueprintLibrary_eventFQuatToRotator_Parms, rotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USmartsuitBlueprintLibrary_FQuatToRotator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SmartsuitBlueprintLibrary_eventFQuatToRotator_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USmartsuitBlueprintLibrary_FQuatToRotator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmartsuitBlueprintLibrary_FQuatToRotator_Statics::NewProp_rotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmartsuitBlueprintLibrary_FQuatToRotator_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USmartsuitBlueprintLibrary_FQuatToRotator_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USmartsuitBlueprintLibrary_FQuatToRotator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USmartsuitBlueprintLibrary, nullptr, "FQuatToRotator", nullptr, nullptr, Z_Construct_UFunction_USmartsuitBlueprintLibrary_FQuatToRotator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USmartsuitBlueprintLibrary_FQuatToRotator_Statics::PropPointers), sizeof(Z_Construct_UFunction_USmartsuitBlueprintLibrary_FQuatToRotator_Statics::SmartsuitBlueprintLibrary_eventFQuatToRotator_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USmartsuitBlueprintLibrary_FQuatToRotator_Statics::Function_MetaDataParams), Z_Construct_UFunction_USmartsuitBlueprintLibrary_FQuatToRotator_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USmartsuitBlueprintLibrary_FQuatToRotator_Statics::SmartsuitBlueprintLibrary_eventFQuatToRotator_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USmartsuitBlueprintLibrary_FQuatToRotator()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USmartsuitBlueprintLibrary_FQuatToRotator_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USmartsuitBlueprintLibrary::execFQuatToRotator)
{
	P_GET_STRUCT(FQuat,Z_Param_rotation);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRotator*)Z_Param__Result=USmartsuitBlueprintLibrary::FQuatToRotator(Z_Param_rotation);
	P_NATIVE_END;
}
// End Class USmartsuitBlueprintLibrary Function FQuatToRotator

// Begin Class USmartsuitBlueprintLibrary Function GetAllFaces
struct Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetAllFaces_Statics
{
	struct SmartsuitBlueprintLibrary_eventGetAllFaces_Parms
	{
		TArray<FFace> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rokoko" },
		{ "ModuleRelativePath", "Public/SmartsuitBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetAllFaces_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FFace, METADATA_PARAMS(0, nullptr) }; // 1334212696
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetAllFaces_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SmartsuitBlueprintLibrary_eventGetAllFaces_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1334212696
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetAllFaces_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetAllFaces_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetAllFaces_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetAllFaces_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetAllFaces_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USmartsuitBlueprintLibrary, nullptr, "GetAllFaces", nullptr, nullptr, Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetAllFaces_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetAllFaces_Statics::PropPointers), sizeof(Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetAllFaces_Statics::SmartsuitBlueprintLibrary_eventGetAllFaces_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetAllFaces_Statics::Function_MetaDataParams), Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetAllFaces_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetAllFaces_Statics::SmartsuitBlueprintLibrary_eventGetAllFaces_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetAllFaces()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetAllFaces_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USmartsuitBlueprintLibrary::execGetAllFaces)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FFace>*)Z_Param__Result=USmartsuitBlueprintLibrary::GetAllFaces();
	P_NATIVE_END;
}
// End Class USmartsuitBlueprintLibrary Function GetAllFaces

// Begin Class USmartsuitBlueprintLibrary Function GetAllProps
struct Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetAllProps_Statics
{
	struct SmartsuitBlueprintLibrary_eventGetAllProps_Parms
	{
		TArray<FProp> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rokoko" },
		{ "ModuleRelativePath", "Public/SmartsuitBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Calls a function in VPStreamingNetwork to retrieve all props." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetAllProps_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FProp, METADATA_PARAMS(0, nullptr) }; // 2553890183
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetAllProps_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SmartsuitBlueprintLibrary_eventGetAllProps_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2553890183
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetAllProps_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetAllProps_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetAllProps_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetAllProps_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetAllProps_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USmartsuitBlueprintLibrary, nullptr, "GetAllProps", nullptr, nullptr, Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetAllProps_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetAllProps_Statics::PropPointers), sizeof(Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetAllProps_Statics::SmartsuitBlueprintLibrary_eventGetAllProps_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetAllProps_Statics::Function_MetaDataParams), Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetAllProps_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetAllProps_Statics::SmartsuitBlueprintLibrary_eventGetAllProps_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetAllProps()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetAllProps_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USmartsuitBlueprintLibrary::execGetAllProps)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FProp>*)Z_Param__Result=USmartsuitBlueprintLibrary::GetAllProps();
	P_NATIVE_END;
}
// End Class USmartsuitBlueprintLibrary Function GetAllProps

// Begin Class USmartsuitBlueprintLibrary Function GetAllSmartsuits
struct Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetAllSmartsuits_Statics
{
	struct SmartsuitBlueprintLibrary_eventGetAllSmartsuits_Parms
	{
		TArray<FSuitData> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rokoko" },
		{ "ModuleRelativePath", "Public/SmartsuitBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetAllSmartsuits_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSuitData, METADATA_PARAMS(0, nullptr) }; // 1152959455
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetAllSmartsuits_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SmartsuitBlueprintLibrary_eventGetAllSmartsuits_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1152959455
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetAllSmartsuits_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetAllSmartsuits_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetAllSmartsuits_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetAllSmartsuits_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetAllSmartsuits_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USmartsuitBlueprintLibrary, nullptr, "GetAllSmartsuits", nullptr, nullptr, Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetAllSmartsuits_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetAllSmartsuits_Statics::PropPointers), sizeof(Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetAllSmartsuits_Statics::SmartsuitBlueprintLibrary_eventGetAllSmartsuits_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetAllSmartsuits_Statics::Function_MetaDataParams), Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetAllSmartsuits_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetAllSmartsuits_Statics::SmartsuitBlueprintLibrary_eventGetAllSmartsuits_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetAllSmartsuits()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetAllSmartsuits_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USmartsuitBlueprintLibrary::execGetAllSmartsuits)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FSuitData>*)Z_Param__Result=USmartsuitBlueprintLibrary::GetAllSmartsuits();
	P_NATIVE_END;
}
// End Class USmartsuitBlueprintLibrary Function GetAllSmartsuits

// Begin Class USmartsuitBlueprintLibrary Function GetAvailableActorNames
struct Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetAvailableActorNames_Statics
{
	struct SmartsuitBlueprintLibrary_eventGetAvailableActorNames_Parms
	{
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Rokoko" },
		{ "ModuleRelativePath", "Public/SmartsuitBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns actor names in the current live link source" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetAvailableActorNames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetAvailableActorNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SmartsuitBlueprintLibrary_eventGetAvailableActorNames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetAvailableActorNames_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetAvailableActorNames_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetAvailableActorNames_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetAvailableActorNames_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetAvailableActorNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USmartsuitBlueprintLibrary, nullptr, "GetAvailableActorNames", nullptr, nullptr, Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetAvailableActorNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetAvailableActorNames_Statics::PropPointers), sizeof(Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetAvailableActorNames_Statics::SmartsuitBlueprintLibrary_eventGetAvailableActorNames_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetAvailableActorNames_Statics::Function_MetaDataParams), Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetAvailableActorNames_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetAvailableActorNames_Statics::SmartsuitBlueprintLibrary_eventGetAvailableActorNames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetAvailableActorNames()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetAvailableActorNames_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USmartsuitBlueprintLibrary::execGetAvailableActorNames)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=USmartsuitBlueprintLibrary::GetAvailableActorNames();
	P_NATIVE_END;
}
// End Class USmartsuitBlueprintLibrary Function GetAvailableActorNames

// Begin Class USmartsuitBlueprintLibrary Function GetFaceByFaceID
struct Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetFaceByFaceID_Statics
{
	struct SmartsuitBlueprintLibrary_eventGetFaceByFaceID_Parms
	{
		FString faceName;
		FFace ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rokoko" },
		{ "ModuleRelativePath", "Public/SmartsuitBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_faceName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetFaceByFaceID_Statics::NewProp_faceName = { "faceName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SmartsuitBlueprintLibrary_eventGetFaceByFaceID_Parms, faceName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetFaceByFaceID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SmartsuitBlueprintLibrary_eventGetFaceByFaceID_Parms, ReturnValue), Z_Construct_UScriptStruct_FFace, METADATA_PARAMS(0, nullptr) }; // 1334212696
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetFaceByFaceID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetFaceByFaceID_Statics::NewProp_faceName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetFaceByFaceID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetFaceByFaceID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetFaceByFaceID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USmartsuitBlueprintLibrary, nullptr, "GetFaceByFaceID", nullptr, nullptr, Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetFaceByFaceID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetFaceByFaceID_Statics::PropPointers), sizeof(Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetFaceByFaceID_Statics::SmartsuitBlueprintLibrary_eventGetFaceByFaceID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetFaceByFaceID_Statics::Function_MetaDataParams), Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetFaceByFaceID_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetFaceByFaceID_Statics::SmartsuitBlueprintLibrary_eventGetFaceByFaceID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetFaceByFaceID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetFaceByFaceID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USmartsuitBlueprintLibrary::execGetFaceByFaceID)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_faceName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FFace*)Z_Param__Result=USmartsuitBlueprintLibrary::GetFaceByFaceID(Z_Param_faceName);
	P_NATIVE_END;
}
// End Class USmartsuitBlueprintLibrary Function GetFaceByFaceID

// Begin Class USmartsuitBlueprintLibrary Function GetFaceByProfileName
struct Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetFaceByProfileName_Statics
{
	struct SmartsuitBlueprintLibrary_eventGetFaceByProfileName_Parms
	{
		FString faceName;
		bool found;
		FFace ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rokoko" },
		{ "ModuleRelativePath", "Public/SmartsuitBlueprintLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_faceName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_faceName;
	static void NewProp_found_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_found;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetFaceByProfileName_Statics::NewProp_faceName = { "faceName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SmartsuitBlueprintLibrary_eventGetFaceByProfileName_Parms, faceName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_faceName_MetaData), NewProp_faceName_MetaData) };
void Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetFaceByProfileName_Statics::NewProp_found_SetBit(void* Obj)
{
	((SmartsuitBlueprintLibrary_eventGetFaceByProfileName_Parms*)Obj)->found = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetFaceByProfileName_Statics::NewProp_found = { "found", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SmartsuitBlueprintLibrary_eventGetFaceByProfileName_Parms), &Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetFaceByProfileName_Statics::NewProp_found_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetFaceByProfileName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SmartsuitBlueprintLibrary_eventGetFaceByProfileName_Parms, ReturnValue), Z_Construct_UScriptStruct_FFace, METADATA_PARAMS(0, nullptr) }; // 1334212696
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetFaceByProfileName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetFaceByProfileName_Statics::NewProp_faceName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetFaceByProfileName_Statics::NewProp_found,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetFaceByProfileName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetFaceByProfileName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetFaceByProfileName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USmartsuitBlueprintLibrary, nullptr, "GetFaceByProfileName", nullptr, nullptr, Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetFaceByProfileName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetFaceByProfileName_Statics::PropPointers), sizeof(Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetFaceByProfileName_Statics::SmartsuitBlueprintLibrary_eventGetFaceByProfileName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetFaceByProfileName_Statics::Function_MetaDataParams), Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetFaceByProfileName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetFaceByProfileName_Statics::SmartsuitBlueprintLibrary_eventGetFaceByProfileName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetFaceByProfileName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetFaceByProfileName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USmartsuitBlueprintLibrary::execGetFaceByProfileName)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_faceName);
	P_GET_UBOOL_REF(Z_Param_Out_found);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FFace*)Z_Param__Result=USmartsuitBlueprintLibrary::GetFaceByProfileName(Z_Param_faceName,Z_Param_Out_found);
	P_NATIVE_END;
}
// End Class USmartsuitBlueprintLibrary Function GetFaceByProfileName

// Begin Class USmartsuitBlueprintLibrary Function GetFacesNotAssociatedWithActor
struct Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetFacesNotAssociatedWithActor_Statics
{
	struct SmartsuitBlueprintLibrary_eventGetFacesNotAssociatedWithActor_Parms
	{
		TArray<FFace> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rokoko" },
		{ "ModuleRelativePath", "Public/SmartsuitBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetFacesNotAssociatedWithActor_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FFace, METADATA_PARAMS(0, nullptr) }; // 1334212696
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetFacesNotAssociatedWithActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SmartsuitBlueprintLibrary_eventGetFacesNotAssociatedWithActor_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1334212696
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetFacesNotAssociatedWithActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetFacesNotAssociatedWithActor_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetFacesNotAssociatedWithActor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetFacesNotAssociatedWithActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetFacesNotAssociatedWithActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USmartsuitBlueprintLibrary, nullptr, "GetFacesNotAssociatedWithActor", nullptr, nullptr, Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetFacesNotAssociatedWithActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetFacesNotAssociatedWithActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetFacesNotAssociatedWithActor_Statics::SmartsuitBlueprintLibrary_eventGetFacesNotAssociatedWithActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetFacesNotAssociatedWithActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetFacesNotAssociatedWithActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetFacesNotAssociatedWithActor_Statics::SmartsuitBlueprintLibrary_eventGetFacesNotAssociatedWithActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetFacesNotAssociatedWithActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetFacesNotAssociatedWithActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USmartsuitBlueprintLibrary::execGetFacesNotAssociatedWithActor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FFace>*)Z_Param__Result=USmartsuitBlueprintLibrary::GetFacesNotAssociatedWithActor();
	P_NATIVE_END;
}
// End Class USmartsuitBlueprintLibrary Function GetFacesNotAssociatedWithActor

// Begin Class USmartsuitBlueprintLibrary Function GetProp
struct Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetProp_Statics
{
	struct SmartsuitBlueprintLibrary_eventGetProp_Parms
	{
		FString name;
		FProp OutProp;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rokoko" },
		{ "ModuleRelativePath", "Public/SmartsuitBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Calls a function in VPStreamingNetwork to retrieve a prop by name." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_name;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutProp;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetProp_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SmartsuitBlueprintLibrary_eventGetProp_Parms, name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetProp_Statics::NewProp_OutProp = { "OutProp", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SmartsuitBlueprintLibrary_eventGetProp_Parms, OutProp), Z_Construct_UScriptStruct_FProp, METADATA_PARAMS(0, nullptr) }; // 2553890183
void Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetProp_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SmartsuitBlueprintLibrary_eventGetProp_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetProp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SmartsuitBlueprintLibrary_eventGetProp_Parms), &Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetProp_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetProp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetProp_Statics::NewProp_name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetProp_Statics::NewProp_OutProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetProp_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetProp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetProp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USmartsuitBlueprintLibrary, nullptr, "GetProp", nullptr, nullptr, Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetProp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetProp_Statics::PropPointers), sizeof(Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetProp_Statics::SmartsuitBlueprintLibrary_eventGetProp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetProp_Statics::Function_MetaDataParams), Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetProp_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetProp_Statics::SmartsuitBlueprintLibrary_eventGetProp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetProp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetProp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USmartsuitBlueprintLibrary::execGetProp)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_name);
	P_GET_STRUCT_REF(FProp,Z_Param_Out_OutProp);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USmartsuitBlueprintLibrary::GetProp(Z_Param_name,Z_Param_Out_OutProp);
	P_NATIVE_END;
}
// End Class USmartsuitBlueprintLibrary Function GetProp

// Begin Class USmartsuitBlueprintLibrary Function GetPropLocation
struct Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetPropLocation_Statics
{
	struct SmartsuitBlueprintLibrary_eventGetPropLocation_Parms
	{
		FProp InProp;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rokoko" },
		{ "ModuleRelativePath", "Public/SmartsuitBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetPropLocation_Statics::NewProp_InProp = { "InProp", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SmartsuitBlueprintLibrary_eventGetPropLocation_Parms, InProp), Z_Construct_UScriptStruct_FProp, METADATA_PARAMS(0, nullptr) }; // 2553890183
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetPropLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SmartsuitBlueprintLibrary_eventGetPropLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetPropLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetPropLocation_Statics::NewProp_InProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetPropLocation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetPropLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetPropLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USmartsuitBlueprintLibrary, nullptr, "GetPropLocation", nullptr, nullptr, Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetPropLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetPropLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetPropLocation_Statics::SmartsuitBlueprintLibrary_eventGetPropLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetPropLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetPropLocation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetPropLocation_Statics::SmartsuitBlueprintLibrary_eventGetPropLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetPropLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetPropLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USmartsuitBlueprintLibrary::execGetPropLocation)
{
	P_GET_STRUCT(FProp,Z_Param_InProp);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=USmartsuitBlueprintLibrary::GetPropLocation(Z_Param_InProp);
	P_NATIVE_END;
}
// End Class USmartsuitBlueprintLibrary Function GetPropLocation

// Begin Class USmartsuitBlueprintLibrary Function GetPropRotation
struct Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetPropRotation_Statics
{
	struct SmartsuitBlueprintLibrary_eventGetPropRotation_Parms
	{
		FProp InProp;
		FRotator ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rokoko" },
		{ "ModuleRelativePath", "Public/SmartsuitBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetPropRotation_Statics::NewProp_InProp = { "InProp", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SmartsuitBlueprintLibrary_eventGetPropRotation_Parms, InProp), Z_Construct_UScriptStruct_FProp, METADATA_PARAMS(0, nullptr) }; // 2553890183
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetPropRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SmartsuitBlueprintLibrary_eventGetPropRotation_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetPropRotation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetPropRotation_Statics::NewProp_InProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetPropRotation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetPropRotation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetPropRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USmartsuitBlueprintLibrary, nullptr, "GetPropRotation", nullptr, nullptr, Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetPropRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetPropRotation_Statics::PropPointers), sizeof(Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetPropRotation_Statics::SmartsuitBlueprintLibrary_eventGetPropRotation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetPropRotation_Statics::Function_MetaDataParams), Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetPropRotation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetPropRotation_Statics::SmartsuitBlueprintLibrary_eventGetPropRotation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetPropRotation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetPropRotation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USmartsuitBlueprintLibrary::execGetPropRotation)
{
	P_GET_STRUCT(FProp,Z_Param_InProp);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRotator*)Z_Param__Result=USmartsuitBlueprintLibrary::GetPropRotation(Z_Param_InProp);
	P_NATIVE_END;
}
// End Class USmartsuitBlueprintLibrary Function GetPropRotation

// Begin Class USmartsuitBlueprintLibrary Function GetSmartsuitByName
struct Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetSmartsuitByName_Statics
{
	struct SmartsuitBlueprintLibrary_eventGetSmartsuitByName_Parms
	{
		FString suitName;
		FSuitData SuitData;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rokoko" },
		{ "ModuleRelativePath", "Public/SmartsuitBlueprintLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_suitName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_suitName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SuitData;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetSmartsuitByName_Statics::NewProp_suitName = { "suitName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SmartsuitBlueprintLibrary_eventGetSmartsuitByName_Parms, suitName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_suitName_MetaData), NewProp_suitName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetSmartsuitByName_Statics::NewProp_SuitData = { "SuitData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SmartsuitBlueprintLibrary_eventGetSmartsuitByName_Parms, SuitData), Z_Construct_UScriptStruct_FSuitData, METADATA_PARAMS(0, nullptr) }; // 1152959455
void Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetSmartsuitByName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SmartsuitBlueprintLibrary_eventGetSmartsuitByName_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetSmartsuitByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SmartsuitBlueprintLibrary_eventGetSmartsuitByName_Parms), &Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetSmartsuitByName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetSmartsuitByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetSmartsuitByName_Statics::NewProp_suitName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetSmartsuitByName_Statics::NewProp_SuitData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetSmartsuitByName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetSmartsuitByName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetSmartsuitByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USmartsuitBlueprintLibrary, nullptr, "GetSmartsuitByName", nullptr, nullptr, Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetSmartsuitByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetSmartsuitByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetSmartsuitByName_Statics::SmartsuitBlueprintLibrary_eventGetSmartsuitByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetSmartsuitByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetSmartsuitByName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetSmartsuitByName_Statics::SmartsuitBlueprintLibrary_eventGetSmartsuitByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetSmartsuitByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetSmartsuitByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USmartsuitBlueprintLibrary::execGetSmartsuitByName)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_suitName);
	P_GET_STRUCT_REF(FSuitData,Z_Param_Out_SuitData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USmartsuitBlueprintLibrary::GetSmartsuitByName(Z_Param_suitName,Z_Param_Out_SuitData);
	P_NATIVE_END;
}
// End Class USmartsuitBlueprintLibrary Function GetSmartsuitByName

// Begin Class USmartsuitBlueprintLibrary Function GetSmartsuitController
struct Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetSmartsuitController_Statics
{
	struct SmartsuitBlueprintLibrary_eventGetSmartsuitController_Parms
	{
		int32 id;
		ASmartsuitController* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Rokoko" },
		{ "ModuleRelativePath", "Public/SmartsuitBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns a SmartsuitController given it's Index ID. The Index ID is specified in the SmartsuitController details." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_id;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetSmartsuitController_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SmartsuitBlueprintLibrary_eventGetSmartsuitController_Parms, id), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetSmartsuitController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SmartsuitBlueprintLibrary_eventGetSmartsuitController_Parms, ReturnValue), Z_Construct_UClass_ASmartsuitController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetSmartsuitController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetSmartsuitController_Statics::NewProp_id,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetSmartsuitController_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetSmartsuitController_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetSmartsuitController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USmartsuitBlueprintLibrary, nullptr, "GetSmartsuitController", nullptr, nullptr, Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetSmartsuitController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetSmartsuitController_Statics::PropPointers), sizeof(Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetSmartsuitController_Statics::SmartsuitBlueprintLibrary_eventGetSmartsuitController_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetSmartsuitController_Statics::Function_MetaDataParams), Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetSmartsuitController_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetSmartsuitController_Statics::SmartsuitBlueprintLibrary_eventGetSmartsuitController_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetSmartsuitController()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetSmartsuitController_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USmartsuitBlueprintLibrary::execGetSmartsuitController)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_id);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ASmartsuitController**)Z_Param__Result=USmartsuitBlueprintLibrary::GetSmartsuitController(Z_Param_id);
	P_NATIVE_END;
}
// End Class USmartsuitBlueprintLibrary Function GetSmartsuitController

// Begin Class USmartsuitBlueprintLibrary Function GetSmartsuitControllerByName
struct Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetSmartsuitControllerByName_Statics
{
	struct SmartsuitBlueprintLibrary_eventGetSmartsuitControllerByName_Parms
	{
		FString name;
		ASmartsuitController* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Rokoko" },
		{ "ModuleRelativePath", "Public/SmartsuitBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the SmartsuitController given the Smartsuit name." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_name;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetSmartsuitControllerByName_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SmartsuitBlueprintLibrary_eventGetSmartsuitControllerByName_Parms, name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetSmartsuitControllerByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SmartsuitBlueprintLibrary_eventGetSmartsuitControllerByName_Parms, ReturnValue), Z_Construct_UClass_ASmartsuitController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetSmartsuitControllerByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetSmartsuitControllerByName_Statics::NewProp_name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetSmartsuitControllerByName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetSmartsuitControllerByName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetSmartsuitControllerByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USmartsuitBlueprintLibrary, nullptr, "GetSmartsuitControllerByName", nullptr, nullptr, Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetSmartsuitControllerByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetSmartsuitControllerByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetSmartsuitControllerByName_Statics::SmartsuitBlueprintLibrary_eventGetSmartsuitControllerByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetSmartsuitControllerByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetSmartsuitControllerByName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetSmartsuitControllerByName_Statics::SmartsuitBlueprintLibrary_eventGetSmartsuitControllerByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetSmartsuitControllerByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetSmartsuitControllerByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USmartsuitBlueprintLibrary::execGetSmartsuitControllerByName)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_name);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ASmartsuitController**)Z_Param__Result=USmartsuitBlueprintLibrary::GetSmartsuitControllerByName(Z_Param_name);
	P_NATIVE_END;
}
// End Class USmartsuitBlueprintLibrary Function GetSmartsuitControllerByName

// Begin Class USmartsuitBlueprintLibrary Function GetTracker
struct Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetTracker_Statics
{
	struct SmartsuitBlueprintLibrary_eventGetTracker_Parms
	{
		FString name;
		bool isLive;
		FTracker ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rokoko" },
		{ "ModuleRelativePath", "Public/SmartsuitBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Calls a function in VPStreamingNetwork to retrieve a tracker by name." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_name;
	static void NewProp_isLive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_isLive;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetTracker_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SmartsuitBlueprintLibrary_eventGetTracker_Parms, name), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetTracker_Statics::NewProp_isLive_SetBit(void* Obj)
{
	((SmartsuitBlueprintLibrary_eventGetTracker_Parms*)Obj)->isLive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetTracker_Statics::NewProp_isLive = { "isLive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SmartsuitBlueprintLibrary_eventGetTracker_Parms), &Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetTracker_Statics::NewProp_isLive_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetTracker_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SmartsuitBlueprintLibrary_eventGetTracker_Parms, ReturnValue), Z_Construct_UScriptStruct_FTracker, METADATA_PARAMS(0, nullptr) }; // 2648379077
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetTracker_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetTracker_Statics::NewProp_name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetTracker_Statics::NewProp_isLive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetTracker_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetTracker_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetTracker_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USmartsuitBlueprintLibrary, nullptr, "GetTracker", nullptr, nullptr, Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetTracker_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetTracker_Statics::PropPointers), sizeof(Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetTracker_Statics::SmartsuitBlueprintLibrary_eventGetTracker_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetTracker_Statics::Function_MetaDataParams), Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetTracker_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetTracker_Statics::SmartsuitBlueprintLibrary_eventGetTracker_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetTracker()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetTracker_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USmartsuitBlueprintLibrary::execGetTracker)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_name);
	P_GET_UBOOL(Z_Param_isLive);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTracker*)Z_Param__Result=USmartsuitBlueprintLibrary::GetTracker(Z_Param_name,Z_Param_isLive);
	P_NATIVE_END;
}
// End Class USmartsuitBlueprintLibrary Function GetTracker

// Begin Class USmartsuitBlueprintLibrary Function GetTrackerByConnectionIDFromVP
struct Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetTrackerByConnectionIDFromVP_Statics
{
	struct SmartsuitBlueprintLibrary_eventGetTrackerByConnectionIDFromVP_Parms
	{
		FString name;
		bool isLive;
		bool found;
		FTracker ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rokoko" },
		{ "ModuleRelativePath", "Public/SmartsuitBlueprintLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_name;
	static void NewProp_isLive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_isLive;
	static void NewProp_found_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_found;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetTrackerByConnectionIDFromVP_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SmartsuitBlueprintLibrary_eventGetTrackerByConnectionIDFromVP_Parms, name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_name_MetaData), NewProp_name_MetaData) };
void Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetTrackerByConnectionIDFromVP_Statics::NewProp_isLive_SetBit(void* Obj)
{
	((SmartsuitBlueprintLibrary_eventGetTrackerByConnectionIDFromVP_Parms*)Obj)->isLive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetTrackerByConnectionIDFromVP_Statics::NewProp_isLive = { "isLive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SmartsuitBlueprintLibrary_eventGetTrackerByConnectionIDFromVP_Parms), &Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetTrackerByConnectionIDFromVP_Statics::NewProp_isLive_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetTrackerByConnectionIDFromVP_Statics::NewProp_found_SetBit(void* Obj)
{
	((SmartsuitBlueprintLibrary_eventGetTrackerByConnectionIDFromVP_Parms*)Obj)->found = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetTrackerByConnectionIDFromVP_Statics::NewProp_found = { "found", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SmartsuitBlueprintLibrary_eventGetTrackerByConnectionIDFromVP_Parms), &Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetTrackerByConnectionIDFromVP_Statics::NewProp_found_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetTrackerByConnectionIDFromVP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SmartsuitBlueprintLibrary_eventGetTrackerByConnectionIDFromVP_Parms, ReturnValue), Z_Construct_UScriptStruct_FTracker, METADATA_PARAMS(0, nullptr) }; // 2648379077
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetTrackerByConnectionIDFromVP_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetTrackerByConnectionIDFromVP_Statics::NewProp_name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetTrackerByConnectionIDFromVP_Statics::NewProp_isLive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetTrackerByConnectionIDFromVP_Statics::NewProp_found,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetTrackerByConnectionIDFromVP_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetTrackerByConnectionIDFromVP_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetTrackerByConnectionIDFromVP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USmartsuitBlueprintLibrary, nullptr, "GetTrackerByConnectionIDFromVP", nullptr, nullptr, Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetTrackerByConnectionIDFromVP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetTrackerByConnectionIDFromVP_Statics::PropPointers), sizeof(Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetTrackerByConnectionIDFromVP_Statics::SmartsuitBlueprintLibrary_eventGetTrackerByConnectionIDFromVP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetTrackerByConnectionIDFromVP_Statics::Function_MetaDataParams), Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetTrackerByConnectionIDFromVP_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetTrackerByConnectionIDFromVP_Statics::SmartsuitBlueprintLibrary_eventGetTrackerByConnectionIDFromVP_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetTrackerByConnectionIDFromVP()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetTrackerByConnectionIDFromVP_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USmartsuitBlueprintLibrary::execGetTrackerByConnectionIDFromVP)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_name);
	P_GET_UBOOL(Z_Param_isLive);
	P_GET_UBOOL_REF(Z_Param_Out_found);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTracker*)Z_Param__Result=USmartsuitBlueprintLibrary::GetTrackerByConnectionIDFromVP(Z_Param_name,Z_Param_isLive,Z_Param_Out_found);
	P_NATIVE_END;
}
// End Class USmartsuitBlueprintLibrary Function GetTrackerByConnectionIDFromVP

// Begin Class USmartsuitBlueprintLibrary Function JSONTest
struct Z_Construct_UFunction_USmartsuitBlueprintLibrary_JSONTest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Public/SmartsuitBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USmartsuitBlueprintLibrary_JSONTest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USmartsuitBlueprintLibrary, nullptr, "JSONTest", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USmartsuitBlueprintLibrary_JSONTest_Statics::Function_MetaDataParams), Z_Construct_UFunction_USmartsuitBlueprintLibrary_JSONTest_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USmartsuitBlueprintLibrary_JSONTest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USmartsuitBlueprintLibrary_JSONTest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USmartsuitBlueprintLibrary::execJSONTest)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	USmartsuitBlueprintLibrary::JSONTest();
	P_NATIVE_END;
}
// End Class USmartsuitBlueprintLibrary Function JSONTest

// Begin Class USmartsuitBlueprintLibrary Function UPosition
struct Z_Construct_UFunction_USmartsuitBlueprintLibrary_UPosition_Statics
{
	struct SmartsuitBlueprintLibrary_eventUPosition_Parms
	{
		FVector position;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rokoko" },
		{ "ModuleRelativePath", "Public/SmartsuitBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Converts position into Unreal position." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_position;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USmartsuitBlueprintLibrary_UPosition_Statics::NewProp_position = { "position", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SmartsuitBlueprintLibrary_eventUPosition_Parms, position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USmartsuitBlueprintLibrary_UPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SmartsuitBlueprintLibrary_eventUPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USmartsuitBlueprintLibrary_UPosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmartsuitBlueprintLibrary_UPosition_Statics::NewProp_position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmartsuitBlueprintLibrary_UPosition_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USmartsuitBlueprintLibrary_UPosition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USmartsuitBlueprintLibrary_UPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USmartsuitBlueprintLibrary, nullptr, "UPosition", nullptr, nullptr, Z_Construct_UFunction_USmartsuitBlueprintLibrary_UPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USmartsuitBlueprintLibrary_UPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_USmartsuitBlueprintLibrary_UPosition_Statics::SmartsuitBlueprintLibrary_eventUPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USmartsuitBlueprintLibrary_UPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_USmartsuitBlueprintLibrary_UPosition_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USmartsuitBlueprintLibrary_UPosition_Statics::SmartsuitBlueprintLibrary_eventUPosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USmartsuitBlueprintLibrary_UPosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USmartsuitBlueprintLibrary_UPosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USmartsuitBlueprintLibrary::execUPosition)
{
	P_GET_STRUCT(FVector,Z_Param_position);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=USmartsuitBlueprintLibrary::UPosition(Z_Param_position);
	P_NATIVE_END;
}
// End Class USmartsuitBlueprintLibrary Function UPosition

// Begin Class USmartsuitBlueprintLibrary
void USmartsuitBlueprintLibrary::StaticRegisterNativesUSmartsuitBlueprintLibrary()
{
	UClass* Class = USmartsuitBlueprintLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateVirtualProductionSource", &USmartsuitBlueprintLibrary::execCreateVirtualProductionSource },
		{ "FQuatToRotator", &USmartsuitBlueprintLibrary::execFQuatToRotator },
		{ "GetAllFaces", &USmartsuitBlueprintLibrary::execGetAllFaces },
		{ "GetAllProps", &USmartsuitBlueprintLibrary::execGetAllProps },
		{ "GetAllSmartsuits", &USmartsuitBlueprintLibrary::execGetAllSmartsuits },
		{ "GetAvailableActorNames", &USmartsuitBlueprintLibrary::execGetAvailableActorNames },
		{ "GetFaceByFaceID", &USmartsuitBlueprintLibrary::execGetFaceByFaceID },
		{ "GetFaceByProfileName", &USmartsuitBlueprintLibrary::execGetFaceByProfileName },
		{ "GetFacesNotAssociatedWithActor", &USmartsuitBlueprintLibrary::execGetFacesNotAssociatedWithActor },
		{ "GetProp", &USmartsuitBlueprintLibrary::execGetProp },
		{ "GetPropLocation", &USmartsuitBlueprintLibrary::execGetPropLocation },
		{ "GetPropRotation", &USmartsuitBlueprintLibrary::execGetPropRotation },
		{ "GetSmartsuitByName", &USmartsuitBlueprintLibrary::execGetSmartsuitByName },
		{ "GetSmartsuitController", &USmartsuitBlueprintLibrary::execGetSmartsuitController },
		{ "GetSmartsuitControllerByName", &USmartsuitBlueprintLibrary::execGetSmartsuitControllerByName },
		{ "GetTracker", &USmartsuitBlueprintLibrary::execGetTracker },
		{ "GetTrackerByConnectionIDFromVP", &USmartsuitBlueprintLibrary::execGetTrackerByConnectionIDFromVP },
		{ "JSONTest", &USmartsuitBlueprintLibrary::execJSONTest },
		{ "UPosition", &USmartsuitBlueprintLibrary::execUPosition },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USmartsuitBlueprintLibrary);
UClass* Z_Construct_UClass_USmartsuitBlueprintLibrary_NoRegister()
{
	return USmartsuitBlueprintLibrary::StaticClass();
}
struct Z_Construct_UClass_USmartsuitBlueprintLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "IncludePath", "SmartsuitBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/SmartsuitBlueprintLibrary.h" },
		{ "ScriptName", "SmartsuitLibrary" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USmartsuitBlueprintLibrary_CreateVirtualProductionSource, "CreateVirtualProductionSource" }, // 3027836173
		{ &Z_Construct_UFunction_USmartsuitBlueprintLibrary_FQuatToRotator, "FQuatToRotator" }, // 3572950622
		{ &Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetAllFaces, "GetAllFaces" }, // 3235735232
		{ &Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetAllProps, "GetAllProps" }, // 3918941083
		{ &Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetAllSmartsuits, "GetAllSmartsuits" }, // 4038778203
		{ &Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetAvailableActorNames, "GetAvailableActorNames" }, // 3436975678
		{ &Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetFaceByFaceID, "GetFaceByFaceID" }, // 2712281803
		{ &Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetFaceByProfileName, "GetFaceByProfileName" }, // 3814199734
		{ &Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetFacesNotAssociatedWithActor, "GetFacesNotAssociatedWithActor" }, // 3714402686
		{ &Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetProp, "GetProp" }, // 3143218459
		{ &Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetPropLocation, "GetPropLocation" }, // 4120537284
		{ &Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetPropRotation, "GetPropRotation" }, // 1671026820
		{ &Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetSmartsuitByName, "GetSmartsuitByName" }, // 340341534
		{ &Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetSmartsuitController, "GetSmartsuitController" }, // 1484817877
		{ &Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetSmartsuitControllerByName, "GetSmartsuitControllerByName" }, // 4109144483
		{ &Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetTracker, "GetTracker" }, // 4115972666
		{ &Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetTrackerByConnectionIDFromVP, "GetTrackerByConnectionIDFromVP" }, // 288119853
		{ &Z_Construct_UFunction_USmartsuitBlueprintLibrary_JSONTest, "JSONTest" }, // 295731595
		{ &Z_Construct_UFunction_USmartsuitBlueprintLibrary_UPosition, "UPosition" }, // 3579074507
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USmartsuitBlueprintLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USmartsuitBlueprintLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_Smartsuit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USmartsuitBlueprintLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USmartsuitBlueprintLibrary_Statics::ClassParams = {
	&USmartsuitBlueprintLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USmartsuitBlueprintLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_USmartsuitBlueprintLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USmartsuitBlueprintLibrary()
{
	if (!Z_Registration_Info_UClass_USmartsuitBlueprintLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USmartsuitBlueprintLibrary.OuterSingleton, Z_Construct_UClass_USmartsuitBlueprintLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USmartsuitBlueprintLibrary.OuterSingleton;
}
template<> SMARTSUIT_API UClass* StaticClass<USmartsuitBlueprintLibrary>()
{
	return USmartsuitBlueprintLibrary::StaticClass();
}
USmartsuitBlueprintLibrary::USmartsuitBlueprintLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USmartsuitBlueprintLibrary);
USmartsuitBlueprintLibrary::~USmartsuitBlueprintLibrary() {}
// End Class USmartsuitBlueprintLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_olavu_Documents_Unreal_Projects_AIDrummer_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitBlueprintLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USmartsuitBlueprintLibrary, USmartsuitBlueprintLibrary::StaticClass, TEXT("USmartsuitBlueprintLibrary"), &Z_Registration_Info_UClass_USmartsuitBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USmartsuitBlueprintLibrary), 4030649713U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_olavu_Documents_Unreal_Projects_AIDrummer_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitBlueprintLibrary_h_2706830162(TEXT("/Script/Smartsuit"),
	Z_CompiledInDeferFile_FID_olavu_Documents_Unreal_Projects_AIDrummer_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitBlueprintLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_olavu_Documents_Unreal_Projects_AIDrummer_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitBlueprintLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
