// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Characters/DrummerAnimInstance.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DRUMMER_DrummerAnimInstance_generated_h
#error "DrummerAnimInstance.generated.h already included, missing '#pragma once' in DrummerAnimInstance.h"
#endif
#define DRUMMER_DrummerAnimInstance_generated_h

#define FID_projects_AIDrummer_Source_Drummer_Public_Characters_DrummerAnimInstance_h_13_DELEGATE \
DRUMMER_API void FOnBonePositionUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnBonePositionUpdated, FName BoneName, FVector BonePosition);


#define FID_projects_AIDrummer_Source_Drummer_Public_Characters_DrummerAnimInstance_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDrummerAnimInstance(); \
	friend struct Z_Construct_UClass_UDrummerAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UDrummerAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Drummer"), NO_API) \
	DECLARE_SERIALIZER(UDrummerAnimInstance)


#define FID_projects_AIDrummer_Source_Drummer_Public_Characters_DrummerAnimInstance_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDrummerAnimInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDrummerAnimInstance(UDrummerAnimInstance&&); \
	UDrummerAnimInstance(const UDrummerAnimInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDrummerAnimInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDrummerAnimInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDrummerAnimInstance) \
	NO_API virtual ~UDrummerAnimInstance();


#define FID_projects_AIDrummer_Source_Drummer_Public_Characters_DrummerAnimInstance_h_14_PROLOG
#define FID_projects_AIDrummer_Source_Drummer_Public_Characters_DrummerAnimInstance_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_projects_AIDrummer_Source_Drummer_Public_Characters_DrummerAnimInstance_h_17_INCLASS_NO_PURE_DECLS \
	FID_projects_AIDrummer_Source_Drummer_Public_Characters_DrummerAnimInstance_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DRUMMER_API UClass* StaticClass<class UDrummerAnimInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_projects_AIDrummer_Source_Drummer_Public_Characters_DrummerAnimInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
