// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Items/Drumsticks/Drumstick.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef DRUMMER_Drumstick_generated_h
#error "Drumstick.generated.h already included, missing '#pragma once' in Drumstick.h"
#endif
#define DRUMMER_Drumstick_generated_h

#define FID_projects_AIDrummer_Source_Drummer_Public_Items_Drumsticks_Drumstick_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnBoxOverlap);


#define FID_projects_AIDrummer_Source_Drummer_Public_Items_Drumsticks_Drumstick_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADrumstick(); \
	friend struct Z_Construct_UClass_ADrumstick_Statics; \
public: \
	DECLARE_CLASS(ADrumstick, AItem, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Drummer"), NO_API) \
	DECLARE_SERIALIZER(ADrumstick)


#define FID_projects_AIDrummer_Source_Drummer_Public_Items_Drumsticks_Drumstick_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADrumstick(ADrumstick&&); \
	ADrumstick(const ADrumstick&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADrumstick); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADrumstick); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADrumstick) \
	NO_API virtual ~ADrumstick();


#define FID_projects_AIDrummer_Source_Drummer_Public_Items_Drumsticks_Drumstick_h_15_PROLOG
#define FID_projects_AIDrummer_Source_Drummer_Public_Items_Drumsticks_Drumstick_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_projects_AIDrummer_Source_Drummer_Public_Items_Drumsticks_Drumstick_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_projects_AIDrummer_Source_Drummer_Public_Items_Drumsticks_Drumstick_h_18_INCLASS_NO_PURE_DECLS \
	FID_projects_AIDrummer_Source_Drummer_Public_Items_Drumsticks_Drumstick_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DRUMMER_API UClass* StaticClass<class ADrumstick>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_projects_AIDrummer_Source_Drummer_Public_Items_Drumsticks_Drumstick_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
