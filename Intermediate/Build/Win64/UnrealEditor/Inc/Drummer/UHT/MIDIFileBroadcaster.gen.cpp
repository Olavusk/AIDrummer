// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Drummer/Public/Midi/MIDIFileBroadcaster.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMIDIFileBroadcaster() {}

// Begin Cross Module References
DRUMMER_API UClass* Z_Construct_UClass_AMIDIFileBroadcaster();
DRUMMER_API UClass* Z_Construct_UClass_AMIDIFileBroadcaster_NoRegister();
DRUMMER_API UFunction* Z_Construct_UDelegateFunction_Drummer_MIDIFileNoteEvent__DelegateSignature();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_Drummer();
// End Cross Module References

// Begin Delegate FMIDIFileNoteEvent
struct Z_Construct_UDelegateFunction_Drummer_MIDIFileNoteEvent__DelegateSignature_Statics
{
	struct _Script_Drummer_eventMIDIFileNoteEvent_Parms
	{
		int32 Channel;
		int32 NoteID;
		int32 Velocity;
		float Timestamp;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Declare a multicast delegate for MIDI file events\n" },
#endif
		{ "ModuleRelativePath", "Public/Midi/MIDIFileBroadcaster.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Declare a multicast delegate for MIDI file events" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Channel;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NoteID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Velocity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Timestamp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_Drummer_MIDIFileNoteEvent__DelegateSignature_Statics::NewProp_Channel = { "Channel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Drummer_eventMIDIFileNoteEvent_Parms, Channel), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_Drummer_MIDIFileNoteEvent__DelegateSignature_Statics::NewProp_NoteID = { "NoteID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Drummer_eventMIDIFileNoteEvent_Parms, NoteID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_Drummer_MIDIFileNoteEvent__DelegateSignature_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Drummer_eventMIDIFileNoteEvent_Parms, Velocity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_Drummer_MIDIFileNoteEvent__DelegateSignature_Statics::NewProp_Timestamp = { "Timestamp", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Drummer_eventMIDIFileNoteEvent_Parms, Timestamp), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Drummer_MIDIFileNoteEvent__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Drummer_MIDIFileNoteEvent__DelegateSignature_Statics::NewProp_Channel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Drummer_MIDIFileNoteEvent__DelegateSignature_Statics::NewProp_NoteID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Drummer_MIDIFileNoteEvent__DelegateSignature_Statics::NewProp_Velocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Drummer_MIDIFileNoteEvent__DelegateSignature_Statics::NewProp_Timestamp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Drummer_MIDIFileNoteEvent__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Drummer_MIDIFileNoteEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Drummer, nullptr, "MIDIFileNoteEvent__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Drummer_MIDIFileNoteEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Drummer_MIDIFileNoteEvent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Drummer_MIDIFileNoteEvent__DelegateSignature_Statics::_Script_Drummer_eventMIDIFileNoteEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Drummer_MIDIFileNoteEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Drummer_MIDIFileNoteEvent__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_Drummer_MIDIFileNoteEvent__DelegateSignature_Statics::_Script_Drummer_eventMIDIFileNoteEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Drummer_MIDIFileNoteEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Drummer_MIDIFileNoteEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FMIDIFileNoteEvent_DelegateWrapper(const FMulticastScriptDelegate& MIDIFileNoteEvent, int32 Channel, int32 NoteID, int32 Velocity, float Timestamp)
{
	struct _Script_Drummer_eventMIDIFileNoteEvent_Parms
	{
		int32 Channel;
		int32 NoteID;
		int32 Velocity;
		float Timestamp;
	};
	_Script_Drummer_eventMIDIFileNoteEvent_Parms Parms;
	Parms.Channel=Channel;
	Parms.NoteID=NoteID;
	Parms.Velocity=Velocity;
	Parms.Timestamp=Timestamp;
	MIDIFileNoteEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FMIDIFileNoteEvent

// Begin Class AMIDIFileBroadcaster Function LoadMIDIFile
struct Z_Construct_UFunction_AMIDIFileBroadcaster_LoadMIDIFile_Statics
{
	struct MIDIFileBroadcaster_eventLoadMIDIFile_Parms
	{
		FString FilePath;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MIDI File" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Load and parse a MIDI file\n" },
#endif
		{ "ModuleRelativePath", "Public/Midi/MIDIFileBroadcaster.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Load and parse a MIDI file" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FilePath;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMIDIFileBroadcaster_LoadMIDIFile_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MIDIFileBroadcaster_eventLoadMIDIFile_Parms, FilePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilePath_MetaData), NewProp_FilePath_MetaData) };
void Z_Construct_UFunction_AMIDIFileBroadcaster_LoadMIDIFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MIDIFileBroadcaster_eventLoadMIDIFile_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMIDIFileBroadcaster_LoadMIDIFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MIDIFileBroadcaster_eventLoadMIDIFile_Parms), &Z_Construct_UFunction_AMIDIFileBroadcaster_LoadMIDIFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMIDIFileBroadcaster_LoadMIDIFile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMIDIFileBroadcaster_LoadMIDIFile_Statics::NewProp_FilePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMIDIFileBroadcaster_LoadMIDIFile_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMIDIFileBroadcaster_LoadMIDIFile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMIDIFileBroadcaster_LoadMIDIFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMIDIFileBroadcaster, nullptr, "LoadMIDIFile", nullptr, nullptr, Z_Construct_UFunction_AMIDIFileBroadcaster_LoadMIDIFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMIDIFileBroadcaster_LoadMIDIFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMIDIFileBroadcaster_LoadMIDIFile_Statics::MIDIFileBroadcaster_eventLoadMIDIFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMIDIFileBroadcaster_LoadMIDIFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMIDIFileBroadcaster_LoadMIDIFile_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMIDIFileBroadcaster_LoadMIDIFile_Statics::MIDIFileBroadcaster_eventLoadMIDIFile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMIDIFileBroadcaster_LoadMIDIFile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMIDIFileBroadcaster_LoadMIDIFile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMIDIFileBroadcaster::execLoadMIDIFile)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FilePath);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->LoadMIDIFile(Z_Param_FilePath);
	P_NATIVE_END;
}
// End Class AMIDIFileBroadcaster Function LoadMIDIFile

