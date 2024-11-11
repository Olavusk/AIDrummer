// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Midi/MIDIDrumReceiver.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DRUMMER_MIDIDrumReceiver_generated_h
#error "MIDIDrumReceiver.generated.h already included, missing '#pragma once' in MIDIDrumReceiver.h"
#endif
#define DRUMMER_MIDIDrumReceiver_generated_h

#define FID_olavu_Documents_Unreal_Projects_AIDrummer_Source_Drummer_Public_Midi_MIDIDrumReceiver_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnMIDIEventReceived);


#define FID_olavu_Documents_Unreal_Projects_AIDrummer_Source_Drummer_Public_Midi_MIDIDrumReceiver_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMIDIDrumReceiver(); \
	friend struct Z_Construct_UClass_AMIDIDrumReceiver_Statics; \
public: \
	DECLARE_CLASS(AMIDIDrumReceiver, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Drummer"), NO_API) \
	DECLARE_SERIALIZER(AMIDIDrumReceiver) \
	virtual UObject* _getUObject() const override { return const_cast<AMIDIDrumReceiver*>(this); }


#define FID_olavu_Documents_Unreal_Projects_AIDrummer_Source_Drummer_Public_Midi_MIDIDrumReceiver_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMIDIDrumReceiver(AMIDIDrumReceiver&&); \
	AMIDIDrumReceiver(const AMIDIDrumReceiver&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMIDIDrumReceiver); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMIDIDrumReceiver); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMIDIDrumReceiver) \
	NO_API virtual ~AMIDIDrumReceiver();


#define FID_olavu_Documents_Unreal_Projects_AIDrummer_Source_Drummer_Public_Midi_MIDIDrumReceiver_h_11_PROLOG
#define FID_olavu_Documents_Unreal_Projects_AIDrummer_Source_Drummer_Public_Midi_MIDIDrumReceiver_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_olavu_Documents_Unreal_Projects_AIDrummer_Source_Drummer_Public_Midi_MIDIDrumReceiver_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_olavu_Documents_Unreal_Projects_AIDrummer_Source_Drummer_Public_Midi_MIDIDrumReceiver_h_14_INCLASS_NO_PURE_DECLS \
	FID_olavu_Documents_Unreal_Projects_AIDrummer_Source_Drummer_Public_Midi_MIDIDrumReceiver_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DRUMMER_API UClass* StaticClass<class AMIDIDrumReceiver>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_olavu_Documents_Unreal_Projects_AIDrummer_Source_Drummer_Public_Midi_MIDIDrumReceiver_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
