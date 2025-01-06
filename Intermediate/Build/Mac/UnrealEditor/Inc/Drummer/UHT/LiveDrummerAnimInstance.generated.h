// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Characters/Drummers/LiveDrummerAnimInstance.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DRUMMER_LiveDrummerAnimInstance_generated_h
#error "LiveDrummerAnimInstance.generated.h already included, missing '#pragma once' in LiveDrummerAnimInstance.h"
#endif
#define DRUMMER_LiveDrummerAnimInstance_generated_h

#define FID_olavu_Documents_Unreal_Projects_AIDrummer_Source_Drummer_Public_Characters_Drummers_LiveDrummerAnimInstance_h_12_DELEGATE \
DRUMMER_API void FOnLiveBonePositionUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnLiveBonePositionUpdated, FName BoneName, FVector BonePosition);


#define FID_olavu_Documents_Unreal_Projects_AIDrummer_Source_Drummer_Public_Characters_Drummers_LiveDrummerAnimInstance_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULiveDrummerAnimInstance(); \
	friend struct Z_Construct_UClass_ULiveDrummerAnimInstance_Statics; \
public: \
	DECLARE_CLASS(ULiveDrummerAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Drummer"), NO_API) \
	DECLARE_SERIALIZER(ULiveDrummerAnimInstance)


#define FID_olavu_Documents_Unreal_Projects_AIDrummer_Source_Drummer_Public_Characters_Drummers_LiveDrummerAnimInstance_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULiveDrummerAnimInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULiveDrummerAnimInstance(ULiveDrummerAnimInstance&&); \
	ULiveDrummerAnimInstance(const ULiveDrummerAnimInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULiveDrummerAnimInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULiveDrummerAnimInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULiveDrummerAnimInstance) \
	NO_API virtual ~ULiveDrummerAnimInstance();


#define FID_olavu_Documents_Unreal_Projects_AIDrummer_Source_Drummer_Public_Characters_Drummers_LiveDrummerAnimInstance_h_14_PROLOG
#define FID_olavu_Documents_Unreal_Projects_AIDrummer_Source_Drummer_Public_Characters_Drummers_LiveDrummerAnimInstance_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_olavu_Documents_Unreal_Projects_AIDrummer_Source_Drummer_Public_Characters_Drummers_LiveDrummerAnimInstance_h_17_INCLASS_NO_PURE_DECLS \
	FID_olavu_Documents_Unreal_Projects_AIDrummer_Source_Drummer_Public_Characters_Drummers_LiveDrummerAnimInstance_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DRUMMER_API UClass* StaticClass<class ULiveDrummerAnimInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_olavu_Documents_Unreal_Projects_AIDrummer_Source_Drummer_Public_Characters_Drummers_LiveDrummerAnimInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
