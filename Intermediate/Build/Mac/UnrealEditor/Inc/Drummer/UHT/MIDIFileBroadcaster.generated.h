// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Midi/MIDIFileBroadcaster.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DRUMMER_MIDIFileBroadcaster_generated_h
#error "MIDIFileBroadcaster.generated.h already included, missing '#pragma once' in MIDIFileBroadcaster.h"
#endif
#define DRUMMER_MIDIFileBroadcaster_generated_h

#define FID_olavu_Documents_Unreal_Projects_AIDrummer_Source_Drummer_Public_Midi_MIDIFileBroadcaster_h_10_DELEGATE \
DRUMMER_API void FMIDIFileNoteEvent_DelegateWrapper(const FMulticastScriptDelegate& MIDIFileNoteEvent, int32 Channel, int32 NoteID, int32 Velocity, float Timestamp);


#define FID_olavu_Documents_Unreal_Projects_AIDrummer_Source_Drummer_Public_Midi_MIDIFileBroadcaster_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execStopMIDIFile); \
	DECLARE_FUNCTION(execPlayMIDIFile); \
	DECLARE_FUNCTION(execLoadMIDIFile);


#define FID_olavu_Documents_Unreal_Projects_AIDrummer_Source_Drummer_Public_Midi_MIDIFileBroadcaster_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMIDIFileBroadcaster(); \
	friend struct Z_Construct_UClass_AMIDIFileBroadcaster_Statics; \
public: \
	DECLARE_CLASS(AMIDIFileBroadcaster, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Drummer"), NO_API) \
	DECLARE_SERIALIZER(AMIDIFileBroadcaster)


#define FID_olavu_Documents_Unreal_Projects_AIDrummer_Source_Drummer_Public_Midi_MIDIFileBroadcaster_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMIDIFileBroadcaster(AMIDIFileBroadcaster&&); \
	AMIDIFileBroadcaster(const AMIDIFileBroadcaster&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMIDIFileBroadcaster); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMIDIFileBroadcaster); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMIDIFileBroadcaster) \
	NO_API virtual ~AMIDIFileBroadcaster();


#define FID_olavu_Documents_Unreal_Projects_AIDrummer_Source_Drummer_Public_Midi_MIDIFileBroadcaster_h_12_PROLOG
#define FID_olavu_Documents_Unreal_Projects_AIDrummer_Source_Drummer_Public_Midi_MIDIFileBroadcaster_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_olavu_Documents_Unreal_Projects_AIDrummer_Source_Drummer_Public_Midi_MIDIFileBroadcaster_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_olavu_Documents_Unreal_Projects_AIDrummer_Source_Drummer_Public_Midi_MIDIFileBroadcaster_h_15_INCLASS_NO_PURE_DECLS \
	FID_olavu_Documents_Unreal_Projects_AIDrummer_Source_Drummer_Public_Midi_MIDIFileBroadcaster_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DRUMMER_API UClass* StaticClass<class AMIDIFileBroadcaster>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_olavu_Documents_Unreal_Projects_AIDrummer_Source_Drummer_Public_Midi_MIDIFileBroadcaster_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
