// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Items/Weapons/Weapon.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef DRUMMER_Weapon_generated_h
#error "Weapon.generated.h already included, missing '#pragma once' in Weapon.h"
#endif
#define DRUMMER_Weapon_generated_h

#define FID_projects_AIDrummer_Source_Drummer_Public_Items_Weapons_Weapon_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnBoxOverlap);


#define FID_projects_AIDrummer_Source_Drummer_Public_Items_Weapons_Weapon_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWeapon(); \
	friend struct Z_Construct_UClass_AWeapon_Statics; \
public: \
	DECLARE_CLASS(AWeapon, AItem, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Drummer"), NO_API) \
	DECLARE_SERIALIZER(AWeapon)


#define FID_projects_AIDrummer_Source_Drummer_Public_Items_Weapons_Weapon_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AWeapon(AWeapon&&); \
	AWeapon(const AWeapon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeapon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeapon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWeapon) \
	NO_API virtual ~AWeapon();


#define FID_projects_AIDrummer_Source_Drummer_Public_Items_Weapons_Weapon_h_14_PROLOG
#define FID_projects_AIDrummer_Source_Drummer_Public_Items_Weapons_Weapon_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_projects_AIDrummer_Source_Drummer_Public_Items_Weapons_Weapon_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_projects_AIDrummer_Source_Drummer_Public_Items_Weapons_Weapon_h_17_INCLASS_NO_PURE_DECLS \
	FID_projects_AIDrummer_Source_Drummer_Public_Items_Weapons_Weapon_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DRUMMER_API UClass* StaticClass<class AWeapon>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_projects_AIDrummer_Source_Drummer_Public_Items_Weapons_Weapon_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
