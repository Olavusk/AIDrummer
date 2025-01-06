// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Smartsuit/Public/RokokoStudioCommandAPI.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRokokoStudioCommandAPI() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTimecode();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
SMARTSUIT_API UClass* Z_Construct_UClass_URokokoStudioCommandAPI();
SMARTSUIT_API UClass* Z_Construct_UClass_URokokoStudioCommandAPI_NoRegister();
SMARTSUIT_API UEnum* Z_Construct_UEnum_Smartsuit_EPlaybackChange();
SMARTSUIT_API UFunction* Z_Construct_UDelegateFunction_Smartsuit_OnCompletedRequest__DelegateSignature();
SMARTSUIT_API UFunction* Z_Construct_UDelegateFunction_Smartsuit_OnInfoRequest__DelegateSignature();
SMARTSUIT_API UFunction* Z_Construct_UDelegateFunction_Smartsuit_OnPlaybackRequest__DelegateSignature();
SMARTSUIT_API UFunction* Z_Construct_UDelegateFunction_Smartsuit_OnTrackerRequest__DelegateSignature();
SMARTSUIT_API UScriptStruct* Z_Construct_UScriptStruct_FRokokoCommandAPI_CalibrateInput();
SMARTSUIT_API UScriptStruct* Z_Construct_UScriptStruct_FRokokoCommandAPI_IPInfo();
SMARTSUIT_API UScriptStruct* Z_Construct_UScriptStruct_FRokokoCommandAPI_PlaybackInput();
SMARTSUIT_API UScriptStruct* Z_Construct_UScriptStruct_FRokokoCommandAPI_TrackerInput();
UPackage* Z_Construct_UPackage__Script_Smartsuit();
// End Cross Module References

