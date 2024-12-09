// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/MIDIEventReceiver.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DRUMMER_MIDIEventReceiver_generated_h
#error "MIDIEventReceiver.generated.h already included, missing '#pragma once' in MIDIEventReceiver.h"
#endif
#define DRUMMER_MIDIEventReceiver_generated_h

#define FID_projects_AIDrummer_Source_Drummer_Public_Interfaces_MIDIEventReceiver_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DRUMMER_API UMIDIEventReceiver(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMIDIEventReceiver(UMIDIEventReceiver&&); \
	UMIDIEventReceiver(const UMIDIEventReceiver&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DRUMMER_API, UMIDIEventReceiver); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMIDIEventReceiver); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMIDIEventReceiver) \
	DRUMMER_API virtual ~UMIDIEventReceiver();


#define FID_projects_AIDrummer_Source_Drummer_Public_Interfaces_MIDIEventReceiver_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMIDIEventReceiver(); \
	friend struct Z_Construct_UClass_UMIDIEventReceiver_Statics; \
public: \
	DECLARE_CLASS(UMIDIEventReceiver, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Drummer"), DRUMMER_API) \
	DECLARE_SERIALIZER(UMIDIEventReceiver)


#define FID_projects_AIDrummer_Source_Drummer_Public_Interfaces_MIDIEventReceiver_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_projects_AIDrummer_Source_Drummer_Public_Interfaces_MIDIEventReceiver_h_13_GENERATED_UINTERFACE_BODY() \
	FID_projects_AIDrummer_Source_Drummer_Public_Interfaces_MIDIEventReceiver_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_projects_AIDrummer_Source_Drummer_Public_Interfaces_MIDIEventReceiver_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMIDIEventReceiver() {} \
public: \
	typedef UMIDIEventReceiver UClassType; \
	typedef IMIDIEventReceiver ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_projects_AIDrummer_Source_Drummer_Public_Interfaces_MIDIEventReceiver_h_10_PROLOG
#define FID_projects_AIDrummer_Source_Drummer_Public_Interfaces_MIDIEventReceiver_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_projects_AIDrummer_Source_Drummer_Public_Interfaces_MIDIEventReceiver_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DRUMMER_API UClass* StaticClass<class UMIDIEventReceiver>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_projects_AIDrummer_Source_Drummer_Public_Interfaces_MIDIEventReceiver_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
