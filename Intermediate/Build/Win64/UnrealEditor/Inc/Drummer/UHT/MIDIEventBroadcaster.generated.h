// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Midi/MIDIEventBroadcaster.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DRUMMER_MIDIEventBroadcaster_generated_h
#error "MIDIEventBroadcaster.generated.h already included, missing '#pragma once' in MIDIEventBroadcaster.h"
#endif
#define DRUMMER_MIDIEventBroadcaster_generated_h

#define FID_projects_AIDrummer_Source_Drummer_Public_Midi_MIDIEventBroadcaster_h_10_DELEGATE \
DRUMMER_API void FMIDINoteEvent_DelegateWrapper(const FMulticastScriptDelegate& MIDINoteEvent, int32 Channel, int32 NoteID, int32 Velocity, const FString& EventType);


#define FID_projects_AIDrummer_Source_Drummer_Public_Midi_MIDIEventBroadcaster_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execProcessMIDIEvent);


#define FID_projects_AIDrummer_Source_Drummer_Public_Midi_MIDIEventBroadcaster_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMIDIEventBroadcaster(); \
	friend struct Z_Construct_UClass_AMIDIEventBroadcaster_Statics; \
public: \
	DECLARE_CLASS(AMIDIEventBroadcaster, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Drummer"), NO_API) \
	DECLARE_SERIALIZER(AMIDIEventBroadcaster)


#define FID_projects_AIDrummer_Source_Drummer_Public_Midi_MIDIEventBroadcaster_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMIDIEventBroadcaster(AMIDIEventBroadcaster&&); \
	AMIDIEventBroadcaster(const AMIDIEventBroadcaster&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMIDIEventBroadcaster); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMIDIEventBroadcaster); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMIDIEventBroadcaster) \
	NO_API virtual ~AMIDIEventBroadcaster();


#define FID_projects_AIDrummer_Source_Drummer_Public_Midi_MIDIEventBroadcaster_h_12_PROLOG
#define FID_projects_AIDrummer_Source_Drummer_Public_Midi_MIDIEventBroadcaster_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_projects_AIDrummer_Source_Drummer_Public_Midi_MIDIEventBroadcaster_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_projects_AIDrummer_Source_Drummer_Public_Midi_MIDIEventBroadcaster_h_15_INCLASS_NO_PURE_DECLS \
	FID_projects_AIDrummer_Source_Drummer_Public_Midi_MIDIEventBroadcaster_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DRUMMER_API UClass* StaticClass<class AMIDIEventBroadcaster>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_projects_AIDrummer_Source_Drummer_Public_Midi_MIDIEventBroadcaster_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