// Begin Class AMIDIFileBroadcaster Function PlayMIDIFile
struct Z_Construct_UFunction_AMIDIFileBroadcaster_PlayMIDIFile_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MIDI File" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Start playing the MIDI file\n" },
#endif
		{ "ModuleRelativePath", "Public/Midi/MIDIFileBroadcaster.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Start playing the MIDI file" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMIDIFileBroadcaster_PlayMIDIFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMIDIFileBroadcaster, nullptr, "PlayMIDIFile", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMIDIFileBroadcaster_PlayMIDIFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMIDIFileBroadcaster_PlayMIDIFile_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMIDIFileBroadcaster_PlayMIDIFile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMIDIFileBroadcaster_PlayMIDIFile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMIDIFileBroadcaster::execPlayMIDIFile)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlayMIDIFile();
	P_NATIVE_END;
}
// End Class AMIDIFileBroadcaster Function PlayMIDIFile

// Begin Class AMIDIFileBroadcaster Function StopMIDIFile
struct Z_Construct_UFunction_AMIDIFileBroadcaster_StopMIDIFile_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MIDI File" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Stop playing the MIDI file\n" },
#endif
		{ "ModuleRelativePath", "Public/Midi/MIDIFileBroadcaster.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stop playing the MIDI file" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMIDIFileBroadcaster_StopMIDIFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMIDIFileBroadcaster, nullptr, "StopMIDIFile", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMIDIFileBroadcaster_StopMIDIFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMIDIFileBroadcaster_StopMIDIFile_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMIDIFileBroadcaster_StopMIDIFile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMIDIFileBroadcaster_StopMIDIFile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMIDIFileBroadcaster::execStopMIDIFile)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopMIDIFile();
	P_NATIVE_END;
}
// End Class AMIDIFileBroadcaster Function StopMIDIFile

