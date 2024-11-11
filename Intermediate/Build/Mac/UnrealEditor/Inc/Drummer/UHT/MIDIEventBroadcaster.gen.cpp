// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Drummer/Public/Midi/MIDIEventBroadcaster.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMIDIEventBroadcaster() {}

// Begin Cross Module References
DRUMMER_API UClass* Z_Construct_UClass_AMIDIEventBroadcaster();
DRUMMER_API UClass* Z_Construct_UClass_AMIDIEventBroadcaster_NoRegister();
DRUMMER_API UFunction* Z_Construct_UDelegateFunction_Drummer_MIDINoteEvent__DelegateSignature();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_Drummer();
// End Cross Module References

// Begin Delegate FMIDINoteEvent
struct Z_Construct_UDelegateFunction_Drummer_MIDINoteEvent__DelegateSignature_Statics
{
	struct _Script_Drummer_eventMIDINoteEvent_Parms
	{
		int32 Channel;
		int32 NoteID;
		int32 Velocity;
		FString EventType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Declare the multicast delegate before the class declaration\n" },
#endif
		{ "ModuleRelativePath", "Public/Midi/MIDIEventBroadcaster.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Declare the multicast delegate before the class declaration" },
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
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_Drummer_MIDINoteEvent__DelegateSignature_Statics::NewProp_Channel = { "Channel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Drummer_eventMIDINoteEvent_Parms, Channel), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_Drummer_MIDINoteEvent__DelegateSignature_Statics::NewProp_NoteID = { "NoteID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Drummer_eventMIDINoteEvent_Parms, NoteID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_Drummer_MIDINoteEvent__DelegateSignature_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Drummer_eventMIDINoteEvent_Parms, Velocity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_Drummer_MIDINoteEvent__DelegateSignature_Statics::NewProp_EventType = { "EventType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Drummer_eventMIDINoteEvent_Parms, EventType), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Drummer_MIDINoteEvent__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Drummer_MIDINoteEvent__DelegateSignature_Statics::NewProp_Channel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Drummer_MIDINoteEvent__DelegateSignature_Statics::NewProp_NoteID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Drummer_MIDINoteEvent__DelegateSignature_Statics::NewProp_Velocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Drummer_MIDINoteEvent__DelegateSignature_Statics::NewProp_EventType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Drummer_MIDINoteEvent__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Drummer_MIDINoteEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Drummer, nullptr, "MIDINoteEvent__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Drummer_MIDINoteEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Drummer_MIDINoteEvent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Drummer_MIDINoteEvent__DelegateSignature_Statics::_Script_Drummer_eventMIDINoteEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Drummer_MIDINoteEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Drummer_MIDINoteEvent__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_Drummer_MIDINoteEvent__DelegateSignature_Statics::_Script_Drummer_eventMIDINoteEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Drummer_MIDINoteEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Drummer_MIDINoteEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FMIDINoteEvent_DelegateWrapper(const FMulticastScriptDelegate& MIDINoteEvent, int32 Channel, int32 NoteID, int32 Velocity, const FString& EventType)
{
	struct _Script_Drummer_eventMIDINoteEvent_Parms
	{
		int32 Channel;
		int32 NoteID;
		int32 Velocity;
		FString EventType;
	};
	_Script_Drummer_eventMIDINoteEvent_Parms Parms;
	Parms.Channel=Channel;
	Parms.NoteID=NoteID;
	Parms.Velocity=Velocity;
	Parms.EventType=EventType;
	MIDINoteEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FMIDINoteEvent

// Begin Class AMIDIEventBroadcaster Function ProcessMIDIEvent
struct Z_Construct_UFunction_AMIDIEventBroadcaster_ProcessMIDIEvent_Statics
{
	struct MIDIEventBroadcaster_eventProcessMIDIEvent_Parms
	{
		int32 Channel;
		int32 NoteID;
		int32 Velocity;
		FString EventType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MIDI Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Function to process MIDI events\n" },
#endif
		{ "ModuleRelativePath", "Public/Midi/MIDIEventBroadcaster.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Function to process MIDI events" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Channel;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NoteID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Velocity;
	static const UECodeGen_Private::FStrPropertyParams NewProp_EventType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMIDIEventBroadcaster_ProcessMIDIEvent_Statics::NewProp_Channel = { "Channel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MIDIEventBroadcaster_eventProcessMIDIEvent_Parms, Channel), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMIDIEventBroadcaster_ProcessMIDIEvent_Statics::NewProp_NoteID = { "NoteID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MIDIEventBroadcaster_eventProcessMIDIEvent_Parms, NoteID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMIDIEventBroadcaster_ProcessMIDIEvent_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MIDIEventBroadcaster_eventProcessMIDIEvent_Parms, Velocity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMIDIEventBroadcaster_ProcessMIDIEvent_Statics::NewProp_EventType = { "EventType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MIDIEventBroadcaster_eventProcessMIDIEvent_Parms, EventType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventType_MetaData), NewProp_EventType_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMIDIEventBroadcaster_ProcessMIDIEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMIDIEventBroadcaster_ProcessMIDIEvent_Statics::NewProp_Channel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMIDIEventBroadcaster_ProcessMIDIEvent_Statics::NewProp_NoteID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMIDIEventBroadcaster_ProcessMIDIEvent_Statics::NewProp_Velocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMIDIEventBroadcaster_ProcessMIDIEvent_Statics::NewProp_EventType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMIDIEventBroadcaster_ProcessMIDIEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMIDIEventBroadcaster_ProcessMIDIEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMIDIEventBroadcaster, nullptr, "ProcessMIDIEvent", nullptr, nullptr, Z_Construct_UFunction_AMIDIEventBroadcaster_ProcessMIDIEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMIDIEventBroadcaster_ProcessMIDIEvent_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMIDIEventBroadcaster_ProcessMIDIEvent_Statics::MIDIEventBroadcaster_eventProcessMIDIEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMIDIEventBroadcaster_ProcessMIDIEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMIDIEventBroadcaster_ProcessMIDIEvent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMIDIEventBroadcaster_ProcessMIDIEvent_Statics::MIDIEventBroadcaster_eventProcessMIDIEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMIDIEventBroadcaster_ProcessMIDIEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMIDIEventBroadcaster_ProcessMIDIEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMIDIEventBroadcaster::execProcessMIDIEvent)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Channel);
	P_GET_PROPERTY(FIntProperty,Z_Param_NoteID);
	P_GET_PROPERTY(FIntProperty,Z_Param_Velocity);
	P_GET_PROPERTY(FStrProperty,Z_Param_EventType);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ProcessMIDIEvent(Z_Param_Channel,Z_Param_NoteID,Z_Param_Velocity,Z_Param_EventType);
	P_NATIVE_END;
}
// End Class AMIDIEventBroadcaster Function ProcessMIDIEvent

// Begin Class AMIDIEventBroadcaster
void AMIDIEventBroadcaster::StaticRegisterNativesAMIDIEventBroadcaster()
{
	UClass* Class = AMIDIEventBroadcaster::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ProcessMIDIEvent", &AMIDIEventBroadcaster::execProcessMIDIEvent },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMIDIEventBroadcaster);
UClass* Z_Construct_UClass_AMIDIEventBroadcaster_NoRegister()
{
	return AMIDIEventBroadcaster::StaticClass();
}
struct Z_Construct_UClass_AMIDIEventBroadcaster_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Midi/MIDIEventBroadcaster.h" },
		{ "ModuleRelativePath", "Public/Midi/MIDIEventBroadcaster.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnMIDINoteEvent_MetaData[] = {
		{ "Category", "MIDI Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Dispatcher for broadcasting MIDI events\n" },
#endif
		{ "ModuleRelativePath", "Public/Midi/MIDIEventBroadcaster.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Dispatcher for broadcasting MIDI events" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMIDINoteEvent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMIDIEventBroadcaster_ProcessMIDIEvent, "ProcessMIDIEvent" }, // 1276326970
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMIDIEventBroadcaster>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AMIDIEventBroadcaster_Statics::NewProp_OnMIDINoteEvent = { "OnMIDINoteEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMIDIEventBroadcaster, OnMIDINoteEvent), Z_Construct_UDelegateFunction_Drummer_MIDINoteEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnMIDINoteEvent_MetaData), NewProp_OnMIDINoteEvent_MetaData) }; // 2061817775
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMIDIEventBroadcaster_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMIDIEventBroadcaster_Statics::NewProp_OnMIDINoteEvent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMIDIEventBroadcaster_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMIDIEventBroadcaster_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Drummer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMIDIEventBroadcaster_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMIDIEventBroadcaster_Statics::ClassParams = {
	&AMIDIEventBroadcaster::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMIDIEventBroadcaster_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMIDIEventBroadcaster_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMIDIEventBroadcaster_Statics::Class_MetaDataParams), Z_Construct_UClass_AMIDIEventBroadcaster_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMIDIEventBroadcaster()
{
	if (!Z_Registration_Info_UClass_AMIDIEventBroadcaster.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMIDIEventBroadcaster.OuterSingleton, Z_Construct_UClass_AMIDIEventBroadcaster_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMIDIEventBroadcaster.OuterSingleton;
}
template<> DRUMMER_API UClass* StaticClass<AMIDIEventBroadcaster>()
{
	return AMIDIEventBroadcaster::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMIDIEventBroadcaster);
AMIDIEventBroadcaster::~AMIDIEventBroadcaster() {}
// End Class AMIDIEventBroadcaster

// Begin Registration
struct Z_CompiledInDeferFile_FID_olavu_Documents_Unreal_Projects_AIDrummer_Source_Drummer_Public_Midi_MIDIEventBroadcaster_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMIDIEventBroadcaster, AMIDIEventBroadcaster::StaticClass, TEXT("AMIDIEventBroadcaster"), &Z_Registration_Info_UClass_AMIDIEventBroadcaster, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMIDIEventBroadcaster), 1085607304U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_olavu_Documents_Unreal_Projects_AIDrummer_Source_Drummer_Public_Midi_MIDIEventBroadcaster_h_4007092714(TEXT("/Script/Drummer"),
	Z_CompiledInDeferFile_FID_olavu_Documents_Unreal_Projects_AIDrummer_Source_Drummer_Public_Midi_MIDIEventBroadcaster_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_olavu_Documents_Unreal_Projects_AIDrummer_Source_Drummer_Public_Midi_MIDIEventBroadcaster_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
