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
DRUMMER_API UClass* Z_Construct_UClass_AMIDIEventBroadcaster_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Drummer();
// End Cross Module References

// Begin Class ADataRecorder Function CreateNewSession
struct Z_Construct_UFunction_ADataRecorder_CreateNewSession_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Database" },
		{ "ModuleRelativePath", "Public/Database/DataRecorder.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADataRecorder_CreateNewSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADataRecorder, nullptr, "CreateNewSession", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADataRecorder_CreateNewSession_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADataRecorder_CreateNewSession_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ADataRecorder_CreateNewSession()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADataRecorder_CreateNewSession_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADataRecorder::execCreateNewSession)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CreateNewSession();
	P_NATIVE_END;
}
// End Class ADataRecorder Function CreateNewSession

// Begin Class ADataRecorder Function InitializeDatabase
struct Z_Construct_UFunction_ADataRecorder_InitializeDatabase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Database" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// **Expose to Blueprint for calling in Blueprints**\n" },
#endif
		{ "ModuleRelativePath", "Public/Database/DataRecorder.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "**Expose to Blueprint for calling in Blueprints**" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADataRecorder_InitializeDatabase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADataRecorder, nullptr, "InitializeDatabase", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADataRecorder_InitializeDatabase_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADataRecorder_InitializeDatabase_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ADataRecorder_InitializeDatabase()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADataRecorder_InitializeDatabase_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADataRecorder::execInitializeDatabase)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeDatabase();
	P_NATIVE_END;
}
// End Class ADataRecorder Function InitializeDatabase

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
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/Database/DataRecorder.h" },
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
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADataRecorder_OnBonePositionUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADataRecorder, nullptr, "OnBonePositionUpdated", nullptr, nullptr, Z_Construct_UFunction_ADataRecorder_OnBonePositionUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADataRecorder_OnBonePositionUpdated_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADataRecorder_OnBonePositionUpdated_Statics::DataRecorder_eventOnBonePositionUpdated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADataRecorder_OnBonePositionUpdated_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADataRecorder_OnBonePositionUpdated_Statics::Function_MetaDataParams) };
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
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/Database/DataRecorder.h" },
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
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADataRecorder_OnMIDIEventReceived_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADataRecorder, nullptr, "OnMIDIEventReceived", nullptr, nullptr, Z_Construct_UFunction_ADataRecorder_OnMIDIEventReceived_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADataRecorder_OnMIDIEventReceived_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADataRecorder_OnMIDIEventReceived_Statics::DataRecorder_eventOnMIDIEventReceived_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADataRecorder_OnMIDIEventReceived_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADataRecorder_OnMIDIEventReceived_Statics::Function_MetaDataParams) };
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
		{ "Category", "Recording" },
		{ "ModuleRelativePath", "Public/Database/DataRecorder.h" },
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
		{ "Category", "Recording" },
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
		{ "CreateNewSession", &ADataRecorder::execCreateNewSession },
		{ "InitializeDatabase", &ADataRecorder::execInitializeDatabase },
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MIDIBroadcaster_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "MIDI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// **Reference to MIDI Event Broadcaster (Editable in Blueprint)**\n" },
#endif
		{ "ModuleRelativePath", "Public/Database/DataRecorder.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "**Reference to MIDI Event Broadcaster (Editable in Blueprint)**" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimationSource_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Animation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// **Reference to the Skeletal Mesh or Animation Source (Editable in Blueprint)**\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Database/DataRecorder.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "**Reference to the Skeletal Mesh or Animation Source (Editable in Blueprint)**" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentSessionID_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Session" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// **Expose CurrentSessionID to Blueprint (Read-Only)**\n" },
#endif
		{ "ModuleRelativePath", "Public/Database/DataRecorder.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "**Expose CurrentSessionID to Blueprint (Read-Only)**" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsRecording_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Recording" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Flag to indicate whether recording is active\n" },
#endif
		{ "ModuleRelativePath", "Public/Database/DataRecorder.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Flag to indicate whether recording is active" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartRecordingTime_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Recording" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The start time of the recording\n" },
#endif
		{ "ModuleRelativePath", "Public/Database/DataRecorder.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The start time of the recording" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MIDIBroadcaster;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationSource;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CurrentSessionID;
	static void NewProp_bIsRecording_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsRecording;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StartRecordingTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ADataRecorder_CreateNewSession, "CreateNewSession" }, // 4256779794
		{ &Z_Construct_UFunction_ADataRecorder_InitializeDatabase, "InitializeDatabase" }, // 2651503087
		{ &Z_Construct_UFunction_ADataRecorder_OnBonePositionUpdated, "OnBonePositionUpdated" }, // 1141616144
		{ &Z_Construct_UFunction_ADataRecorder_OnMIDIEventReceived, "OnMIDIEventReceived" }, // 3679149867
		{ &Z_Construct_UFunction_ADataRecorder_StartRecording, "StartRecording" }, // 2538425291
		{ &Z_Construct_UFunction_ADataRecorder_StopRecording, "StopRecording" }, // 2500409791
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADataRecorder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADataRecorder_Statics::NewProp_MIDIBroadcaster = { "MIDIBroadcaster", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADataRecorder, MIDIBroadcaster), Z_Construct_UClass_AMIDIEventBroadcaster_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MIDIBroadcaster_MetaData), NewProp_MIDIBroadcaster_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADataRecorder_Statics::NewProp_AnimationSource = { "AnimationSource", nullptr, (EPropertyFlags)0x004000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADataRecorder, AnimationSource), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimationSource_MetaData), NewProp_AnimationSource_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ADataRecorder_Statics::NewProp_CurrentSessionID = { "CurrentSessionID", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADataRecorder, CurrentSessionID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentSessionID_MetaData), NewProp_CurrentSessionID_MetaData) };
void Z_Construct_UClass_ADataRecorder_Statics::NewProp_bIsRecording_SetBit(void* Obj)
{
	((ADataRecorder*)Obj)->bIsRecording = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADataRecorder_Statics::NewProp_bIsRecording = { "bIsRecording", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ADataRecorder), &Z_Construct_UClass_ADataRecorder_Statics::NewProp_bIsRecording_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsRecording_MetaData), NewProp_bIsRecording_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADataRecorder_Statics::NewProp_StartRecordingTime = { "StartRecordingTime", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADataRecorder, StartRecordingTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartRecordingTime_MetaData), NewProp_StartRecordingTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADataRecorder_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADataRecorder_Statics::NewProp_MIDIBroadcaster,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADataRecorder_Statics::NewProp_AnimationSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADataRecorder_Statics::NewProp_CurrentSessionID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADataRecorder_Statics::NewProp_bIsRecording,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADataRecorder_Statics::NewProp_StartRecordingTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADataRecorder_Statics::PropPointers) < 2048);
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
	Z_Construct_UClass_ADataRecorder_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ADataRecorder_Statics::PropPointers),
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
		{ Z_Construct_UClass_ADataRecorder, ADataRecorder::StaticClass, TEXT("ADataRecorder"), &Z_Registration_Info_UClass_ADataRecorder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADataRecorder), 1936348610U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_olavu_Documents_Unreal_Projects_AIDrummer_Source_Drummer_Public_Database_DataRecorder_h_796672922(TEXT("/Script/Drummer"),
	Z_CompiledInDeferFile_FID_olavu_Documents_Unreal_Projects_AIDrummer_Source_Drummer_Public_Database_DataRecorder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_olavu_Documents_Unreal_Projects_AIDrummer_Source_Drummer_Public_Database_DataRecorder_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