// Begin Class AMIDIFileBroadcaster
void AMIDIFileBroadcaster::StaticRegisterNativesAMIDIFileBroadcaster()
{
	UClass* Class = AMIDIFileBroadcaster::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "LoadMIDIFile", &AMIDIFileBroadcaster::execLoadMIDIFile },
		{ "PlayMIDIFile", &AMIDIFileBroadcaster::execPlayMIDIFile },
		{ "StopMIDIFile", &AMIDIFileBroadcaster::execStopMIDIFile },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMIDIFileBroadcaster);
UClass* Z_Construct_UClass_AMIDIFileBroadcaster_NoRegister()
{
	return AMIDIFileBroadcaster::StaticClass();
}
struct Z_Construct_UClass_AMIDIFileBroadcaster_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Midi/MIDIFileBroadcaster.h" },
		{ "ModuleRelativePath", "Public/Midi/MIDIFileBroadcaster.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnMIDIFileNoteEvent_MetaData[] = {
		{ "Category", "MIDI File Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Dispatcher for broadcasting MIDI file events\n" },
#endif
		{ "ModuleRelativePath", "Public/Midi/MIDIFileBroadcaster.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Dispatcher for broadcasting MIDI file events" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMIDIFileNoteEvent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMIDIFileBroadcaster_LoadMIDIFile, "LoadMIDIFile" }, // 3091642043
		{ &Z_Construct_UFunction_AMIDIFileBroadcaster_PlayMIDIFile, "PlayMIDIFile" }, // 2175026041
		{ &Z_Construct_UFunction_AMIDIFileBroadcaster_StopMIDIFile, "StopMIDIFile" }, // 191425870
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMIDIFileBroadcaster>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AMIDIFileBroadcaster_Statics::NewProp_OnMIDIFileNoteEvent = { "OnMIDIFileNoteEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMIDIFileBroadcaster, OnMIDIFileNoteEvent), Z_Construct_UDelegateFunction_Drummer_MIDIFileNoteEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnMIDIFileNoteEvent_MetaData), NewProp_OnMIDIFileNoteEvent_MetaData) }; // 390906551
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMIDIFileBroadcaster_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMIDIFileBroadcaster_Statics::NewProp_OnMIDIFileNoteEvent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMIDIFileBroadcaster_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMIDIFileBroadcaster_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Drummer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMIDIFileBroadcaster_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMIDIFileBroadcaster_Statics::ClassParams = {
	&AMIDIFileBroadcaster::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMIDIFileBroadcaster_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMIDIFileBroadcaster_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMIDIFileBroadcaster_Statics::Class_MetaDataParams), Z_Construct_UClass_AMIDIFileBroadcaster_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMIDIFileBroadcaster()
{
	if (!Z_Registration_Info_UClass_AMIDIFileBroadcaster.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMIDIFileBroadcaster.OuterSingleton, Z_Construct_UClass_AMIDIFileBroadcaster_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMIDIFileBroadcaster.OuterSingleton;
}
template<> DRUMMER_API UClass* StaticClass<AMIDIFileBroadcaster>()
{
	return AMIDIFileBroadcaster::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMIDIFileBroadcaster);
AMIDIFileBroadcaster::~AMIDIFileBroadcaster() {}
// End Class AMIDIFileBroadcaster

// Begin Registration
struct Z_CompiledInDeferFile_FID_projects_AIDrummer_Source_Drummer_Public_Midi_MIDIFileBroadcaster_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMIDIFileBroadcaster, AMIDIFileBroadcaster::StaticClass, TEXT("AMIDIFileBroadcaster"), &Z_Registration_Info_UClass_AMIDIFileBroadcaster, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMIDIFileBroadcaster), 2743984248U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projects_AIDrummer_Source_Drummer_Public_Midi_MIDIFileBroadcaster_h_906147645(TEXT("/Script/Drummer"),
	Z_CompiledInDeferFile_FID_projects_AIDrummer_Source_Drummer_Public_Midi_MIDIFileBroadcaster_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projects_AIDrummer_Source_Drummer_Public_Midi_MIDIFileBroadcaster_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
