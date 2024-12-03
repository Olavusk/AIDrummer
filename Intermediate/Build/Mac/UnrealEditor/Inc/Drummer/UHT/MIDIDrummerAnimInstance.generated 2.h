// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Characters/Drummers/MIDIDrummerAnimInstance.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DRUMMER_MIDIDrummerAnimInstance_generated_h
#error "MIDIDrummerAnimInstance.generated.h already included, missing '#pragma once' in MIDIDrummerAnimInstance.h"
#endif
#define DRUMMER_MIDIDrummerAnimInstance_generated_h

#define FID_olavu_Documents_Unreal_Projects_AIDrummer_Source_Drummer_Public_Characters_Drummers_MIDIDrummerAnimInstance_h_12_DELEGATE \
DRUMMER_API void FOnMIDIBonePositionUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnMIDIBonePositionUpdated, FName BoneName, FVector BonePosition);


#define FID_olavu_Documents_Unreal_Projects_AIDrummer_Source_Drummer_Public_Characters_Drummers_MIDIDrummerAnimInstance_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMIDIDrummerAnimInstance(); \
	friend struct Z_Construct_UClass_UMIDIDrummerAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UMIDIDrummerAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Drummer"), NO_API) \
	DECLARE_SERIALIZER(UMIDIDrummerAnimInstance)


#define FID_olavu_Documents_Unreal_Projects_AIDrummer_Source_Drummer_Public_Characters_Drummers_MIDIDrummerAnimInstance_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMIDIDrummerAnimInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMIDIDrummerAnimInstance(UMIDIDrummerAnimInstance&&); \
	UMIDIDrummerAnimInstance(const UMIDIDrummerAnimInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMIDIDrummerAnimInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMIDIDrummerAnimInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMIDIDrummerAnimInstance) \
	NO_API virtual ~UMIDIDrummerAnimInstance();


#define FID_olavu_Documents_Unreal_Projects_AIDrummer_Source_Drummer_Public_Characters_Drummers_MIDIDrummerAnimInstance_h_14_PROLOG
#define FID_olavu_Documents_Unreal_Projects_AIDrummer_Source_Drummer_Public_Characters_Drummers_MIDIDrummerAnimInstance_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_olavu_Documents_Unreal_Projects_AIDrummer_Source_Drummer_Public_Characters_Drummers_MIDIDrummerAnimInstance_h_17_INCLASS_NO_PURE_DECLS \
	FID_olavu_Documents_Unreal_Projects_AIDrummer_Source_Drummer_Public_Characters_Drummers_MIDIDrummerAnimInstance_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DRUMMER_API UClass* StaticClass<class UMIDIDrummerAnimInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_olavu_Documents_Unreal_Projects_AIDrummer_Source_Drummer_Public_Characters_Drummers_MIDIDrummerAnimInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