// Begin ScriptStruct FRokokoCommandAPI_IPInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RokokoCommandAPI_IPInfo;
class UScriptStruct* FRokokoCommandAPI_IPInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RokokoCommandAPI_IPInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RokokoCommandAPI_IPInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRokokoCommandAPI_IPInfo, (UObject*)Z_Construct_UPackage__Script_Smartsuit(), TEXT("RokokoCommandAPI_IPInfo"));
	}
	return Z_Registration_Info_UScriptStruct_RokokoCommandAPI_IPInfo.OuterSingleton;
}
template<> SMARTSUIT_API UScriptStruct* StaticStruct<FRokokoCommandAPI_IPInfo>()
{
	return FRokokoCommandAPI_IPInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRokokoCommandAPI_IPInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RokokoStudioCommandAPI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IPAddress_MetaData[] = {
		{ "Category", "Rokoko Command API" },
		{ "ModuleRelativePath", "Public/RokokoStudioCommandAPI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Port_MetaData[] = {
		{ "Category", "Rokoko Command API" },
		{ "ModuleRelativePath", "Public/RokokoStudioCommandAPI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_APIKey_MetaData[] = {
		{ "Category", "Rokoko Command API" },
		{ "ModuleRelativePath", "Public/RokokoStudioCommandAPI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_IPAddress;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Port;
	static const UECodeGen_Private::FStrPropertyParams NewProp_APIKey;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRokokoCommandAPI_IPInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRokokoCommandAPI_IPInfo_Statics::NewProp_IPAddress = { "IPAddress", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRokokoCommandAPI_IPInfo, IPAddress), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IPAddress_MetaData), NewProp_IPAddress_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRokokoCommandAPI_IPInfo_Statics::NewProp_Port = { "Port", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRokokoCommandAPI_IPInfo, Port), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Port_MetaData), NewProp_Port_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRokokoCommandAPI_IPInfo_Statics::NewProp_APIKey = { "APIKey", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRokokoCommandAPI_IPInfo, APIKey), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_APIKey_MetaData), NewProp_APIKey_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRokokoCommandAPI_IPInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRokokoCommandAPI_IPInfo_Statics::NewProp_IPAddress,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRokokoCommandAPI_IPInfo_Statics::NewProp_Port,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRokokoCommandAPI_IPInfo_Statics::NewProp_APIKey,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRokokoCommandAPI_IPInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRokokoCommandAPI_IPInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Smartsuit,
	nullptr,
	&NewStructOps,
	"RokokoCommandAPI_IPInfo",
	Z_Construct_UScriptStruct_FRokokoCommandAPI_IPInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRokokoCommandAPI_IPInfo_Statics::PropPointers),
	sizeof(FRokokoCommandAPI_IPInfo),
	alignof(FRokokoCommandAPI_IPInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRokokoCommandAPI_IPInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRokokoCommandAPI_IPInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRokokoCommandAPI_IPInfo()
{
	if (!Z_Registration_Info_UScriptStruct_RokokoCommandAPI_IPInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RokokoCommandAPI_IPInfo.InnerSingleton, Z_Construct_UScriptStruct_FRokokoCommandAPI_IPInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RokokoCommandAPI_IPInfo.InnerSingleton;
}
// End ScriptStruct FRokokoCommandAPI_IPInfo

// Begin ScriptStruct FRokokoCommandAPI_CalibrateInput
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RokokoCommandAPI_CalibrateInput;
class UScriptStruct* FRokokoCommandAPI_CalibrateInput::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RokokoCommandAPI_CalibrateInput.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RokokoCommandAPI_CalibrateInput.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRokokoCommandAPI_CalibrateInput, (UObject*)Z_Construct_UPackage__Script_Smartsuit(), TEXT("RokokoCommandAPI_CalibrateInput"));
	}
	return Z_Registration_Info_UScriptStruct_RokokoCommandAPI_CalibrateInput.OuterSingleton;
}
template<> SMARTSUIT_API UScriptStruct* StaticStruct<FRokokoCommandAPI_CalibrateInput>()
{
	return FRokokoCommandAPI_CalibrateInput::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRokokoCommandAPI_CalibrateInput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RokokoStudioCommandAPI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeviceID_MetaData[] = {
		{ "Category", "Rokoko Command API" },
		{ "ModuleRelativePath", "Public/RokokoStudioCommandAPI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CountdownDelay_MetaData[] = {
		{ "Category", "Rokoko Command API" },
		{ "ModuleRelativePath", "Public/RokokoStudioCommandAPI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShouldSkipSuit_MetaData[] = {
		{ "Category", "Rokoko Command API" },
		{ "ModuleRelativePath", "Public/RokokoStudioCommandAPI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShouldSkipGloves_MetaData[] = {
		{ "Category", "Rokoko Command API" },
		{ "ModuleRelativePath", "Public/RokokoStudioCommandAPI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UseCustomPose_MetaData[] = {
		{ "Category", "Rokoko Command API" },
		{ "ModuleRelativePath", "Public/RokokoStudioCommandAPI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomPoseName_MetaData[] = {
		{ "Category", "Rokoko Command API" },
		{ "ModuleRelativePath", "Public/RokokoStudioCommandAPI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_DeviceID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CountdownDelay;
	static void NewProp_ShouldSkipSuit_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ShouldSkipSuit;
	static void NewProp_ShouldSkipGloves_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ShouldSkipGloves;
	static void NewProp_UseCustomPose_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UseCustomPose;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CustomPoseName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRokokoCommandAPI_CalibrateInput>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRokokoCommandAPI_CalibrateInput_Statics::NewProp_DeviceID = { "DeviceID", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRokokoCommandAPI_CalibrateInput, DeviceID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeviceID_MetaData), NewProp_DeviceID_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRokokoCommandAPI_CalibrateInput_Statics::NewProp_CountdownDelay = { "CountdownDelay", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRokokoCommandAPI_CalibrateInput, CountdownDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CountdownDelay_MetaData), NewProp_CountdownDelay_MetaData) };
void Z_Construct_UScriptStruct_FRokokoCommandAPI_CalibrateInput_Statics::NewProp_ShouldSkipSuit_SetBit(void* Obj)
{
	((FRokokoCommandAPI_CalibrateInput*)Obj)->ShouldSkipSuit = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRokokoCommandAPI_CalibrateInput_Statics::NewProp_ShouldSkipSuit = { "ShouldSkipSuit", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRokokoCommandAPI_CalibrateInput), &Z_Construct_UScriptStruct_FRokokoCommandAPI_CalibrateInput_Statics::NewProp_ShouldSkipSuit_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShouldSkipSuit_MetaData), NewProp_ShouldSkipSuit_MetaData) };
void Z_Construct_UScriptStruct_FRokokoCommandAPI_CalibrateInput_Statics::NewProp_ShouldSkipGloves_SetBit(void* Obj)
{
	((FRokokoCommandAPI_CalibrateInput*)Obj)->ShouldSkipGloves = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRokokoCommandAPI_CalibrateInput_Statics::NewProp_ShouldSkipGloves = { "ShouldSkipGloves", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRokokoCommandAPI_CalibrateInput), &Z_Construct_UScriptStruct_FRokokoCommandAPI_CalibrateInput_Statics::NewProp_ShouldSkipGloves_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShouldSkipGloves_MetaData), NewProp_ShouldSkipGloves_MetaData) };
void Z_Construct_UScriptStruct_FRokokoCommandAPI_CalibrateInput_Statics::NewProp_UseCustomPose_SetBit(void* Obj)
{
	((FRokokoCommandAPI_CalibrateInput*)Obj)->UseCustomPose = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRokokoCommandAPI_CalibrateInput_Statics::NewProp_UseCustomPose = { "UseCustomPose", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRokokoCommandAPI_CalibrateInput), &Z_Construct_UScriptStruct_FRokokoCommandAPI_CalibrateInput_Statics::NewProp_UseCustomPose_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UseCustomPose_MetaData), NewProp_UseCustomPose_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRokokoCommandAPI_CalibrateInput_Statics::NewProp_CustomPoseName = { "CustomPoseName", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRokokoCommandAPI_CalibrateInput, CustomPoseName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomPoseName_MetaData), NewProp_CustomPoseName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRokokoCommandAPI_CalibrateInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRokokoCommandAPI_CalibrateInput_Statics::NewProp_DeviceID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRokokoCommandAPI_CalibrateInput_Statics::NewProp_CountdownDelay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRokokoCommandAPI_CalibrateInput_Statics::NewProp_ShouldSkipSuit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRokokoCommandAPI_CalibrateInput_Statics::NewProp_ShouldSkipGloves,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRokokoCommandAPI_CalibrateInput_Statics::NewProp_UseCustomPose,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRokokoCommandAPI_CalibrateInput_Statics::NewProp_CustomPoseName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRokokoCommandAPI_CalibrateInput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRokokoCommandAPI_CalibrateInput_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Smartsuit,
	nullptr,
	&NewStructOps,
	"RokokoCommandAPI_CalibrateInput",
	Z_Construct_UScriptStruct_FRokokoCommandAPI_CalibrateInput_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRokokoCommandAPI_CalibrateInput_Statics::PropPointers),
	sizeof(FRokokoCommandAPI_CalibrateInput),
	alignof(FRokokoCommandAPI_CalibrateInput),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRokokoCommandAPI_CalibrateInput_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRokokoCommandAPI_CalibrateInput_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRokokoCommandAPI_CalibrateInput()
{
	if (!Z_Registration_Info_UScriptStruct_RokokoCommandAPI_CalibrateInput.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RokokoCommandAPI_CalibrateInput.InnerSingleton, Z_Construct_UScriptStruct_FRokokoCommandAPI_CalibrateInput_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RokokoCommandAPI_CalibrateInput.InnerSingleton;
}
// End ScriptStruct FRokokoCommandAPI_CalibrateInput

// Begin ScriptStruct FRokokoCommandAPI_TrackerInput
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RokokoCommandAPI_TrackerInput;
class UScriptStruct* FRokokoCommandAPI_TrackerInput::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RokokoCommandAPI_TrackerInput.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RokokoCommandAPI_TrackerInput.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRokokoCommandAPI_TrackerInput, (UObject*)Z_Construct_UPackage__Script_Smartsuit(), TEXT("RokokoCommandAPI_TrackerInput"));
	}
	return Z_Registration_Info_UScriptStruct_RokokoCommandAPI_TrackerInput.OuterSingleton;
}
template<> SMARTSUIT_API UScriptStruct* StaticStruct<FRokokoCommandAPI_TrackerInput>()
{
	return FRokokoCommandAPI_TrackerInput::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRokokoCommandAPI_TrackerInput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RokokoStudioCommandAPI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeviceID_MetaData[] = {
		{ "Category", "Rokoko Command API" },
		{ "ModuleRelativePath", "Public/RokokoStudioCommandAPI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[] = {
		{ "Category", "Rokoko Command API" },
		{ "ModuleRelativePath", "Public/RokokoStudioCommandAPI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[] = {
		{ "Category", "Rokoko Command API" },
		{ "ModuleRelativePath", "Public/RokokoStudioCommandAPI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeoutTime_MetaData[] = {
		{ "Category", "Rokoko Command API" },
		{ "ModuleRelativePath", "Public/RokokoStudioCommandAPI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShouldQueryOnly_MetaData[] = {
		{ "Category", "Rokoko Command API" },
		{ "ModuleRelativePath", "Public/RokokoStudioCommandAPI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_DeviceID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_BoneName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeoutTime;
	static void NewProp_ShouldQueryOnly_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ShouldQueryOnly;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRokokoCommandAPI_TrackerInput>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRokokoCommandAPI_TrackerInput_Statics::NewProp_DeviceID = { "DeviceID", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRokokoCommandAPI_TrackerInput, DeviceID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeviceID_MetaData), NewProp_DeviceID_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRokokoCommandAPI_TrackerInput_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRokokoCommandAPI_TrackerInput, BoneName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneName_MetaData), NewProp_BoneName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRokokoCommandAPI_TrackerInput_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRokokoCommandAPI_TrackerInput, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transform_MetaData), NewProp_Transform_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRokokoCommandAPI_TrackerInput_Statics::NewProp_TimeoutTime = { "TimeoutTime", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRokokoCommandAPI_TrackerInput, TimeoutTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeoutTime_MetaData), NewProp_TimeoutTime_MetaData) };
void Z_Construct_UScriptStruct_FRokokoCommandAPI_TrackerInput_Statics::NewProp_ShouldQueryOnly_SetBit(void* Obj)
{
	((FRokokoCommandAPI_TrackerInput*)Obj)->ShouldQueryOnly = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRokokoCommandAPI_TrackerInput_Statics::NewProp_ShouldQueryOnly = { "ShouldQueryOnly", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRokokoCommandAPI_TrackerInput), &Z_Construct_UScriptStruct_FRokokoCommandAPI_TrackerInput_Statics::NewProp_ShouldQueryOnly_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShouldQueryOnly_MetaData), NewProp_ShouldQueryOnly_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRokokoCommandAPI_TrackerInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRokokoCommandAPI_TrackerInput_Statics::NewProp_DeviceID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRokokoCommandAPI_TrackerInput_Statics::NewProp_BoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRokokoCommandAPI_TrackerInput_Statics::NewProp_Transform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRokokoCommandAPI_TrackerInput_Statics::NewProp_TimeoutTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRokokoCommandAPI_TrackerInput_Statics::NewProp_ShouldQueryOnly,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRokokoCommandAPI_TrackerInput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRokokoCommandAPI_TrackerInput_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Smartsuit,
	nullptr,
	&NewStructOps,
	"RokokoCommandAPI_TrackerInput",
	Z_Construct_UScriptStruct_FRokokoCommandAPI_TrackerInput_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRokokoCommandAPI_TrackerInput_Statics::PropPointers),
	sizeof(FRokokoCommandAPI_TrackerInput),
	alignof(FRokokoCommandAPI_TrackerInput),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRokokoCommandAPI_TrackerInput_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRokokoCommandAPI_TrackerInput_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRokokoCommandAPI_TrackerInput()
{
	if (!Z_Registration_Info_UScriptStruct_RokokoCommandAPI_TrackerInput.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RokokoCommandAPI_TrackerInput.InnerSingleton, Z_Construct_UScriptStruct_FRokokoCommandAPI_TrackerInput_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RokokoCommandAPI_TrackerInput.InnerSingleton;
}
// End ScriptStruct FRokokoCommandAPI_TrackerInput

// Begin Enum EPlaybackChange
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPlaybackChange;
static UEnum* EPlaybackChange_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPlaybackChange.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPlaybackChange.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Smartsuit_EPlaybackChange, (UObject*)Z_Construct_UPackage__Script_Smartsuit(), TEXT("EPlaybackChange"));
	}
	return Z_Registration_Info_UEnum_EPlaybackChange.OuterSingleton;
}
template<> SMARTSUIT_API UEnum* StaticEnum<EPlaybackChange>()
{
	return EPlaybackChange_StaticEnum();
}
struct Z_Construct_UEnum_Smartsuit_EPlaybackChange_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Bitflags", "" },
		{ "BlueprintType", "true" },
		{ "CurrentTime.Name", "EPlaybackChange::CurrentTime" },
		{ "GotoFirstFrame.Name", "EPlaybackChange::GotoFirstFrame" },
		{ "GotoLastFrame.Name", "EPlaybackChange::GotoLastFrame" },
		{ "IsPlaying.Name", "EPlaybackChange::IsPlaying" },
		{ "ModuleRelativePath", "Public/RokokoStudioCommandAPI.h" },
		{ "NONE.Hidden", "" },
		{ "NONE.Name", "EPlaybackChange::NONE" },
		{ "PlaybackSpeed.Name", "EPlaybackChange::PlaybackSpeed" },
		{ "UseEnumValuesAsMaskValuesInEditor", "true" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPlaybackChange::NONE", (int64)EPlaybackChange::NONE },
		{ "EPlaybackChange::IsPlaying", (int64)EPlaybackChange::IsPlaying },
		{ "EPlaybackChange::CurrentTime", (int64)EPlaybackChange::CurrentTime },
		{ "EPlaybackChange::GotoFirstFrame", (int64)EPlaybackChange::GotoFirstFrame },
		{ "EPlaybackChange::GotoLastFrame", (int64)EPlaybackChange::GotoLastFrame },
		{ "EPlaybackChange::PlaybackSpeed", (int64)EPlaybackChange::PlaybackSpeed },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Smartsuit_EPlaybackChange_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Smartsuit,
	nullptr,
	"EPlaybackChange",
	"EPlaybackChange",
	Z_Construct_UEnum_Smartsuit_EPlaybackChange_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Smartsuit_EPlaybackChange_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Smartsuit_EPlaybackChange_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Smartsuit_EPlaybackChange_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Smartsuit_EPlaybackChange()
{
	if (!Z_Registration_Info_UEnum_EPlaybackChange.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPlaybackChange.InnerSingleton, Z_Construct_UEnum_Smartsuit_EPlaybackChange_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPlaybackChange.InnerSingleton;
}
// End Enum EPlaybackChange

// Begin ScriptStruct FRokokoCommandAPI_PlaybackInput
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RokokoCommandAPI_PlaybackInput;
class UScriptStruct* FRokokoCommandAPI_PlaybackInput::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RokokoCommandAPI_PlaybackInput.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RokokoCommandAPI_PlaybackInput.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRokokoCommandAPI_PlaybackInput, (UObject*)Z_Construct_UPackage__Script_Smartsuit(), TEXT("RokokoCommandAPI_PlaybackInput"));
	}
	return Z_Registration_Info_UScriptStruct_RokokoCommandAPI_PlaybackInput.OuterSingleton;
}
template<> SMARTSUIT_API UScriptStruct* StaticStruct<FRokokoCommandAPI_PlaybackInput>()
{
	return FRokokoCommandAPI_PlaybackInput::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRokokoCommandAPI_PlaybackInput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RokokoStudioCommandAPI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsPlaying_MetaData[] = {
		{ "Category", "Rokoko Command API" },
		{ "ModuleRelativePath", "Public/RokokoStudioCommandAPI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentTime_MetaData[] = {
		{ "Category", "Rokoko Command API" },
		{ "ModuleRelativePath", "Public/RokokoStudioCommandAPI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlaybackSpeed_MetaData[] = {
		{ "Category", "Rokoko Command API" },
		{ "ModuleRelativePath", "Public/RokokoStudioCommandAPI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChangeFlags_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "EPlaybackChange" },
		{ "Category", "Rokoko Command API" },
		{ "ModuleRelativePath", "Public/RokokoStudioCommandAPI.h" },
	};
#endif // WITH_METADATA
	static void NewProp_IsPlaying_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsPlaying;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_CurrentTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PlaybackSpeed;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ChangeFlags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRokokoCommandAPI_PlaybackInput>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FRokokoCommandAPI_PlaybackInput_Statics::NewProp_IsPlaying_SetBit(void* Obj)
{
	((FRokokoCommandAPI_PlaybackInput*)Obj)->IsPlaying = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRokokoCommandAPI_PlaybackInput_Statics::NewProp_IsPlaying = { "IsPlaying", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRokokoCommandAPI_PlaybackInput), &Z_Construct_UScriptStruct_FRokokoCommandAPI_PlaybackInput_Statics::NewProp_IsPlaying_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsPlaying_MetaData), NewProp_IsPlaying_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FRokokoCommandAPI_PlaybackInput_Statics::NewProp_CurrentTime = { "CurrentTime", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRokokoCommandAPI_PlaybackInput, CurrentTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentTime_MetaData), NewProp_CurrentTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRokokoCommandAPI_PlaybackInput_Statics::NewProp_PlaybackSpeed = { "PlaybackSpeed", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRokokoCommandAPI_PlaybackInput, PlaybackSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlaybackSpeed_MetaData), NewProp_PlaybackSpeed_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRokokoCommandAPI_PlaybackInput_Statics::NewProp_ChangeFlags = { "ChangeFlags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRokokoCommandAPI_PlaybackInput, ChangeFlags), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChangeFlags_MetaData), NewProp_ChangeFlags_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRokokoCommandAPI_PlaybackInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRokokoCommandAPI_PlaybackInput_Statics::NewProp_IsPlaying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRokokoCommandAPI_PlaybackInput_Statics::NewProp_CurrentTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRokokoCommandAPI_PlaybackInput_Statics::NewProp_PlaybackSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRokokoCommandAPI_PlaybackInput_Statics::NewProp_ChangeFlags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRokokoCommandAPI_PlaybackInput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRokokoCommandAPI_PlaybackInput_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Smartsuit,
	nullptr,
	&NewStructOps,
	"RokokoCommandAPI_PlaybackInput",
	Z_Construct_UScriptStruct_FRokokoCommandAPI_PlaybackInput_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRokokoCommandAPI_PlaybackInput_Statics::PropPointers),
	sizeof(FRokokoCommandAPI_PlaybackInput),
	alignof(FRokokoCommandAPI_PlaybackInput),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRokokoCommandAPI_PlaybackInput_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRokokoCommandAPI_PlaybackInput_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRokokoCommandAPI_PlaybackInput()
{
	if (!Z_Registration_Info_UScriptStruct_RokokoCommandAPI_PlaybackInput.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RokokoCommandAPI_PlaybackInput.InnerSingleton, Z_Construct_UScriptStruct_FRokokoCommandAPI_PlaybackInput_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RokokoCommandAPI_PlaybackInput.InnerSingleton;
}
// End ScriptStruct FRokokoCommandAPI_PlaybackInput

// Begin Delegate FOnCompletedRequest
struct Z_Construct_UDelegateFunction_Smartsuit_OnCompletedRequest__DelegateSignature_Statics
{
	struct _Script_Smartsuit_eventOnCompletedRequest_Parms
	{
		int32 ResponseCode;
		FString ResponseContentString;
		bool bSucceeded;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RokokoStudioCommandAPI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResponseContentString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ResponseCode;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ResponseContentString;
	static void NewProp_bSucceeded_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSucceeded;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_Smartsuit_OnCompletedRequest__DelegateSignature_Statics::NewProp_ResponseCode = { "ResponseCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Smartsuit_eventOnCompletedRequest_Parms, ResponseCode), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_Smartsuit_OnCompletedRequest__DelegateSignature_Statics::NewProp_ResponseContentString = { "ResponseContentString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Smartsuit_eventOnCompletedRequest_Parms, ResponseContentString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResponseContentString_MetaData), NewProp_ResponseContentString_MetaData) };
void Z_Construct_UDelegateFunction_Smartsuit_OnCompletedRequest__DelegateSignature_Statics::NewProp_bSucceeded_SetBit(void* Obj)
{
	((_Script_Smartsuit_eventOnCompletedRequest_Parms*)Obj)->bSucceeded = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_Smartsuit_OnCompletedRequest__DelegateSignature_Statics::NewProp_bSucceeded = { "bSucceeded", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_Smartsuit_eventOnCompletedRequest_Parms), &Z_Construct_UDelegateFunction_Smartsuit_OnCompletedRequest__DelegateSignature_Statics::NewProp_bSucceeded_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Smartsuit_OnCompletedRequest__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Smartsuit_OnCompletedRequest__DelegateSignature_Statics::NewProp_ResponseCode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Smartsuit_OnCompletedRequest__DelegateSignature_Statics::NewProp_ResponseContentString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Smartsuit_OnCompletedRequest__DelegateSignature_Statics::NewProp_bSucceeded,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Smartsuit_OnCompletedRequest__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Smartsuit_OnCompletedRequest__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Smartsuit, nullptr, "OnCompletedRequest__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Smartsuit_OnCompletedRequest__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Smartsuit_OnCompletedRequest__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Smartsuit_OnCompletedRequest__DelegateSignature_Statics::_Script_Smartsuit_eventOnCompletedRequest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Smartsuit_OnCompletedRequest__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Smartsuit_OnCompletedRequest__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_Smartsuit_OnCompletedRequest__DelegateSignature_Statics::_Script_Smartsuit_eventOnCompletedRequest_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Smartsuit_OnCompletedRequest__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Smartsuit_OnCompletedRequest__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnCompletedRequest_DelegateWrapper(const FMulticastScriptDelegate& OnCompletedRequest, int32 ResponseCode, const FString& ResponseContentString, bool bSucceeded)
{
	struct _Script_Smartsuit_eventOnCompletedRequest_Parms
	{
		int32 ResponseCode;
		FString ResponseContentString;
		bool bSucceeded;
	};
	_Script_Smartsuit_eventOnCompletedRequest_Parms Parms;
	Parms.ResponseCode=ResponseCode;
	Parms.ResponseContentString=ResponseContentString;
	Parms.bSucceeded=bSucceeded ? true : false;
	OnCompletedRequest.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnCompletedRequest

// Begin Delegate FOnInfoRequest
struct Z_Construct_UDelegateFunction_Smartsuit_OnInfoRequest__DelegateSignature_Statics
{
	struct _Script_Smartsuit_eventOnInfoRequest_Parms
	{
		TArray<FString> Devices;
		TArray<FString> Clips;
		TArray<FString> Actors;
		TArray<FString> Characters;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RokokoStudioCommandAPI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Devices_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Clips_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Actors_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Characters_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Devices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Devices;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Clips_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Clips;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Actors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Actors;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Characters_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Characters;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_Smartsuit_OnInfoRequest__DelegateSignature_Statics::NewProp_Devices_Inner = { "Devices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_Smartsuit_OnInfoRequest__DelegateSignature_Statics::NewProp_Devices = { "Devices", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Smartsuit_eventOnInfoRequest_Parms, Devices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Devices_MetaData), NewProp_Devices_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_Smartsuit_OnInfoRequest__DelegateSignature_Statics::NewProp_Clips_Inner = { "Clips", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_Smartsuit_OnInfoRequest__DelegateSignature_Statics::NewProp_Clips = { "Clips", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Smartsuit_eventOnInfoRequest_Parms, Clips), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Clips_MetaData), NewProp_Clips_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_Smartsuit_OnInfoRequest__DelegateSignature_Statics::NewProp_Actors_Inner = { "Actors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_Smartsuit_OnInfoRequest__DelegateSignature_Statics::NewProp_Actors = { "Actors", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Smartsuit_eventOnInfoRequest_Parms, Actors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Actors_MetaData), NewProp_Actors_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_Smartsuit_OnInfoRequest__DelegateSignature_Statics::NewProp_Characters_Inner = { "Characters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_Smartsuit_OnInfoRequest__DelegateSignature_Statics::NewProp_Characters = { "Characters", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Smartsuit_eventOnInfoRequest_Parms, Characters), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Characters_MetaData), NewProp_Characters_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Smartsuit_OnInfoRequest__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Smartsuit_OnInfoRequest__DelegateSignature_Statics::NewProp_Devices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Smartsuit_OnInfoRequest__DelegateSignature_Statics::NewProp_Devices,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Smartsuit_OnInfoRequest__DelegateSignature_Statics::NewProp_Clips_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Smartsuit_OnInfoRequest__DelegateSignature_Statics::NewProp_Clips,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Smartsuit_OnInfoRequest__DelegateSignature_Statics::NewProp_Actors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Smartsuit_OnInfoRequest__DelegateSignature_Statics::NewProp_Actors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Smartsuit_OnInfoRequest__DelegateSignature_Statics::NewProp_Characters_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Smartsuit_OnInfoRequest__DelegateSignature_Statics::NewProp_Characters,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Smartsuit_OnInfoRequest__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Smartsuit_OnInfoRequest__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Smartsuit, nullptr, "OnInfoRequest__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Smartsuit_OnInfoRequest__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Smartsuit_OnInfoRequest__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Smartsuit_OnInfoRequest__DelegateSignature_Statics::_Script_Smartsuit_eventOnInfoRequest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Smartsuit_OnInfoRequest__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Smartsuit_OnInfoRequest__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_Smartsuit_OnInfoRequest__DelegateSignature_Statics::_Script_Smartsuit_eventOnInfoRequest_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Smartsuit_OnInfoRequest__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Smartsuit_OnInfoRequest__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnInfoRequest_DelegateWrapper(const FMulticastScriptDelegate& OnInfoRequest, TArray<FString> const& Devices, TArray<FString> const& Clips, TArray<FString> const& Actors, TArray<FString> const& Characters)
{
	struct _Script_Smartsuit_eventOnInfoRequest_Parms
	{
		TArray<FString> Devices;
		TArray<FString> Clips;
		TArray<FString> Actors;
		TArray<FString> Characters;
	};
	_Script_Smartsuit_eventOnInfoRequest_Parms Parms;
	Parms.Devices=Devices;
	Parms.Clips=Clips;
	Parms.Actors=Actors;
	Parms.Characters=Characters;
	OnInfoRequest.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnInfoRequest

// Begin Delegate FOnTrackerRequest
struct Z_Construct_UDelegateFunction_Smartsuit_OnTrackerRequest__DelegateSignature_Statics
{
	struct _Script_Smartsuit_eventOnTrackerRequest_Parms
	{
		FVector Position;
		FQuat Rotation;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RokokoStudioCommandAPI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Smartsuit_OnTrackerRequest__DelegateSignature_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Smartsuit_eventOnTrackerRequest_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Smartsuit_OnTrackerRequest__DelegateSignature_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Smartsuit_eventOnTrackerRequest_Parms, Rotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Smartsuit_OnTrackerRequest__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Smartsuit_OnTrackerRequest__DelegateSignature_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Smartsuit_OnTrackerRequest__DelegateSignature_Statics::NewProp_Rotation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Smartsuit_OnTrackerRequest__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Smartsuit_OnTrackerRequest__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Smartsuit, nullptr, "OnTrackerRequest__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Smartsuit_OnTrackerRequest__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Smartsuit_OnTrackerRequest__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Smartsuit_OnTrackerRequest__DelegateSignature_Statics::_Script_Smartsuit_eventOnTrackerRequest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Smartsuit_OnTrackerRequest__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Smartsuit_OnTrackerRequest__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_Smartsuit_OnTrackerRequest__DelegateSignature_Statics::_Script_Smartsuit_eventOnTrackerRequest_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Smartsuit_OnTrackerRequest__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Smartsuit_OnTrackerRequest__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnTrackerRequest_DelegateWrapper(const FMulticastScriptDelegate& OnTrackerRequest, FVector Position, FQuat Rotation)
{
	struct _Script_Smartsuit_eventOnTrackerRequest_Parms
	{
		FVector Position;
		FQuat Rotation;
	};
	_Script_Smartsuit_eventOnTrackerRequest_Parms Parms;
	Parms.Position=Position;
	Parms.Rotation=Rotation;
	OnTrackerRequest.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnTrackerRequest

// Begin Delegate FOnPlaybackRequest
struct Z_Construct_UDelegateFunction_Smartsuit_OnPlaybackRequest__DelegateSignature_Statics
{
	struct _Script_Smartsuit_eventOnPlaybackRequest_Parms
	{
		double CurrentTime;
		bool IsPlaying;
		double MinTime;
		double MaxTime;
		double PlaybackSpeedMultiplier;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RokokoStudioCommandAPI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_CurrentTime;
	static void NewProp_IsPlaying_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsPlaying;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_MinTime;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_MaxTime;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_PlaybackSpeedMultiplier;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UDelegateFunction_Smartsuit_OnPlaybackRequest__DelegateSignature_Statics::NewProp_CurrentTime = { "CurrentTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Smartsuit_eventOnPlaybackRequest_Parms, CurrentTime), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UDelegateFunction_Smartsuit_OnPlaybackRequest__DelegateSignature_Statics::NewProp_IsPlaying_SetBit(void* Obj)
{
	((_Script_Smartsuit_eventOnPlaybackRequest_Parms*)Obj)->IsPlaying = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_Smartsuit_OnPlaybackRequest__DelegateSignature_Statics::NewProp_IsPlaying = { "IsPlaying", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_Smartsuit_eventOnPlaybackRequest_Parms), &Z_Construct_UDelegateFunction_Smartsuit_OnPlaybackRequest__DelegateSignature_Statics::NewProp_IsPlaying_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UDelegateFunction_Smartsuit_OnPlaybackRequest__DelegateSignature_Statics::NewProp_MinTime = { "MinTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Smartsuit_eventOnPlaybackRequest_Parms, MinTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UDelegateFunction_Smartsuit_OnPlaybackRequest__DelegateSignature_Statics::NewProp_MaxTime = { "MaxTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Smartsuit_eventOnPlaybackRequest_Parms, MaxTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UDelegateFunction_Smartsuit_OnPlaybackRequest__DelegateSignature_Statics::NewProp_PlaybackSpeedMultiplier = { "PlaybackSpeedMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Smartsuit_eventOnPlaybackRequest_Parms, PlaybackSpeedMultiplier), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Smartsuit_OnPlaybackRequest__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Smartsuit_OnPlaybackRequest__DelegateSignature_Statics::NewProp_CurrentTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Smartsuit_OnPlaybackRequest__DelegateSignature_Statics::NewProp_IsPlaying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Smartsuit_OnPlaybackRequest__DelegateSignature_Statics::NewProp_MinTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Smartsuit_OnPlaybackRequest__DelegateSignature_Statics::NewProp_MaxTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Smartsuit_OnPlaybackRequest__DelegateSignature_Statics::NewProp_PlaybackSpeedMultiplier,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Smartsuit_OnPlaybackRequest__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Smartsuit_OnPlaybackRequest__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Smartsuit, nullptr, "OnPlaybackRequest__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Smartsuit_OnPlaybackRequest__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Smartsuit_OnPlaybackRequest__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Smartsuit_OnPlaybackRequest__DelegateSignature_Statics::_Script_Smartsuit_eventOnPlaybackRequest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Smartsuit_OnPlaybackRequest__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Smartsuit_OnPlaybackRequest__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_Smartsuit_OnPlaybackRequest__DelegateSignature_Statics::_Script_Smartsuit_eventOnPlaybackRequest_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Smartsuit_OnPlaybackRequest__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Smartsuit_OnPlaybackRequest__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnPlaybackRequest_DelegateWrapper(const FMulticastScriptDelegate& OnPlaybackRequest, double CurrentTime, bool IsPlaying, double MinTime, double MaxTime, double PlaybackSpeedMultiplier)
{
	struct _Script_Smartsuit_eventOnPlaybackRequest_Parms
	{
		double CurrentTime;
		bool IsPlaying;
		double MinTime;
		double MaxTime;
		double PlaybackSpeedMultiplier;
	};
	_Script_Smartsuit_eventOnPlaybackRequest_Parms Parms;
	Parms.CurrentTime=CurrentTime;
	Parms.IsPlaying=IsPlaying ? true : false;
	Parms.MinTime=MinTime;
	Parms.MaxTime=MaxTime;
	Parms.PlaybackSpeedMultiplier=PlaybackSpeedMultiplier;
	OnPlaybackRequest.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnPlaybackRequest

// Begin Class URokokoStudioCommandAPI Function Calibrate
struct Z_Construct_UFunction_URokokoStudioCommandAPI_Calibrate_Statics
{
	struct RokokoStudioCommandAPI_eventCalibrate_Parms
	{
		FRokokoCommandAPI_IPInfo IPInfo;
		FRokokoCommandAPI_CalibrateInput Params;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Rokoko Command API" },
		{ "ModuleRelativePath", "Public/RokokoStudioCommandAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Request a given actor calibration" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IPInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Params_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_IPInfo;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Params;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URokokoStudioCommandAPI_Calibrate_Statics::NewProp_IPInfo = { "IPInfo", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RokokoStudioCommandAPI_eventCalibrate_Parms, IPInfo), Z_Construct_UScriptStruct_FRokokoCommandAPI_IPInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IPInfo_MetaData), NewProp_IPInfo_MetaData) }; // 1275888216
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URokokoStudioCommandAPI_Calibrate_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RokokoStudioCommandAPI_eventCalibrate_Parms, Params), Z_Construct_UScriptStruct_FRokokoCommandAPI_CalibrateInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Params_MetaData), NewProp_Params_MetaData) }; // 1462261905
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URokokoStudioCommandAPI_Calibrate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URokokoStudioCommandAPI_Calibrate_Statics::NewProp_IPInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URokokoStudioCommandAPI_Calibrate_Statics::NewProp_Params,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URokokoStudioCommandAPI_Calibrate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URokokoStudioCommandAPI_Calibrate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URokokoStudioCommandAPI, nullptr, "Calibrate", nullptr, nullptr, Z_Construct_UFunction_URokokoStudioCommandAPI_Calibrate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URokokoStudioCommandAPI_Calibrate_Statics::PropPointers), sizeof(Z_Construct_UFunction_URokokoStudioCommandAPI_Calibrate_Statics::RokokoStudioCommandAPI_eventCalibrate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URokokoStudioCommandAPI_Calibrate_Statics::Function_MetaDataParams), Z_Construct_UFunction_URokokoStudioCommandAPI_Calibrate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URokokoStudioCommandAPI_Calibrate_Statics::RokokoStudioCommandAPI_eventCalibrate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URokokoStudioCommandAPI_Calibrate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URokokoStudioCommandAPI_Calibrate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URokokoStudioCommandAPI::execCalibrate)
{
	P_GET_STRUCT_REF(FRokokoCommandAPI_IPInfo,Z_Param_Out_IPInfo);
	P_GET_STRUCT_REF(FRokokoCommandAPI_CalibrateInput,Z_Param_Out_Params);
	P_FINISH;
	P_NATIVE_BEGIN;
	URokokoStudioCommandAPI::Calibrate(Z_Param_Out_IPInfo,Z_Param_Out_Params);
	P_NATIVE_END;
}
// End Class URokokoStudioCommandAPI Function Calibrate

// Begin Class URokokoStudioCommandAPI Function GetDefaultIPInfo
struct Z_Construct_UFunction_URokokoStudioCommandAPI_GetDefaultIPInfo_Statics
{
	struct RokokoStudioCommandAPI_eventGetDefaultIPInfo_Parms
	{
		FRokokoCommandAPI_IPInfo ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Rokoko Command API" },
		{ "ModuleRelativePath", "Public/RokokoStudioCommandAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns a default configuration for a command api calls" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URokokoStudioCommandAPI_GetDefaultIPInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RokokoStudioCommandAPI_eventGetDefaultIPInfo_Parms, ReturnValue), Z_Construct_UScriptStruct_FRokokoCommandAPI_IPInfo, METADATA_PARAMS(0, nullptr) }; // 1275888216
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URokokoStudioCommandAPI_GetDefaultIPInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URokokoStudioCommandAPI_GetDefaultIPInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URokokoStudioCommandAPI_GetDefaultIPInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URokokoStudioCommandAPI_GetDefaultIPInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URokokoStudioCommandAPI, nullptr, "GetDefaultIPInfo", nullptr, nullptr, Z_Construct_UFunction_URokokoStudioCommandAPI_GetDefaultIPInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URokokoStudioCommandAPI_GetDefaultIPInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_URokokoStudioCommandAPI_GetDefaultIPInfo_Statics::RokokoStudioCommandAPI_eventGetDefaultIPInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URokokoStudioCommandAPI_GetDefaultIPInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_URokokoStudioCommandAPI_GetDefaultIPInfo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URokokoStudioCommandAPI_GetDefaultIPInfo_Statics::RokokoStudioCommandAPI_eventGetDefaultIPInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URokokoStudioCommandAPI_GetDefaultIPInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URokokoStudioCommandAPI_GetDefaultIPInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URokokoStudioCommandAPI::execGetDefaultIPInfo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRokokoCommandAPI_IPInfo*)Z_Param__Result=URokokoStudioCommandAPI::GetDefaultIPInfo();
	P_NATIVE_END;
}
// End Class URokokoStudioCommandAPI Function GetDefaultIPInfo

// Begin Class URokokoStudioCommandAPI Function Info
struct Z_Construct_UFunction_URokokoStudioCommandAPI_Info_Statics
{
	struct RokokoStudioCommandAPI_eventInfo_Parms
	{
		FRokokoCommandAPI_IPInfo IPInfo;
		bool ShouldIncludeDevices;
		bool ShouldIncludeClips;
		bool ShouldIncludeActors;
		bool ShouldIncludeCharacters;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Rokoko Command API" },
		{ "ModuleRelativePath", "Public/RokokoStudioCommandAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Request info about scene clips, input devices, actors, etc." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IPInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_IPInfo;
	static void NewProp_ShouldIncludeDevices_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ShouldIncludeDevices;
	static void NewProp_ShouldIncludeClips_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ShouldIncludeClips;
	static void NewProp_ShouldIncludeActors_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ShouldIncludeActors;
	static void NewProp_ShouldIncludeCharacters_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ShouldIncludeCharacters;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URokokoStudioCommandAPI_Info_Statics::NewProp_IPInfo = { "IPInfo", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RokokoStudioCommandAPI_eventInfo_Parms, IPInfo), Z_Construct_UScriptStruct_FRokokoCommandAPI_IPInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IPInfo_MetaData), NewProp_IPInfo_MetaData) }; // 1275888216
void Z_Construct_UFunction_URokokoStudioCommandAPI_Info_Statics::NewProp_ShouldIncludeDevices_SetBit(void* Obj)
{
	((RokokoStudioCommandAPI_eventInfo_Parms*)Obj)->ShouldIncludeDevices = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URokokoStudioCommandAPI_Info_Statics::NewProp_ShouldIncludeDevices = { "ShouldIncludeDevices", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RokokoStudioCommandAPI_eventInfo_Parms), &Z_Construct_UFunction_URokokoStudioCommandAPI_Info_Statics::NewProp_ShouldIncludeDevices_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URokokoStudioCommandAPI_Info_Statics::NewProp_ShouldIncludeClips_SetBit(void* Obj)
{
	((RokokoStudioCommandAPI_eventInfo_Parms*)Obj)->ShouldIncludeClips = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URokokoStudioCommandAPI_Info_Statics::NewProp_ShouldIncludeClips = { "ShouldIncludeClips", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RokokoStudioCommandAPI_eventInfo_Parms), &Z_Construct_UFunction_URokokoStudioCommandAPI_Info_Statics::NewProp_ShouldIncludeClips_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URokokoStudioCommandAPI_Info_Statics::NewProp_ShouldIncludeActors_SetBit(void* Obj)
{
	((RokokoStudioCommandAPI_eventInfo_Parms*)Obj)->ShouldIncludeActors = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URokokoStudioCommandAPI_Info_Statics::NewProp_ShouldIncludeActors = { "ShouldIncludeActors", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RokokoStudioCommandAPI_eventInfo_Parms), &Z_Construct_UFunction_URokokoStudioCommandAPI_Info_Statics::NewProp_ShouldIncludeActors_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URokokoStudioCommandAPI_Info_Statics::NewProp_ShouldIncludeCharacters_SetBit(void* Obj)
{
	((RokokoStudioCommandAPI_eventInfo_Parms*)Obj)->ShouldIncludeCharacters = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URokokoStudioCommandAPI_Info_Statics::NewProp_ShouldIncludeCharacters = { "ShouldIncludeCharacters", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RokokoStudioCommandAPI_eventInfo_Parms), &Z_Construct_UFunction_URokokoStudioCommandAPI_Info_Statics::NewProp_ShouldIncludeCharacters_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URokokoStudioCommandAPI_Info_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URokokoStudioCommandAPI_Info_Statics::NewProp_IPInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URokokoStudioCommandAPI_Info_Statics::NewProp_ShouldIncludeDevices,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URokokoStudioCommandAPI_Info_Statics::NewProp_ShouldIncludeClips,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URokokoStudioCommandAPI_Info_Statics::NewProp_ShouldIncludeActors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URokokoStudioCommandAPI_Info_Statics::NewProp_ShouldIncludeCharacters,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URokokoStudioCommandAPI_Info_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URokokoStudioCommandAPI_Info_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URokokoStudioCommandAPI, nullptr, "Info", nullptr, nullptr, Z_Construct_UFunction_URokokoStudioCommandAPI_Info_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URokokoStudioCommandAPI_Info_Statics::PropPointers), sizeof(Z_Construct_UFunction_URokokoStudioCommandAPI_Info_Statics::RokokoStudioCommandAPI_eventInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URokokoStudioCommandAPI_Info_Statics::Function_MetaDataParams), Z_Construct_UFunction_URokokoStudioCommandAPI_Info_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URokokoStudioCommandAPI_Info_Statics::RokokoStudioCommandAPI_eventInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URokokoStudioCommandAPI_Info()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URokokoStudioCommandAPI_Info_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URokokoStudioCommandAPI::execInfo)
{
	P_GET_STRUCT_REF(FRokokoCommandAPI_IPInfo,Z_Param_Out_IPInfo);
	P_GET_UBOOL(Z_Param_ShouldIncludeDevices);
	P_GET_UBOOL(Z_Param_ShouldIncludeClips);
	P_GET_UBOOL(Z_Param_ShouldIncludeActors);
	P_GET_UBOOL(Z_Param_ShouldIncludeCharacters);
	P_FINISH;
	P_NATIVE_BEGIN;
	URokokoStudioCommandAPI::Info(Z_Param_Out_IPInfo,Z_Param_ShouldIncludeDevices,Z_Param_ShouldIncludeClips,Z_Param_ShouldIncludeActors,Z_Param_ShouldIncludeCharacters);
	P_NATIVE_END;
}
// End Class URokokoStudioCommandAPI Function Info

// Begin Class URokokoStudioCommandAPI Function Livestream
struct Z_Construct_UFunction_URokokoStudioCommandAPI_Livestream_Statics
{
	struct RokokoStudioCommandAPI_eventLivestream_Parms
	{
		FRokokoCommandAPI_IPInfo IPInfo;
		bool ShouldLiveStream;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Rokoko Command API" },
		{ "ModuleRelativePath", "Public/RokokoStudioCommandAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Take control over the custom live stream enabled state" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IPInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_IPInfo;
	static void NewProp_ShouldLiveStream_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ShouldLiveStream;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URokokoStudioCommandAPI_Livestream_Statics::NewProp_IPInfo = { "IPInfo", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RokokoStudioCommandAPI_eventLivestream_Parms, IPInfo), Z_Construct_UScriptStruct_FRokokoCommandAPI_IPInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IPInfo_MetaData), NewProp_IPInfo_MetaData) }; // 1275888216
void Z_Construct_UFunction_URokokoStudioCommandAPI_Livestream_Statics::NewProp_ShouldLiveStream_SetBit(void* Obj)
{
	((RokokoStudioCommandAPI_eventLivestream_Parms*)Obj)->ShouldLiveStream = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URokokoStudioCommandAPI_Livestream_Statics::NewProp_ShouldLiveStream = { "ShouldLiveStream", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RokokoStudioCommandAPI_eventLivestream_Parms), &Z_Construct_UFunction_URokokoStudioCommandAPI_Livestream_Statics::NewProp_ShouldLiveStream_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URokokoStudioCommandAPI_Livestream_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URokokoStudioCommandAPI_Livestream_Statics::NewProp_IPInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URokokoStudioCommandAPI_Livestream_Statics::NewProp_ShouldLiveStream,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URokokoStudioCommandAPI_Livestream_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URokokoStudioCommandAPI_Livestream_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URokokoStudioCommandAPI, nullptr, "Livestream", nullptr, nullptr, Z_Construct_UFunction_URokokoStudioCommandAPI_Livestream_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URokokoStudioCommandAPI_Livestream_Statics::PropPointers), sizeof(Z_Construct_UFunction_URokokoStudioCommandAPI_Livestream_Statics::RokokoStudioCommandAPI_eventLivestream_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URokokoStudioCommandAPI_Livestream_Statics::Function_MetaDataParams), Z_Construct_UFunction_URokokoStudioCommandAPI_Livestream_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URokokoStudioCommandAPI_Livestream_Statics::RokokoStudioCommandAPI_eventLivestream_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URokokoStudioCommandAPI_Livestream()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URokokoStudioCommandAPI_Livestream_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URokokoStudioCommandAPI::execLivestream)
{
	P_GET_STRUCT_REF(FRokokoCommandAPI_IPInfo,Z_Param_Out_IPInfo);
	P_GET_UBOOL(Z_Param_ShouldLiveStream);
	P_FINISH;
	P_NATIVE_BEGIN;
	URokokoStudioCommandAPI::Livestream(Z_Param_Out_IPInfo,Z_Param_ShouldLiveStream);
	P_NATIVE_END;
}
// End Class URokokoStudioCommandAPI Function Livestream

// Begin Class URokokoStudioCommandAPI Function Playback
struct Z_Construct_UFunction_URokokoStudioCommandAPI_Playback_Statics
{
	struct RokokoStudioCommandAPI_eventPlayback_Parms
	{
		FRokokoCommandAPI_IPInfo IPInfo;
		FRokokoCommandAPI_PlaybackInput Params;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Rokoko Command API" },
		{ "ModuleRelativePath", "Public/RokokoStudioCommandAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Take control over the scene timeline playback" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IPInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Params_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_IPInfo;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Params;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URokokoStudioCommandAPI_Playback_Statics::NewProp_IPInfo = { "IPInfo", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RokokoStudioCommandAPI_eventPlayback_Parms, IPInfo), Z_Construct_UScriptStruct_FRokokoCommandAPI_IPInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IPInfo_MetaData), NewProp_IPInfo_MetaData) }; // 1275888216
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URokokoStudioCommandAPI_Playback_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RokokoStudioCommandAPI_eventPlayback_Parms, Params), Z_Construct_UScriptStruct_FRokokoCommandAPI_PlaybackInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Params_MetaData), NewProp_Params_MetaData) }; // 2520015867
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URokokoStudioCommandAPI_Playback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URokokoStudioCommandAPI_Playback_Statics::NewProp_IPInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URokokoStudioCommandAPI_Playback_Statics::NewProp_Params,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URokokoStudioCommandAPI_Playback_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URokokoStudioCommandAPI_Playback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URokokoStudioCommandAPI, nullptr, "Playback", nullptr, nullptr, Z_Construct_UFunction_URokokoStudioCommandAPI_Playback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URokokoStudioCommandAPI_Playback_Statics::PropPointers), sizeof(Z_Construct_UFunction_URokokoStudioCommandAPI_Playback_Statics::RokokoStudioCommandAPI_eventPlayback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URokokoStudioCommandAPI_Playback_Statics::Function_MetaDataParams), Z_Construct_UFunction_URokokoStudioCommandAPI_Playback_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URokokoStudioCommandAPI_Playback_Statics::RokokoStudioCommandAPI_eventPlayback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URokokoStudioCommandAPI_Playback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URokokoStudioCommandAPI_Playback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URokokoStudioCommandAPI::execPlayback)
{
	P_GET_STRUCT_REF(FRokokoCommandAPI_IPInfo,Z_Param_Out_IPInfo);
	P_GET_STRUCT_REF(FRokokoCommandAPI_PlaybackInput,Z_Param_Out_Params);
	P_FINISH;
	P_NATIVE_BEGIN;
	URokokoStudioCommandAPI::Playback(Z_Param_Out_IPInfo,Z_Param_Out_Params);
	P_NATIVE_END;
}
// End Class URokokoStudioCommandAPI Function Playback

// Begin Class URokokoStudioCommandAPI Function ResetActor
struct Z_Construct_UFunction_URokokoStudioCommandAPI_ResetActor_Statics
{
	struct RokokoStudioCommandAPI_eventResetActor_Parms
	{
		FRokokoCommandAPI_IPInfo IPInfo;
		FString ActorName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Rokoko Command API" },
		{ "ModuleRelativePath", "Public/RokokoStudioCommandAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Request a given actor reset to a root position" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IPInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_IPInfo;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ActorName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URokokoStudioCommandAPI_ResetActor_Statics::NewProp_IPInfo = { "IPInfo", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RokokoStudioCommandAPI_eventResetActor_Parms, IPInfo), Z_Construct_UScriptStruct_FRokokoCommandAPI_IPInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IPInfo_MetaData), NewProp_IPInfo_MetaData) }; // 1275888216
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URokokoStudioCommandAPI_ResetActor_Statics::NewProp_ActorName = { "ActorName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RokokoStudioCommandAPI_eventResetActor_Parms, ActorName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorName_MetaData), NewProp_ActorName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URokokoStudioCommandAPI_ResetActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URokokoStudioCommandAPI_ResetActor_Statics::NewProp_IPInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URokokoStudioCommandAPI_ResetActor_Statics::NewProp_ActorName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URokokoStudioCommandAPI_ResetActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URokokoStudioCommandAPI_ResetActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URokokoStudioCommandAPI, nullptr, "ResetActor", nullptr, nullptr, Z_Construct_UFunction_URokokoStudioCommandAPI_ResetActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URokokoStudioCommandAPI_ResetActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_URokokoStudioCommandAPI_ResetActor_Statics::RokokoStudioCommandAPI_eventResetActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URokokoStudioCommandAPI_ResetActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_URokokoStudioCommandAPI_ResetActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URokokoStudioCommandAPI_ResetActor_Statics::RokokoStudioCommandAPI_eventResetActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URokokoStudioCommandAPI_ResetActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URokokoStudioCommandAPI_ResetActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URokokoStudioCommandAPI::execResetActor)
{
	P_GET_STRUCT_REF(FRokokoCommandAPI_IPInfo,Z_Param_Out_IPInfo);
	P_GET_PROPERTY(FStrProperty,Z_Param_ActorName);
	P_FINISH;
	P_NATIVE_BEGIN;
	URokokoStudioCommandAPI::ResetActor(Z_Param_Out_IPInfo,Z_Param_ActorName);
	P_NATIVE_END;
}
// End Class URokokoStudioCommandAPI Function ResetActor

// Begin Class URokokoStudioCommandAPI Function Restart
struct Z_Construct_UFunction_URokokoStudioCommandAPI_Restart_Statics
{
	struct RokokoStudioCommandAPI_eventRestart_Parms
	{
		FRokokoCommandAPI_IPInfo IPInfo;
		FString SmartSuitName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Rokoko Command API" },
		{ "ModuleRelativePath", "Public/RokokoStudioCommandAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Request a given actor restart operation" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IPInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SmartSuitName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_IPInfo;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SmartSuitName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URokokoStudioCommandAPI_Restart_Statics::NewProp_IPInfo = { "IPInfo", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RokokoStudioCommandAPI_eventRestart_Parms, IPInfo), Z_Construct_UScriptStruct_FRokokoCommandAPI_IPInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IPInfo_MetaData), NewProp_IPInfo_MetaData) }; // 1275888216
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URokokoStudioCommandAPI_Restart_Statics::NewProp_SmartSuitName = { "SmartSuitName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RokokoStudioCommandAPI_eventRestart_Parms, SmartSuitName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SmartSuitName_MetaData), NewProp_SmartSuitName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URokokoStudioCommandAPI_Restart_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URokokoStudioCommandAPI_Restart_Statics::NewProp_IPInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URokokoStudioCommandAPI_Restart_Statics::NewProp_SmartSuitName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URokokoStudioCommandAPI_Restart_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URokokoStudioCommandAPI_Restart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URokokoStudioCommandAPI, nullptr, "Restart", nullptr, nullptr, Z_Construct_UFunction_URokokoStudioCommandAPI_Restart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URokokoStudioCommandAPI_Restart_Statics::PropPointers), sizeof(Z_Construct_UFunction_URokokoStudioCommandAPI_Restart_Statics::RokokoStudioCommandAPI_eventRestart_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URokokoStudioCommandAPI_Restart_Statics::Function_MetaDataParams), Z_Construct_UFunction_URokokoStudioCommandAPI_Restart_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URokokoStudioCommandAPI_Restart_Statics::RokokoStudioCommandAPI_eventRestart_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URokokoStudioCommandAPI_Restart()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URokokoStudioCommandAPI_Restart_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URokokoStudioCommandAPI::execRestart)
{
	P_GET_STRUCT_REF(FRokokoCommandAPI_IPInfo,Z_Param_Out_IPInfo);
	P_GET_PROPERTY(FStrProperty,Z_Param_SmartSuitName);
	P_FINISH;
	P_NATIVE_BEGIN;
	URokokoStudioCommandAPI::Restart(Z_Param_Out_IPInfo,Z_Param_SmartSuitName);
	P_NATIVE_END;
}
// End Class URokokoStudioCommandAPI Function Restart

// Begin Class URokokoStudioCommandAPI Function StartRecording
struct Z_Construct_UFunction_URokokoStudioCommandAPI_StartRecording_Statics
{
	struct FTimecode
	{
		int32 Hours;
		int32 Minutes;
		int32 Seconds;
		int32 Frames;
		bool bDropFrameFormat;
	};

	struct RokokoStudioCommandAPI_eventStartRecording_Parms
	{
		FRokokoCommandAPI_IPInfo IPInfo;
		FString FileName;
		FTimecode StartTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Rokoko Command API" },
		{ "ModuleRelativePath", "Public/RokokoStudioCommandAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Request a recording start" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IPInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FileName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_IPInfo;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URokokoStudioCommandAPI_StartRecording_Statics::NewProp_IPInfo = { "IPInfo", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RokokoStudioCommandAPI_eventStartRecording_Parms, IPInfo), Z_Construct_UScriptStruct_FRokokoCommandAPI_IPInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IPInfo_MetaData), NewProp_IPInfo_MetaData) }; // 1275888216
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URokokoStudioCommandAPI_StartRecording_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RokokoStudioCommandAPI_eventStartRecording_Parms, FileName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FileName_MetaData), NewProp_FileName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URokokoStudioCommandAPI_StartRecording_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RokokoStudioCommandAPI_eventStartRecording_Parms, StartTime), Z_Construct_UScriptStruct_FTimecode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartTime_MetaData), NewProp_StartTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URokokoStudioCommandAPI_StartRecording_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URokokoStudioCommandAPI_StartRecording_Statics::NewProp_IPInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URokokoStudioCommandAPI_StartRecording_Statics::NewProp_FileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URokokoStudioCommandAPI_StartRecording_Statics::NewProp_StartTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URokokoStudioCommandAPI_StartRecording_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URokokoStudioCommandAPI_StartRecording_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URokokoStudioCommandAPI, nullptr, "StartRecording", nullptr, nullptr, Z_Construct_UFunction_URokokoStudioCommandAPI_StartRecording_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URokokoStudioCommandAPI_StartRecording_Statics::PropPointers), sizeof(Z_Construct_UFunction_URokokoStudioCommandAPI_StartRecording_Statics::RokokoStudioCommandAPI_eventStartRecording_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URokokoStudioCommandAPI_StartRecording_Statics::Function_MetaDataParams), Z_Construct_UFunction_URokokoStudioCommandAPI_StartRecording_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URokokoStudioCommandAPI_StartRecording_Statics::RokokoStudioCommandAPI_eventStartRecording_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URokokoStudioCommandAPI_StartRecording()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URokokoStudioCommandAPI_StartRecording_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URokokoStudioCommandAPI::execStartRecording)
{
	P_GET_STRUCT_REF(FRokokoCommandAPI_IPInfo,Z_Param_Out_IPInfo);
	P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
	P_GET_STRUCT(FTimecode,Z_Param_StartTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	URokokoStudioCommandAPI::StartRecording(Z_Param_Out_IPInfo,Z_Param_FileName,Z_Param_StartTime);
	P_NATIVE_END;
}
// End Class URokokoStudioCommandAPI Function StartRecording

// Begin Class URokokoStudioCommandAPI Function StopRecording
struct Z_Construct_UFunction_URokokoStudioCommandAPI_StopRecording_Statics
{
	struct FTimecode
	{
		int32 Hours;
		int32 Minutes;
		int32 Seconds;
		int32 Frames;
		bool bDropFrameFormat;
	};

	struct RokokoStudioCommandAPI_eventStopRecording_Parms
	{
		FRokokoCommandAPI_IPInfo IPInfo;
		FTimecode EndTime;
		bool ShouldBackToLive;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Rokoko Command API" },
		{ "ModuleRelativePath", "Public/RokokoStudioCommandAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Request a recording stop" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IPInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_IPInfo;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EndTime;
	static void NewProp_ShouldBackToLive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ShouldBackToLive;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URokokoStudioCommandAPI_StopRecording_Statics::NewProp_IPInfo = { "IPInfo", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RokokoStudioCommandAPI_eventStopRecording_Parms, IPInfo), Z_Construct_UScriptStruct_FRokokoCommandAPI_IPInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IPInfo_MetaData), NewProp_IPInfo_MetaData) }; // 1275888216
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URokokoStudioCommandAPI_StopRecording_Statics::NewProp_EndTime = { "EndTime", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RokokoStudioCommandAPI_eventStopRecording_Parms, EndTime), Z_Construct_UScriptStruct_FTimecode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndTime_MetaData), NewProp_EndTime_MetaData) };
void Z_Construct_UFunction_URokokoStudioCommandAPI_StopRecording_Statics::NewProp_ShouldBackToLive_SetBit(void* Obj)
{
	((RokokoStudioCommandAPI_eventStopRecording_Parms*)Obj)->ShouldBackToLive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URokokoStudioCommandAPI_StopRecording_Statics::NewProp_ShouldBackToLive = { "ShouldBackToLive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RokokoStudioCommandAPI_eventStopRecording_Parms), &Z_Construct_UFunction_URokokoStudioCommandAPI_StopRecording_Statics::NewProp_ShouldBackToLive_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URokokoStudioCommandAPI_StopRecording_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URokokoStudioCommandAPI_StopRecording_Statics::NewProp_IPInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URokokoStudioCommandAPI_StopRecording_Statics::NewProp_EndTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URokokoStudioCommandAPI_StopRecording_Statics::NewProp_ShouldBackToLive,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URokokoStudioCommandAPI_StopRecording_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URokokoStudioCommandAPI_StopRecording_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URokokoStudioCommandAPI, nullptr, "StopRecording", nullptr, nullptr, Z_Construct_UFunction_URokokoStudioCommandAPI_StopRecording_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URokokoStudioCommandAPI_StopRecording_Statics::PropPointers), sizeof(Z_Construct_UFunction_URokokoStudioCommandAPI_StopRecording_Statics::RokokoStudioCommandAPI_eventStopRecording_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URokokoStudioCommandAPI_StopRecording_Statics::Function_MetaDataParams), Z_Construct_UFunction_URokokoStudioCommandAPI_StopRecording_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URokokoStudioCommandAPI_StopRecording_Statics::RokokoStudioCommandAPI_eventStopRecording_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URokokoStudioCommandAPI_StopRecording()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URokokoStudioCommandAPI_StopRecording_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URokokoStudioCommandAPI::execStopRecording)
{
	P_GET_STRUCT_REF(FRokokoCommandAPI_IPInfo,Z_Param_Out_IPInfo);
	P_GET_STRUCT(FTimecode,Z_Param_EndTime);
	P_GET_UBOOL(Z_Param_ShouldBackToLive);
	P_FINISH;
	P_NATIVE_BEGIN;
	URokokoStudioCommandAPI::StopRecording(Z_Param_Out_IPInfo,Z_Param_EndTime,Z_Param_ShouldBackToLive);
	P_NATIVE_END;
}
// End Class URokokoStudioCommandAPI Function StopRecording

// Begin Class URokokoStudioCommandAPI Function Tracker
struct Z_Construct_UFunction_URokokoStudioCommandAPI_Tracker_Statics
{
	struct RokokoStudioCommandAPI_eventTracker_Parms
	{
		FRokokoCommandAPI_IPInfo IPInfo;
		FRokokoCommandAPI_TrackerInput Params;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Rokoko Command API" },
		{ "ModuleRelativePath", "Public/RokokoStudioCommandAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Request a given actor global position correction" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IPInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Params_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_IPInfo;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Params;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URokokoStudioCommandAPI_Tracker_Statics::NewProp_IPInfo = { "IPInfo", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RokokoStudioCommandAPI_eventTracker_Parms, IPInfo), Z_Construct_UScriptStruct_FRokokoCommandAPI_IPInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IPInfo_MetaData), NewProp_IPInfo_MetaData) }; // 1275888216
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URokokoStudioCommandAPI_Tracker_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RokokoStudioCommandAPI_eventTracker_Parms, Params), Z_Construct_UScriptStruct_FRokokoCommandAPI_TrackerInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Params_MetaData), NewProp_Params_MetaData) }; // 2102004512
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URokokoStudioCommandAPI_Tracker_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URokokoStudioCommandAPI_Tracker_Statics::NewProp_IPInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URokokoStudioCommandAPI_Tracker_Statics::NewProp_Params,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URokokoStudioCommandAPI_Tracker_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URokokoStudioCommandAPI_Tracker_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URokokoStudioCommandAPI, nullptr, "Tracker", nullptr, nullptr, Z_Construct_UFunction_URokokoStudioCommandAPI_Tracker_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URokokoStudioCommandAPI_Tracker_Statics::PropPointers), sizeof(Z_Construct_UFunction_URokokoStudioCommandAPI_Tracker_Statics::RokokoStudioCommandAPI_eventTracker_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URokokoStudioCommandAPI_Tracker_Statics::Function_MetaDataParams), Z_Construct_UFunction_URokokoStudioCommandAPI_Tracker_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URokokoStudioCommandAPI_Tracker_Statics::RokokoStudioCommandAPI_eventTracker_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URokokoStudioCommandAPI_Tracker()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URokokoStudioCommandAPI_Tracker_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URokokoStudioCommandAPI::execTracker)
{
	P_GET_STRUCT_REF(FRokokoCommandAPI_IPInfo,Z_Param_Out_IPInfo);
	P_GET_STRUCT_REF(FRokokoCommandAPI_TrackerInput,Z_Param_Out_Params);
	P_FINISH;
	P_NATIVE_BEGIN;
	URokokoStudioCommandAPI::Tracker(Z_Param_Out_IPInfo,Z_Param_Out_Params);
	P_NATIVE_END;
}
// End Class URokokoStudioCommandAPI Function Tracker

// Begin Class URokokoStudioCommandAPI
void URokokoStudioCommandAPI::StaticRegisterNativesURokokoStudioCommandAPI()
{
	UClass* Class = URokokoStudioCommandAPI::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Calibrate", &URokokoStudioCommandAPI::execCalibrate },
		{ "GetDefaultIPInfo", &URokokoStudioCommandAPI::execGetDefaultIPInfo },
		{ "Info", &URokokoStudioCommandAPI::execInfo },
		{ "Livestream", &URokokoStudioCommandAPI::execLivestream },
		{ "Playback", &URokokoStudioCommandAPI::execPlayback },
		{ "ResetActor", &URokokoStudioCommandAPI::execResetActor },
		{ "Restart", &URokokoStudioCommandAPI::execRestart },
		{ "StartRecording", &URokokoStudioCommandAPI::execStartRecording },
		{ "StopRecording", &URokokoStudioCommandAPI::execStopRecording },
		{ "Tracker", &URokokoStudioCommandAPI::execTracker },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URokokoStudioCommandAPI);
UClass* Z_Construct_UClass_URokokoStudioCommandAPI_NoRegister()
{
	return URokokoStudioCommandAPI::StaticClass();
}
struct Z_Construct_UClass_URokokoStudioCommandAPI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Expose blueprint library of command API communication methods\n *  that could be used to calibrate, start recording, do a global position correct and etc.\n * Communication configuration is defined by FRokokoCommandAPI_IPInfo\n */" },
#endif
		{ "IncludePath", "RokokoStudioCommandAPI.h" },
		{ "ModuleRelativePath", "Public/RokokoStudioCommandAPI.h" },
		{ "ScriptName", "RokokoStudioCommandAPI" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Expose blueprint library of command API communication methods\n that could be used to calibrate, start recording, do a global position correct and etc.\nCommunication configuration is defined by FRokokoCommandAPI_IPInfo" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URokokoStudioCommandAPI_Calibrate, "Calibrate" }, // 1026490491
		{ &Z_Construct_UFunction_URokokoStudioCommandAPI_GetDefaultIPInfo, "GetDefaultIPInfo" }, // 3635549543
		{ &Z_Construct_UFunction_URokokoStudioCommandAPI_Info, "Info" }, // 645467173
		{ &Z_Construct_UFunction_URokokoStudioCommandAPI_Livestream, "Livestream" }, // 1597127934
		{ &Z_Construct_UFunction_URokokoStudioCommandAPI_Playback, "Playback" }, // 4283603748
		{ &Z_Construct_UFunction_URokokoStudioCommandAPI_ResetActor, "ResetActor" }, // 1763496187
		{ &Z_Construct_UFunction_URokokoStudioCommandAPI_Restart, "Restart" }, // 566771784
		{ &Z_Construct_UFunction_URokokoStudioCommandAPI_StartRecording, "StartRecording" }, // 2793559401
		{ &Z_Construct_UFunction_URokokoStudioCommandAPI_StopRecording, "StopRecording" }, // 169626866
		{ &Z_Construct_UFunction_URokokoStudioCommandAPI_Tracker, "Tracker" }, // 1280780296
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URokokoStudioCommandAPI>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_URokokoStudioCommandAPI_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_Smartsuit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URokokoStudioCommandAPI_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URokokoStudioCommandAPI_Statics::ClassParams = {
	&URokokoStudioCommandAPI::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URokokoStudioCommandAPI_Statics::Class_MetaDataParams), Z_Construct_UClass_URokokoStudioCommandAPI_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URokokoStudioCommandAPI()
{
	if (!Z_Registration_Info_UClass_URokokoStudioCommandAPI.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URokokoStudioCommandAPI.OuterSingleton, Z_Construct_UClass_URokokoStudioCommandAPI_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URokokoStudioCommandAPI.OuterSingleton;
}
template<> SMARTSUIT_API UClass* StaticClass<URokokoStudioCommandAPI>()
{
	return URokokoStudioCommandAPI::StaticClass();
}
URokokoStudioCommandAPI::URokokoStudioCommandAPI(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(URokokoStudioCommandAPI);
URokokoStudioCommandAPI::~URokokoStudioCommandAPI() {}
// End Class URokokoStudioCommandAPI

// Begin Registration
struct Z_CompiledInDeferFile_FID_olavu_Documents_Unreal_Projects_AIDrummer_Plugins_Smartsuit_Source_Smartsuit_Public_RokokoStudioCommandAPI_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPlaybackChange_StaticEnum, TEXT("EPlaybackChange"), &Z_Registration_Info_UEnum_EPlaybackChange, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 611139697U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRokokoCommandAPI_IPInfo::StaticStruct, Z_Construct_UScriptStruct_FRokokoCommandAPI_IPInfo_Statics::NewStructOps, TEXT("RokokoCommandAPI_IPInfo"), &Z_Registration_Info_UScriptStruct_RokokoCommandAPI_IPInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRokokoCommandAPI_IPInfo), 1275888216U) },
		{ FRokokoCommandAPI_CalibrateInput::StaticStruct, Z_Construct_UScriptStruct_FRokokoCommandAPI_CalibrateInput_Statics::NewStructOps, TEXT("RokokoCommandAPI_CalibrateInput"), &Z_Registration_Info_UScriptStruct_RokokoCommandAPI_CalibrateInput, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRokokoCommandAPI_CalibrateInput), 1462261905U) },
		{ FRokokoCommandAPI_TrackerInput::StaticStruct, Z_Construct_UScriptStruct_FRokokoCommandAPI_TrackerInput_Statics::NewStructOps, TEXT("RokokoCommandAPI_TrackerInput"), &Z_Registration_Info_UScriptStruct_RokokoCommandAPI_TrackerInput, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRokokoCommandAPI_TrackerInput), 2102004512U) },
		{ FRokokoCommandAPI_PlaybackInput::StaticStruct, Z_Construct_UScriptStruct_FRokokoCommandAPI_PlaybackInput_Statics::NewStructOps, TEXT("RokokoCommandAPI_PlaybackInput"), &Z_Registration_Info_UScriptStruct_RokokoCommandAPI_PlaybackInput, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRokokoCommandAPI_PlaybackInput), 2520015867U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URokokoStudioCommandAPI, URokokoStudioCommandAPI::StaticClass, TEXT("URokokoStudioCommandAPI"), &Z_Registration_Info_UClass_URokokoStudioCommandAPI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URokokoStudioCommandAPI), 4173976950U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_olavu_Documents_Unreal_Projects_AIDrummer_Plugins_Smartsuit_Source_Smartsuit_Public_RokokoStudioCommandAPI_h_1968383290(TEXT("/Script/Smartsuit"),
	Z_CompiledInDeferFile_FID_olavu_Documents_Unreal_Projects_AIDrummer_Plugins_Smartsuit_Source_Smartsuit_Public_RokokoStudioCommandAPI_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_olavu_Documents_Unreal_Projects_AIDrummer_Plugins_Smartsuit_Source_Smartsuit_Public_RokokoStudioCommandAPI_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_olavu_Documents_Unreal_Projects_AIDrummer_Plugins_Smartsuit_Source_Smartsuit_Public_RokokoStudioCommandAPI_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_olavu_Documents_Unreal_Projects_AIDrummer_Plugins_Smartsuit_Source_Smartsuit_Public_RokokoStudioCommandAPI_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_olavu_Documents_Unreal_Projects_AIDrummer_Plugins_Smartsuit_Source_Smartsuit_Public_RokokoStudioCommandAPI_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_olavu_Documents_Unreal_Projects_AIDrummer_Plugins_Smartsuit_Source_Smartsuit_Public_RokokoStudioCommandAPI_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
