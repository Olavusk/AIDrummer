// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/IEquippable.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DRUMMER_IEquippable_generated_h
#error "IEquippable.generated.h already included, missing '#pragma once' in IEquippable.h"
#endif
#define DRUMMER_IEquippable_generated_h

#define FID_olavu_Documents_Unreal_Projects_AIDrummer_Source_Drummer_Public_Interfaces_IEquippable_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DRUMMER_API UIEquippable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UIEquippable(UIEquippable&&); \
	UIEquippable(const UIEquippable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DRUMMER_API, UIEquippable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIEquippable); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIEquippable) \
	DRUMMER_API virtual ~UIEquippable();


#define FID_olavu_Documents_Unreal_Projects_AIDrummer_Source_Drummer_Public_Interfaces_IEquippable_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUIEquippable(); \
	friend struct Z_Construct_UClass_UIEquippable_Statics; \
public: \
	DECLARE_CLASS(UIEquippable, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Drummer"), DRUMMER_API) \
	DECLARE_SERIALIZER(UIEquippable)


#define FID_olavu_Documents_Unreal_Projects_AIDrummer_Source_Drummer_Public_Interfaces_IEquippable_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_olavu_Documents_Unreal_Projects_AIDrummer_Source_Drummer_Public_Interfaces_IEquippable_h_13_GENERATED_UINTERFACE_BODY() \
	FID_olavu_Documents_Unreal_Projects_AIDrummer_Source_Drummer_Public_Interfaces_IEquippable_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_olavu_Documents_Unreal_Projects_AIDrummer_Source_Drummer_Public_Interfaces_IEquippable_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IIEquippable() {} \
public: \
	typedef UIEquippable UClassType; \
	typedef IIEquippable ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_olavu_Documents_Unreal_Projects_AIDrummer_Source_Drummer_Public_Interfaces_IEquippable_h_10_PROLOG
#define FID_olavu_Documents_Unreal_Projects_AIDrummer_Source_Drummer_Public_Interfaces_IEquippable_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_olavu_Documents_Unreal_Projects_AIDrummer_Source_Drummer_Public_Interfaces_IEquippable_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DRUMMER_API UClass* StaticClass<class UIEquippable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_olavu_Documents_Unreal_Projects_AIDrummer_Source_Drummer_Public_Interfaces_IEquippable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
