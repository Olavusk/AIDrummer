// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Characters/Drummers/MIDIDrummer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DRUMMER_MIDIDrummer_generated_h
#error "MIDIDrummer.generated.h already included, missing '#pragma once' in MIDIDrummer.h"
#endif
#define DRUMMER_MIDIDrummer_generated_h

#define FID_olavu_Documents_Unreal_Projects_AIDrummer_Source_Drummer_Public_Characters_Drummers_MIDIDrummer_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnMIDIEventReceived);


#define FID_olavu_Documents_Unreal_Projects_AIDrummer_Source_Drummer_Public_Characters_Drummers_MIDIDrummer_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMIDIDrummer(); \
	friend struct Z_Construct_UClass_AMIDIDrummer_Statics; \
public: \
	DECLARE_CLASS(AMIDIDrummer, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Drummer"), NO_API) \
	DECLARE_SERIALIZER(AMIDIDrummer) \
	virtual UObject* _getUObject() const override { return const_cast<AMIDIDrummer*>(this); }


#define FID_olavu_Documents_Unreal_Projects_AIDrummer_Source_Drummer_Public_Characters_Drummers_MIDIDrummer_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMIDIDrummer(AMIDIDrummer&&); \
	AMIDIDrummer(const AMIDIDrummer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMIDIDrummer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMIDIDrummer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMIDIDrummer) \
	NO_API virtual ~AMIDIDrummer();


#define FID_olavu_Documents_Unreal_Projects_AIDrummer_Source_Drummer_Public_Characters_Drummers_MIDIDrummer_h_13_PROLOG
#define FID_olavu_Documents_Unreal_Projects_AIDrummer_Source_Drummer_Public_Characters_Drummers_MIDIDrummer_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_olavu_Documents_Unreal_Projects_AIDrummer_Source_Drummer_Public_Characters_Drummers_MIDIDrummer_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_olavu_Documents_Unreal_Projects_AIDrummer_Source_Drummer_Public_Characters_Drummers_MIDIDrummer_h_16_INCLASS_NO_PURE_DECLS \
	FID_olavu_Documents_Unreal_Projects_AIDrummer_Source_Drummer_Public_Characters_Drummers_MIDIDrummer_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DRUMMER_API UClass* StaticClass<class AMIDIDrummer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_olavu_Documents_Unreal_Projects_AIDrummer_Source_Drummer_Public_Characters_Drummers_MIDIDrummer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
