// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/HitInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DRUMMER_HitInterface_generated_h
#error "HitInterface.generated.h already included, missing '#pragma once' in HitInterface.h"
#endif
#define DRUMMER_HitInterface_generated_h

#define FID_olavu_Documents_Unreal_Projects_AIDrummer_Source_Drummer_Public_Interfaces_HitInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DRUMMER_API UHitInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UHitInterface(UHitInterface&&); \
	UHitInterface(const UHitInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DRUMMER_API, UHitInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHitInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHitInterface) \
	DRUMMER_API virtual ~UHitInterface();


#define FID_olavu_Documents_Unreal_Projects_AIDrummer_Source_Drummer_Public_Interfaces_HitInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUHitInterface(); \
	friend struct Z_Construct_UClass_UHitInterface_Statics; \
public: \
	DECLARE_CLASS(UHitInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Drummer"), DRUMMER_API) \
	DECLARE_SERIALIZER(UHitInterface)


#define FID_olavu_Documents_Unreal_Projects_AIDrummer_Source_Drummer_Public_Interfaces_HitInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_olavu_Documents_Unreal_Projects_AIDrummer_Source_Drummer_Public_Interfaces_HitInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_olavu_Documents_Unreal_Projects_AIDrummer_Source_Drummer_Public_Interfaces_HitInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_olavu_Documents_Unreal_Projects_AIDrummer_Source_Drummer_Public_Interfaces_HitInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IHitInterface() {} \
public: \
	typedef UHitInterface UClassType; \
	typedef IHitInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_olavu_Documents_Unreal_Projects_AIDrummer_Source_Drummer_Public_Interfaces_HitInterface_h_10_PROLOG
#define FID_olavu_Documents_Unreal_Projects_AIDrummer_Source_Drummer_Public_Interfaces_HitInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_olavu_Documents_Unreal_Projects_AIDrummer_Source_Drummer_Public_Interfaces_HitInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DRUMMER_API UClass* StaticClass<class UHitInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_olavu_Documents_Unreal_Projects_AIDrummer_Source_Drummer_Public_Interfaces_HitInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
