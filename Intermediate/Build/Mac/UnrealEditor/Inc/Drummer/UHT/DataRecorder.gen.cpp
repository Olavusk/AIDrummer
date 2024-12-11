// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Drummer/Public/Database/DataRecorder.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataRecorder() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
DRUMMER_API UClass* Z_Construct_UClass_ADataRecorder();
DRUMMER_API UClass* Z_Construct_UClass_ADataRecorder_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_Drummer();
// End Cross Module References

// Begin Class ADataRecorder Function OnBonePositionUpdated
struct Z_Construct_UFunction_ADataRecorder_OnBonePositionUpdated_Statics
{
	struct DataRecorder_eventOnBonePositionUpdated_Parms
	{
		FName BoneName;
		FVector Position;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Listens for Bone Position Updates\n" },
#endif
		{ "ModuleRelativePath", "Public/Database/DataRecorder.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Listens for Bone Position Updates" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ADataRecorder_OnBonePositionUpdated_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DataRecorder_eventOnBonePositionUpdated_Parms, BoneName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADataRecorder_OnBonePositionUpdated_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DataRecorder_eventOnBonePositionUpdated_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADataRecorder_OnBonePositionUpdated_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADataRecorder_OnBonePositionUpdated_Statics::NewProp_BoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADataRecorder_OnBonePositionUpdated_Statics::NewProp_Position,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADataRecorder_OnBonePositionUpdated_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADataRecorder_OnBonePositionUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADataRecorder, nullptr, "OnBonePositionUpdated", nullptr, nullptr, Z_Construct_UFunction_ADataRecorder_OnBonePositionUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADataRecorder_OnBonePositionUpdated_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADataRecorder_OnBonePositionUpdated_Statics::DataRecorder_eventOnBonePositionUpdated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00840401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADataRecorder_OnBonePositionUpdated_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADataRecorder_OnBonePositionUpdated_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADataRecorder_OnBonePositionUpdated_Statics::DataRecorder_eventOnBonePositionUpdated_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADataRecorder_OnBonePositionUpdated()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADataRecorder_OnBonePositionUpdated_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADataRecorder::execOnBonePositionUpdated)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
	P_GET_STRUCT(FVector,Z_Param_Position);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnBonePositionUpdated(Z_Param_BoneName,Z_Param_Position);
	P_NATIVE_END;
}
// End Class ADataRecorder Function OnBonePositionUpdated

// Begin Class ADataRecorder Function OnMIDIEventReceived
struct Z_Construct_UFunction_ADataRecorder_OnMIDIEventReceived_Statics
{
	struct DataRecorder_eventOnMIDIEventReceived_Parms
	{
		int32 Channel;
		int32 NoteID;
		int32 Velocity;
		FString EventType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Listens for MIDI Note Events\n" },
#endif
		{ "ModuleRelativePath", "Public/Database/DataRecorder.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Listens for MIDI Note Events" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Channel;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NoteID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Velocity;
	static const UECodeGen_Private::FStrPropertyParams NewProp_EventType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADataRecorder_OnMIDIEventReceived_Statics::NewProp_Channel = { "Channel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DataRecorder_eventOnMIDIEventReceived_Parms, Channel), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADataRecorder_OnMIDIEventReceived_Statics::NewProp_NoteID = { "NoteID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DataRecorder_eventOnMIDIEventReceived_Parms, NoteID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADataRecorder_OnMIDIEventReceived_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DataRecorder_eventOnMIDIEventReceived_Parms, Velocity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ADataRecorder_OnMIDIEventReceived_Statics::NewProp_EventType = { "EventType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DataRecorder_eventOnMIDIEventReceived_Parms, EventType), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADataRecorder_OnMIDIEventReceived_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADataRecorder_OnMIDIEventReceived_Statics::NewProp_Channel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADataRecorder_OnMIDIEventReceived_Statics::NewProp_NoteID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADataRecorder_OnMIDIEventReceived_Statics::NewProp_Velocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADataRecorder_OnMIDIEventReceived_Statics::NewProp_EventType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADataRecorder_OnMIDIEventReceived_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADataRecorder_OnMIDIEventReceived_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADataRecorder, nullptr, "OnMIDIEventReceived", nullptr, nullptr, Z_Construct_UFunction_ADataRecorder_OnMIDIEventReceived_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADataRecorder_OnMIDIEventReceived_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADataRecorder_OnMIDIEventReceived_Statics::DataRecorder_eventOnMIDIEventReceived_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADataRecorder_OnMIDIEventReceived_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADataRecorder_OnMIDIEventReceived_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADataRecorder_OnMIDIEventReceived_Statics::DataRecorder_eventOnMIDIEventReceived_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADataRecorder_OnMIDIEventReceived()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADataRecorder_OnMIDIEventReceived_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADataRecorder::execOnMIDIEventReceived)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Channel);
	P_GET_PROPERTY(FIntProperty,Z_Param_NoteID);
	P_GET_PROPERTY(FIntProperty,Z_Param_Velocity);
	P_GET_PROPERTY(FStrProperty,Z_Param_EventType);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnMIDIEventReceived(Z_Param_Channel,Z_Param_NoteID,Z_Param_Velocity,Z_Param_EventType);
	P_NATIVE_END;
}
// End Class ADataRecorder Function OnMIDIEventReceived

// Begin Class ADataRecorder Function StartRecording
struct Z_Construct_UFunction_ADataRecorder_StartRecording_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Start and Stop Recording\n" },
#endif
		{ "ModuleRelativePath", "Public/Database/DataRecorder.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Start and Stop Recording" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADataRecorder_StartRecording_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADataRecorder, nullptr, "StartRecording", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADataRecorder_StartRecording_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADataRecorder_StartRecording_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ADataRecorder_StartRecording()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADataRecorder_StartRecording_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADataRecorder::execStartRecording)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartRecording();
	P_NATIVE_END;
}
// End Class ADataRecorder Function StartRecording

// Begin Class ADataRecorder Function StopRecording
struct Z_Construct_UFunction_ADataRecorder_StopRecording_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Database/DataRecorder.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADataRecorder_StopRecording_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADataRecorder, nullptr, "StopRecording", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADataRecorder_StopRecording_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADataRecorder_StopRecording_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ADataRecorder_StopRecording()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADataRecorder_StopRecording_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADataRecorder::execStopRecording)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopRecording();
	P_NATIVE_END;
}
// End Class ADataRecorder Function StopRecording

// Begin Class ADataRecorder
void ADataRecorder::StaticRegisterNativesADataRecorder()
{
	UClass* Class = ADataRecorder::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnBonePositionUpdated", &ADataRecorder::execOnBonePositionUpdated },
		{ "OnMIDIEventReceived", &ADataRecorder::execOnMIDIEventReceived },
		{ "StartRecording", &ADataRecorder::execStartRecording },
		{ "StopRecording", &ADataRecorder::execStopRecording },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADataRecorder);
UClass* Z_Construct_UClass_ADataRecorder_NoRegister()
{
	return ADataRecorder::StaticClass();
}
struct Z_Construct_UClass_ADataRecorder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Database/DataRecorder.h" },
		{ "ModuleRelativePath", "Public/Database/DataRecorder.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ADataRecorder_OnBonePositionUpdated, "OnBonePositionUpdated" }, // 3051035404
		{ &Z_Construct_UFunction_ADataRecorder_OnMIDIEventReceived, "OnMIDIEventReceived" }, // 4191585129
		{ &Z_Construct_UFunction_ADataRecorder_StartRecording, "StartRecording" }, // 316215946
		{ &Z_Construct_UFunction_ADataRecorder_StopRecording, "StopRecording" }, // 3352764742
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADataRecorder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ADataRecorder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Drummer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADataRecorder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADataRecorder_Statics::ClassParams = {
	&ADataRecorder::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADataRecorder_Statics::Class_MetaDataParams), Z_Construct_UClass_ADataRecorder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADataRecorder()
{
	if (!Z_Registration_Info_UClass_ADataRecorder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADataRecorder.OuterSingleton, Z_Construct_UClass_ADataRecorder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADataRecorder.OuterSingleton;
}
template<> DRUMMER_API UClass* StaticClass<ADataRecorder>()
{
	return ADataRecorder::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADataRecorder);
ADataRecorder::~ADataRecorder() {}
// End Class ADataRecorder

// Begin Registration
struct Z_CompiledInDeferFile_FID_olavu_Documents_Unreal_Projects_AIDrummer_Source_Drummer_Public_Database_DataRecorder_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADataRecorder, ADataRecorder::StaticClass, TEXT("ADataRecorder"), &Z_Registration_Info_UClass_ADataRecorder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADataRecorder), 4279261607U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_olavu_Documents_Unreal_Projects_AIDrummer_Source_Drummer_Public_Database_DataRecorder_h_3701271879(TEXT("/Script/Drummer"),
	Z_CompiledInDeferFile_FID_olavu_Documents_Unreal_Projects_AIDrummer_Source_Drummer_Public_Database_DataRecorder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_olavu_Documents_Unreal_Projects_AIDrummer_Source_Drummer_Public_Database_DataRecorder_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
