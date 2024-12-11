// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Database/DataRecorder.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DRUMMER_DataRecorder_generated_h
#error "DataRecorder.generated.h already included, missing '#pragma once' in DataRecorder.h"
#endif
#define DRUMMER_DataRecorder_generated_h

#define FID_olavu_Documents_Unreal_Projects_AIDrummer_Source_Drummer_Public_Database_DataRecorder_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnBonePositionUpdated); \
	DECLARE_FUNCTION(execOnMIDIEventReceived); \
	DECLARE_FUNCTION(execStopRecording); \
	DECLARE_FUNCTION(execStartRecording);


#define FID_olavu_Documents_Unreal_Projects_AIDrummer_Source_Drummer_Public_Database_DataRecorder_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADataRecorder(); \
	friend struct Z_Construct_UClass_ADataRecorder_Statics; \
public: \
	DECLARE_CLASS(ADataRecorder, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Drummer"), NO_API) \
	DECLARE_SERIALIZER(ADataRecorder)


#define FID_olavu_Documents_Unreal_Projects_AIDrummer_Source_Drummer_Public_Database_DataRecorder_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADataRecorder(ADataRecorder&&); \
	ADataRecorder(const ADataRecorder&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADataRecorder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADataRecorder); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADataRecorder) \
	NO_API virtual ~ADataRecorder();


#define FID_olavu_Documents_Unreal_Projects_AIDrummer_Source_Drummer_Public_Database_DataRecorder_h_10_PROLOG
#define FID_olavu_Documents_Unreal_Projects_AIDrummer_Source_Drummer_Public_Database_DataRecorder_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_olavu_Documents_Unreal_Projects_AIDrummer_Source_Drummer_Public_Database_DataRecorder_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_olavu_Documents_Unreal_Projects_AIDrummer_Source_Drummer_Public_Database_DataRecorder_h_13_INCLASS_NO_PURE_DECLS \
	FID_olavu_Documents_Unreal_Projects_AIDrummer_Source_Drummer_Public_Database_DataRecorder_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DRUMMER_API UClass* StaticClass<class ADataRecorder>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_olavu_Documents_Unreal_Projects_AIDrummer_Source_Drummer_Public_Database_DataRecorder_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
