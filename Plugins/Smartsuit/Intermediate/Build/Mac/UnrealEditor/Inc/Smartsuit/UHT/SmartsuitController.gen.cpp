// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Smartsuit/Public/SmartsuitController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSmartsuitController() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
SMARTSUIT_API UClass* Z_Construct_UClass_ASmartsuitController();
SMARTSUIT_API UClass* Z_Construct_UClass_ASmartsuitController_NoRegister();
SMARTSUIT_API UScriptStruct* Z_Construct_UScriptStruct_FBodyModel();
UPackage* Z_Construct_UPackage__Script_Smartsuit();
// End Cross Module References

// Begin ScriptStruct FBodyModel
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BodyModel;
class UScriptStruct* FBodyModel::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BodyModel.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BodyModel.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBodyModel, (UObject*)Z_Construct_UPackage__Script_Smartsuit(), TEXT("BodyModel"));
	}
	return Z_Registration_Info_UScriptStruct_BodyModel.OuterSingleton;
}
template<> SMARTSUIT_API UScriptStruct* StaticStruct<FBodyModel>()
{
	return FBodyModel::StaticStruct();
}
struct Z_Construct_UScriptStruct_FBodyModel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SmartsuitController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The BodyModel represents the dimensions of the player that wears the suit. Having this information correct is important for the Smartsuit to perform better." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "Smartsuit" },
		{ "ModuleRelativePath", "Public/SmartsuitController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A friendly name for the BodyProfile." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TotalHeight_MetaData[] = {
		{ "Category", "Smartsuit" },
		{ "ModuleRelativePath", "Public/SmartsuitController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The total height of the player wearing the Smartsuit." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShoulderHeight_MetaData[] = {
		{ "Category", "Smartsuit" },
		{ "ModuleRelativePath", "Public/SmartsuitController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The shoulder height of the player wearing the Smartsuit." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HipHeight_MetaData[] = {
		{ "Category", "Smartsuit" },
		{ "ModuleRelativePath", "Public/SmartsuitController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The hip height of the player wearing the Smartsuit." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HipWidth_MetaData[] = {
		{ "Category", "Smartsuit" },
		{ "ModuleRelativePath", "Public/SmartsuitController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The hip width of the player wearing the Smartsuit." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShoulderWidth_MetaData[] = {
		{ "Category", "Smartsuit" },
		{ "ModuleRelativePath", "Public/SmartsuitController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The shoulder width of the player wearing the Smartsuit." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArmSpan_MetaData[] = {
		{ "Category", "Smartsuit" },
		{ "ModuleRelativePath", "Public/SmartsuitController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The arm span of the player wearing the Smartsuit." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnkleHeight_MetaData[] = {
		{ "Category", "Smartsuit" },
		{ "ModuleRelativePath", "Public/SmartsuitController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The ankle height of the player wearing the Smartsuit." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FootLength_MetaData[] = {
		{ "Category", "Smartsuit" },
		{ "ModuleRelativePath", "Public/SmartsuitController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The foot length of the player wearing the Smartsuit." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeelOffset_MetaData[] = {
		{ "Category", "Smartsuit" },
		{ "ModuleRelativePath", "Public/SmartsuitController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The heel offset of the player wearing the Smartsuit." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TotalHeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ShoulderHeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HipHeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HipWidth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ShoulderWidth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ArmSpan;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AnkleHeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FootLength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HeelOffset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBodyModel>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBodyModel_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBodyModel, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBodyModel_Statics::NewProp_TotalHeight = { "TotalHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBodyModel, TotalHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TotalHeight_MetaData), NewProp_TotalHeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBodyModel_Statics::NewProp_ShoulderHeight = { "ShoulderHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBodyModel, ShoulderHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShoulderHeight_MetaData), NewProp_ShoulderHeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBodyModel_Statics::NewProp_HipHeight = { "HipHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBodyModel, HipHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HipHeight_MetaData), NewProp_HipHeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBodyModel_Statics::NewProp_HipWidth = { "HipWidth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBodyModel, HipWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HipWidth_MetaData), NewProp_HipWidth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBodyModel_Statics::NewProp_ShoulderWidth = { "ShoulderWidth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBodyModel, ShoulderWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShoulderWidth_MetaData), NewProp_ShoulderWidth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBodyModel_Statics::NewProp_ArmSpan = { "ArmSpan", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBodyModel, ArmSpan), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArmSpan_MetaData), NewProp_ArmSpan_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBodyModel_Statics::NewProp_AnkleHeight = { "AnkleHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBodyModel, AnkleHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnkleHeight_MetaData), NewProp_AnkleHeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBodyModel_Statics::NewProp_FootLength = { "FootLength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBodyModel, FootLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FootLength_MetaData), NewProp_FootLength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBodyModel_Statics::NewProp_HeelOffset = { "HeelOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBodyModel, HeelOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeelOffset_MetaData), NewProp_HeelOffset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBodyModel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyModel_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyModel_Statics::NewProp_TotalHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyModel_Statics::NewProp_ShoulderHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyModel_Statics::NewProp_HipHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyModel_Statics::NewProp_HipWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyModel_Statics::NewProp_ShoulderWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyModel_Statics::NewProp_ArmSpan,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyModel_Statics::NewProp_AnkleHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyModel_Statics::NewProp_FootLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyModel_Statics::NewProp_HeelOffset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyModel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBodyModel_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Smartsuit,
	nullptr,
	&NewStructOps,
	"BodyModel",
	Z_Construct_UScriptStruct_FBodyModel_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyModel_Statics::PropPointers),
	sizeof(FBodyModel),
	alignof(FBodyModel),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyModel_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBodyModel_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBodyModel()
{
	if (!Z_Registration_Info_UScriptStruct_BodyModel.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BodyModel.InnerSingleton, Z_Construct_UScriptStruct_FBodyModel_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_BodyModel.InnerSingleton;
}
// End ScriptStruct FBodyModel

// Begin Class ASmartsuitController Function DoTests
struct Z_Construct_UFunction_ASmartsuitController_DoTests_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Smartsuit" },
		{ "ModuleRelativePath", "Public/SmartsuitController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tests" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASmartsuitController_DoTests_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASmartsuitController, nullptr, "DoTests", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASmartsuitController_DoTests_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASmartsuitController_DoTests_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ASmartsuitController_DoTests()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASmartsuitController_DoTests_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASmartsuitController::execDoTests)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DoTests();
	P_NATIVE_END;
}
// End Class ASmartsuitController Function DoTests

// Begin Class ASmartsuitController
void ASmartsuitController::StaticRegisterNativesASmartsuitController()
{
	UClass* Class = ASmartsuitController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DoTests", &ASmartsuitController::execDoTests },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASmartsuitController);
UClass* Z_Construct_UClass_ASmartsuitController_NoRegister()
{
	return ASmartsuitController::StaticClass();
}
struct Z_Construct_UClass_ASmartsuitController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SmartsuitController.h" },
		{ "ModuleRelativePath", "Public/SmartsuitController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A SmartsuitController provides functionality to connect with a Smartsuit, send and receive commands. You need to define one SmartsuitController per Smartsuit you waant to support in your game. For example if you have one Smartsuit, you need one SmartsuitController that will bind to the Smartsuit. This component will work only if one SmartsuitReceiver is in the level." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AutoConnect_MetaData[] = {
		{ "Category", "Smartsuit" },
		{ "ModuleRelativePath", "Public/SmartsuitController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true then the suitname will be ignored. The controller will bind with the first active Smartsuit that will appear online" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_suitname_MetaData[] = {
		{ "Category", "Smartsuit" },
		{ "ModuleRelativePath", "Public/SmartsuitController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The controller will bind with the Smartsuit with this name." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IndexID_MetaData[] = {
		{ "Category", "Smartsuit" },
		{ "DisplayName", "Index Identifier" },
		{ "ModuleRelativePath", "Public/SmartsuitController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is an Internal ID that you can use to access this controller from C++ or Blueprints. You have to set this number into something unique for each SmartsuitController." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_isBroadcast_MetaData[] = {
		{ "Category", "SmartsuitReadOnly" },
		{ "ModuleRelativePath", "Public/SmartsuitController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Read-only: Indicates if the Smartsuit is broadcasting or unicasting." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_hasProfile_MetaData[] = {
		{ "Category", "SmartsuitReadOnly" },
		{ "ModuleRelativePath", "Public/SmartsuitController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Read-only: Indicates weither the Smartsuit has a BodyProfile. If false it is using the Default profile." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_fps_MetaData[] = {
		{ "Category", "SmartsuitReadOnly" },
		{ "ModuleRelativePath", "Public/SmartsuitController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Read-only: Indicates the Frames per second that Unreal is receiving frames from the Smartsuit. If WiFi is stable this value should be around 100." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_wifiApiVersion_MetaData[] = {
		{ "Category", "SmartsuitReadOnly" },
		{ "ModuleRelativePath", "Public/SmartsuitController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "WiFi API Version of the Smartsuit hub." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bodyModel_MetaData[] = {
		{ "Category", "SmartsuitReadOnly" },
		{ "ModuleRelativePath", "Public/SmartsuitController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Read-only: Indicates the current known BodyProfile for the Smartsuit connected to this SmartsuitController." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_AutoConnect_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AutoConnect;
	static const UECodeGen_Private::FStrPropertyParams NewProp_suitname;
	static const UECodeGen_Private::FIntPropertyParams NewProp_IndexID;
	static void NewProp_isBroadcast_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_isBroadcast;
	static void NewProp_hasProfile_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_hasProfile;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_fps;
	static const UECodeGen_Private::FStrPropertyParams NewProp_wifiApiVersion;
	static const UECodeGen_Private::FStructPropertyParams NewProp_bodyModel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ASmartsuitController_DoTests, "DoTests" }, // 1844758245
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASmartsuitController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_ASmartsuitController_Statics::NewProp_AutoConnect_SetBit(void* Obj)
{
	((ASmartsuitController*)Obj)->AutoConnect = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASmartsuitController_Statics::NewProp_AutoConnect = { "AutoConnect", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ASmartsuitController), &Z_Construct_UClass_ASmartsuitController_Statics::NewProp_AutoConnect_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutoConnect_MetaData), NewProp_AutoConnect_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ASmartsuitController_Statics::NewProp_suitname = { "suitname", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASmartsuitController, suitname), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_suitname_MetaData), NewProp_suitname_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASmartsuitController_Statics::NewProp_IndexID = { "IndexID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASmartsuitController, IndexID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IndexID_MetaData), NewProp_IndexID_MetaData) };
void Z_Construct_UClass_ASmartsuitController_Statics::NewProp_isBroadcast_SetBit(void* Obj)
{
	((ASmartsuitController*)Obj)->isBroadcast = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASmartsuitController_Statics::NewProp_isBroadcast = { "isBroadcast", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ASmartsuitController), &Z_Construct_UClass_ASmartsuitController_Statics::NewProp_isBroadcast_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_isBroadcast_MetaData), NewProp_isBroadcast_MetaData) };
void Z_Construct_UClass_ASmartsuitController_Statics::NewProp_hasProfile_SetBit(void* Obj)
{
	((ASmartsuitController*)Obj)->hasProfile = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASmartsuitController_Statics::NewProp_hasProfile = { "hasProfile", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ASmartsuitController), &Z_Construct_UClass_ASmartsuitController_Statics::NewProp_hasProfile_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_hasProfile_MetaData), NewProp_hasProfile_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASmartsuitController_Statics::NewProp_fps = { "fps", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASmartsuitController, fps), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_fps_MetaData), NewProp_fps_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ASmartsuitController_Statics::NewProp_wifiApiVersion = { "wifiApiVersion", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASmartsuitController, wifiApiVersion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_wifiApiVersion_MetaData), NewProp_wifiApiVersion_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASmartsuitController_Statics::NewProp_bodyModel = { "bodyModel", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASmartsuitController, bodyModel), Z_Construct_UScriptStruct_FBodyModel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bodyModel_MetaData), NewProp_bodyModel_MetaData) }; // 268614269
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASmartsuitController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASmartsuitController_Statics::NewProp_AutoConnect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASmartsuitController_Statics::NewProp_suitname,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASmartsuitController_Statics::NewProp_IndexID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASmartsuitController_Statics::NewProp_isBroadcast,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASmartsuitController_Statics::NewProp_hasProfile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASmartsuitController_Statics::NewProp_fps,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASmartsuitController_Statics::NewProp_wifiApiVersion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASmartsuitController_Statics::NewProp_bodyModel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASmartsuitController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASmartsuitController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Smartsuit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASmartsuitController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASmartsuitController_Statics::ClassParams = {
	&ASmartsuitController::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ASmartsuitController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ASmartsuitController_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASmartsuitController_Statics::Class_MetaDataParams), Z_Construct_UClass_ASmartsuitController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASmartsuitController()
{
	if (!Z_Registration_Info_UClass_ASmartsuitController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASmartsuitController.OuterSingleton, Z_Construct_UClass_ASmartsuitController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASmartsuitController.OuterSingleton;
}
template<> SMARTSUIT_API UClass* StaticClass<ASmartsuitController>()
{
	return ASmartsuitController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASmartsuitController);
ASmartsuitController::~ASmartsuitController() {}
// End Class ASmartsuitController

// Begin Registration
struct Z_CompiledInDeferFile_FID_olavu_Documents_Unreal_Projects_AIDrummer_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitController_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FBodyModel::StaticStruct, Z_Construct_UScriptStruct_FBodyModel_Statics::NewStructOps, TEXT("BodyModel"), &Z_Registration_Info_UScriptStruct_BodyModel, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBodyModel), 268614269U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASmartsuitController, ASmartsuitController::StaticClass, TEXT("ASmartsuitController"), &Z_Registration_Info_UClass_ASmartsuitController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASmartsuitController), 509887641U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_olavu_Documents_Unreal_Projects_AIDrummer_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitController_h_4143310961(TEXT("/Script/Smartsuit"),
	Z_CompiledInDeferFile_FID_olavu_Documents_Unreal_Projects_AIDrummer_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_olavu_Documents_Unreal_Projects_AIDrummer_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitController_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_olavu_Documents_Unreal_Projects_AIDrummer_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitController_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_olavu_Documents_Unreal_Projects_AIDrummer_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitController_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
