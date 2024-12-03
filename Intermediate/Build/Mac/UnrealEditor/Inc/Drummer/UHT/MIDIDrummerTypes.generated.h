// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Characters/Drummers/MIDIDrummerTypes.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DRUMMER_MIDIDrummerTypes_generated_h
#error "MIDIDrummerTypes.generated.h already included, missing '#pragma once' in MIDIDrummerTypes.h"
#endif
#define DRUMMER_MIDIDrummerTypes_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_olavu_Documents_Unreal_Projects_AIDrummer_Source_Drummer_Public_Characters_Drummers_MIDIDrummerTypes_h


#define FOREACH_ENUM_EMIDIDRUMMERSTATE(op) \
	op(EMIDIDrummerState::EDS_Idle) \
	op(EMIDIDrummerState::EDS_Drumming) 

enum class EMIDIDrummerState : uint8;
template<> struct TIsUEnumClass<EMIDIDrummerState> { enum { Value = true }; };
template<> DRUMMER_API UEnum* StaticEnum<EMIDIDrummerState>();

#define FOREACH_ENUM_EMIDIDRUMMERACTIONSTATE(op) \
	op(EMIDIDrummerActionState::EDAS_Unoccupied) \
	op(EMIDIDrummerActionState::EDAS_Moving) 

enum class EMIDIDrummerActionState : uint8;
template<> struct TIsUEnumClass<EMIDIDrummerActionState> { enum { Value = true }; };
template<> DRUMMER_API UEnum* StaticEnum<EMIDIDrummerActionState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
