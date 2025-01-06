// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SmartsuitBlueprintLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ASmartsuitController;
struct FFace;
struct FProp;
struct FSuitData;
struct FTracker;
#ifdef SMARTSUIT_SmartsuitBlueprintLibrary_generated_h
#error "SmartsuitBlueprintLibrary.generated.h already included, missing '#pragma once' in SmartsuitBlueprintLibrary.h"
#endif
#define SMARTSUIT_SmartsuitBlueprintLibrary_generated_h

#define FID_olavu_Documents_Unreal_Projects_AIDrummer_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitBlueprintLibrary_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetPropRotation); \
	DECLARE_FUNCTION(execGetPropLocation); \
	DECLARE_FUNCTION(execCreateVirtualProductionSource); \
	DECLARE_FUNCTION(execJSONTest); \
	DECLARE_FUNCTION(execGetSmartsuitController); \
	DECLARE_FUNCTION(execGetSmartsuitControllerByName); \
	DECLARE_FUNCTION(execUPosition); \
	DECLARE_FUNCTION(execFQuatToRotator); \
	DECLARE_FUNCTION(execGetTracker); \
	DECLARE_FUNCTION(execGetProp); \
	DECLARE_FUNCTION(execGetAllProps); \
	DECLARE_FUNCTION(execGetTrackerByConnectionIDFromVP); \
	DECLARE_FUNCTION(execGetAllSmartsuits); \
	DECLARE_FUNCTION(execGetAvailableActorNames); \
	DECLARE_FUNCTION(execGetSmartsuitByName); \
	DECLARE_FUNCTION(execGetFacesNotAssociatedWithActor); \
	DECLARE_FUNCTION(execGetAllFaces); \
	DECLARE_FUNCTION(execGetFaceByProfileName); \
	DECLARE_FUNCTION(execGetFaceByFaceID);


#define FID_olavu_Documents_Unreal_Projects_AIDrummer_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitBlueprintLibrary_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSmartsuitBlueprintLibrary(); \
	friend struct Z_Construct_UClass_USmartsuitBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(USmartsuitBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Smartsuit"), NO_API) \
	DECLARE_SERIALIZER(USmartsuitBlueprintLibrary)


#define FID_olavu_Documents_Unreal_Projects_AIDrummer_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitBlueprintLibrary_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USmartsuitBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USmartsuitBlueprintLibrary(USmartsuitBlueprintLibrary&&); \
	USmartsuitBlueprintLibrary(const USmartsuitBlueprintLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USmartsuitBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USmartsuitBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USmartsuitBlueprintLibrary) \
	NO_API virtual ~USmartsuitBlueprintLibrary();


#define FID_olavu_Documents_Unreal_Projects_AIDrummer_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitBlueprintLibrary_h_23_PROLOG
#define FID_olavu_Documents_Unreal_Projects_AIDrummer_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitBlueprintLibrary_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_olavu_Documents_Unreal_Projects_AIDrummer_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitBlueprintLibrary_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_olavu_Documents_Unreal_Projects_AIDrummer_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitBlueprintLibrary_h_26_INCLASS_NO_PURE_DECLS \
	FID_olavu_Documents_Unreal_Projects_AIDrummer_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitBlueprintLibrary_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SMARTSUIT_API UClass* StaticClass<class USmartsuitBlueprintLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_olavu_Documents_Unreal_Projects_AIDrummer_Plugins_Smartsuit_Source_Smartsuit_Public_SmartsuitBlueprintLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
