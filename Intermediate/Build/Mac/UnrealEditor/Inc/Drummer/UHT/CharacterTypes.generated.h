// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Characters/CharacterTypes.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DRUMMER_CharacterTypes_generated_h
#error "CharacterTypes.generated.h already included, missing '#pragma once' in CharacterTypes.h"
#endif
#define DRUMMER_CharacterTypes_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_olavu_Documents_Unreal_Projects_AIDrummer_Source_Drummer_Public_Characters_CharacterTypes_h


#define FOREACH_ENUM_ECHARACTERSTATE(op) \
	op(ECharacterState::ECS_Unequipped) \
	op(ECharacterState::ECS_EquippedOneHandedWeapon) \
	op(ECharacterState::ECS_EquipedTwoHandedWeapon) \
	op(ECharacterState::ECS_EquippedRightHandDrumstick) \
	op(ECharacterState::ECS_EquippedLeftHandDrumstick) \
	op(ECharacterState::ECS_Drumming) 

enum class ECharacterState : uint8;
template<> struct TIsUEnumClass<ECharacterState> { enum { Value = true }; };
template<> DRUMMER_API UEnum* StaticEnum<ECharacterState>();

#define FOREACH_ENUM_EACTIONSTATE(op) \
	op(EActionState::EAS_Unoccupied) \
	op(EActionState::EAS_Attacking) \
	op(EActionState::EAS_EquippingWeapon) \
	op(EActionState::EAS_EquippingDrumstick) 

enum class EActionState : uint8;
template<> struct TIsUEnumClass<EActionState> { enum { Value = true }; };
template<> DRUMMER_API UEnum* StaticEnum<EActionState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
