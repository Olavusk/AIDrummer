// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Characters/DrummerCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DRUMMER_DrummerCharacter_generated_h
#error "DrummerCharacter.generated.h already included, missing '#pragma once' in DrummerCharacter.h"
#endif
#define DRUMMER_DrummerCharacter_generated_h

#define FID_projects_AIDrummer_Source_Drummer_Public_Characters_DrummerCharacter_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execEquipDrumsticks); \
	DECLARE_FUNCTION(execFinishEquipping); \
	DECLARE_FUNCTION(execArm); \
	DECLARE_FUNCTION(execDisarm); \
	DECLARE_FUNCTION(execAttackEnd); \
	DECLARE_FUNCTION(execEnterDrummingState); \
	DECLARE_FUNCTION(execSetDrumstickCollisionEnabled); \
	DECLARE_FUNCTION(execSetWeaponCollisionEnabled);


#define FID_projects_AIDrummer_Source_Drummer_Public_Characters_DrummerCharacter_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADrummerCharacter(); \
	friend struct Z_Construct_UClass_ADrummerCharacter_Statics; \
public: \
	DECLARE_CLASS(ADrummerCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Drummer"), NO_API) \
	DECLARE_SERIALIZER(ADrummerCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<ADrummerCharacter*>(this); }


#define FID_projects_AIDrummer_Source_Drummer_Public_Characters_DrummerCharacter_h_28_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADrummerCharacter(ADrummerCharacter&&); \
	ADrummerCharacter(const ADrummerCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADrummerCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADrummerCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADrummerCharacter) \
	NO_API virtual ~ADrummerCharacter();


#define FID_projects_AIDrummer_Source_Drummer_Public_Characters_DrummerCharacter_h_25_PROLOG
#define FID_projects_AIDrummer_Source_Drummer_Public_Characters_DrummerCharacter_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_projects_AIDrummer_Source_Drummer_Public_Characters_DrummerCharacter_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_projects_AIDrummer_Source_Drummer_Public_Characters_DrummerCharacter_h_28_INCLASS_NO_PURE_DECLS \
	FID_projects_AIDrummer_Source_Drummer_Public_Characters_DrummerCharacter_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DRUMMER_API UClass* StaticClass<class ADrummerCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_projects_AIDrummer_Source_Drummer_Public_Characters_DrummerCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
