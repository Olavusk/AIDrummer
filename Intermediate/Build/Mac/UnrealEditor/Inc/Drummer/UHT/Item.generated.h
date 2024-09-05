// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Items/Item.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef DRUMMER_Item_generated_h
#error "Item.generated.h already included, missing '#pragma once' in Item.h"
#endif
#define DRUMMER_Item_generated_h

#define FID_olavu_Documents_Unreal_Projects_Drummer_Source_Drummer_Public_Items_Item_h_21_SPARSE_DATA
#define FID_olavu_Documents_Unreal_Projects_Drummer_Source_Drummer_Public_Items_Item_h_21_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_olavu_Documents_Unreal_Projects_Drummer_Source_Drummer_Public_Items_Item_h_21_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_olavu_Documents_Unreal_Projects_Drummer_Source_Drummer_Public_Items_Item_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnSphereEndOverlap); \
	DECLARE_FUNCTION(execOnSphereOverlap); \
	DECLARE_FUNCTION(execTransformedCos); \
	DECLARE_FUNCTION(execTransformedSin);


#define FID_olavu_Documents_Unreal_Projects_Drummer_Source_Drummer_Public_Items_Item_h_21_ACCESSORS
#define FID_olavu_Documents_Unreal_Projects_Drummer_Source_Drummer_Public_Items_Item_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAItem(); \
	friend struct Z_Construct_UClass_AItem_Statics; \
public: \
	DECLARE_CLASS(AItem, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Drummer"), NO_API) \
	DECLARE_SERIALIZER(AItem)


#define FID_olavu_Documents_Unreal_Projects_Drummer_Source_Drummer_Public_Items_Item_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AItem(AItem&&); \
	NO_API AItem(const AItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AItem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AItem) \
	NO_API virtual ~AItem();


#define FID_olavu_Documents_Unreal_Projects_Drummer_Source_Drummer_Public_Items_Item_h_18_PROLOG
#define FID_olavu_Documents_Unreal_Projects_Drummer_Source_Drummer_Public_Items_Item_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_olavu_Documents_Unreal_Projects_Drummer_Source_Drummer_Public_Items_Item_h_21_SPARSE_DATA \
	FID_olavu_Documents_Unreal_Projects_Drummer_Source_Drummer_Public_Items_Item_h_21_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_olavu_Documents_Unreal_Projects_Drummer_Source_Drummer_Public_Items_Item_h_21_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_olavu_Documents_Unreal_Projects_Drummer_Source_Drummer_Public_Items_Item_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_olavu_Documents_Unreal_Projects_Drummer_Source_Drummer_Public_Items_Item_h_21_ACCESSORS \
	FID_olavu_Documents_Unreal_Projects_Drummer_Source_Drummer_Public_Items_Item_h_21_INCLASS_NO_PURE_DECLS \
	FID_olavu_Documents_Unreal_Projects_Drummer_Source_Drummer_Public_Items_Item_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DRUMMER_API UClass* StaticClass<class AItem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_olavu_Documents_Unreal_Projects_Drummer_Source_Drummer_Public_Items_Item_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
