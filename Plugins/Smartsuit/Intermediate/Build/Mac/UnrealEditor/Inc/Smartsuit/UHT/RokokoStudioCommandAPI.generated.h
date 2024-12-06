// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RokokoStudioCommandAPI.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FRokokoCommandAPI_CalibrateInput;
struct FRokokoCommandAPI_IPInfo;
struct FRokokoCommandAPI_PlaybackInput;
struct FRokokoCommandAPI_TrackerInput;
struct FTimecode;
#ifdef SMARTSUIT_RokokoStudioCommandAPI_generated_h
#error "RokokoStudioCommandAPI.generated.h already included, missing '#pragma once' in RokokoStudioCommandAPI.h"
#endif
#define SMARTSUIT_RokokoStudioCommandAPI_generated_h

#define FID_olavu_Documents_Unreal_Projects_rokoko_studio_live_unreal_engine_Plugins_Smartsuit_Source_Smartsuit_Public_RokokoStudioCommandAPI_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRokokoCommandAPI_IPInfo_Statics; \
	SMARTSUIT_API static class UScriptStruct* StaticStruct();


template<> SMARTSUIT_API UScriptStruct* StaticStruct<struct FRokokoCommandAPI_IPInfo>();

#define FID_olavu_Documents_Unreal_Projects_rokoko_studio_live_unreal_engine_Plugins_Smartsuit_Source_Smartsuit_Public_RokokoStudioCommandAPI_h_29_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRokokoCommandAPI_CalibrateInput_Statics; \
	SMARTSUIT_API static class UScriptStruct* StaticStruct();


template<> SMARTSUIT_API UScriptStruct* StaticStruct<struct FRokokoCommandAPI_CalibrateInput>();

#define FID_olavu_Documents_Unreal_Projects_rokoko_studio_live_unreal_engine_Plugins_Smartsuit_Source_Smartsuit_Public_RokokoStudioCommandAPI_h_53_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRokokoCommandAPI_TrackerInput_Statics; \
	SMARTSUIT_API static class UScriptStruct* StaticStruct();


template<> SMARTSUIT_API UScriptStruct* StaticStruct<struct FRokokoCommandAPI_TrackerInput>();

#define FID_olavu_Documents_Unreal_Projects_rokoko_studio_live_unreal_engine_Plugins_Smartsuit_Source_Smartsuit_Public_RokokoStudioCommandAPI_h_86_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRokokoCommandAPI_PlaybackInput_Statics; \
	SMARTSUIT_API static class UScriptStruct* StaticStruct();


template<> SMARTSUIT_API UScriptStruct* StaticStruct<struct FRokokoCommandAPI_PlaybackInput>();

#define FID_olavu_Documents_Unreal_Projects_rokoko_studio_live_unreal_engine_Plugins_Smartsuit_Source_Smartsuit_Public_RokokoStudioCommandAPI_h_101_DELEGATE \
SMARTSUIT_API void FOnCompletedRequest_DelegateWrapper(const FMulticastScriptDelegate& OnCompletedRequest, int32 ResponseCode, const FString& ResponseContentString, bool bSucceeded);


#define FID_olavu_Documents_Unreal_Projects_rokoko_studio_live_unreal_engine_Plugins_Smartsuit_Source_Smartsuit_Public_RokokoStudioCommandAPI_h_102_DELEGATE \
SMARTSUIT_API void FOnInfoRequest_DelegateWrapper(const FMulticastScriptDelegate& OnInfoRequest, TArray<FString> const& Devices, TArray<FString> const& Clips, TArray<FString> const& Actors, TArray<FString> const& Characters);


#define FID_olavu_Documents_Unreal_Projects_rokoko_studio_live_unreal_engine_Plugins_Smartsuit_Source_Smartsuit_Public_RokokoStudioCommandAPI_h_103_DELEGATE \
SMARTSUIT_API void FOnTrackerRequest_DelegateWrapper(const FMulticastScriptDelegate& OnTrackerRequest, FVector Position, FQuat Rotation);


#define FID_olavu_Documents_Unreal_Projects_rokoko_studio_live_unreal_engine_Plugins_Smartsuit_Source_Smartsuit_Public_RokokoStudioCommandAPI_h_104_DELEGATE \
SMARTSUIT_API void FOnPlaybackRequest_DelegateWrapper(const FMulticastScriptDelegate& OnPlaybackRequest, double CurrentTime, bool IsPlaying, double MinTime, double MaxTime, double PlaybackSpeedMultiplier);


#define FID_olavu_Documents_Unreal_Projects_rokoko_studio_live_unreal_engine_Plugins_Smartsuit_Source_Smartsuit_Public_RokokoStudioCommandAPI_h_114_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetDefaultIPInfo); \
	DECLARE_FUNCTION(execLivestream); \
	DECLARE_FUNCTION(execPlayback); \
	DECLARE_FUNCTION(execTracker); \
	DECLARE_FUNCTION(execStopRecording); \
	DECLARE_FUNCTION(execStartRecording); \
	DECLARE_FUNCTION(execCalibrate); \
	DECLARE_FUNCTION(execResetActor); \
	DECLARE_FUNCTION(execRestart); \
	DECLARE_FUNCTION(execInfo);


#define FID_olavu_Documents_Unreal_Projects_rokoko_studio_live_unreal_engine_Plugins_Smartsuit_Source_Smartsuit_Public_RokokoStudioCommandAPI_h_114_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURokokoStudioCommandAPI(); \
	friend struct Z_Construct_UClass_URokokoStudioCommandAPI_Statics; \
public: \
	DECLARE_CLASS(URokokoStudioCommandAPI, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Smartsuit"), NO_API) \
	DECLARE_SERIALIZER(URokokoStudioCommandAPI)


#define FID_olavu_Documents_Unreal_Projects_rokoko_studio_live_unreal_engine_Plugins_Smartsuit_Source_Smartsuit_Public_RokokoStudioCommandAPI_h_114_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URokokoStudioCommandAPI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	URokokoStudioCommandAPI(URokokoStudioCommandAPI&&); \
	URokokoStudioCommandAPI(const URokokoStudioCommandAPI&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URokokoStudioCommandAPI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URokokoStudioCommandAPI); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URokokoStudioCommandAPI) \
	NO_API virtual ~URokokoStudioCommandAPI();


#define FID_olavu_Documents_Unreal_Projects_rokoko_studio_live_unreal_engine_Plugins_Smartsuit_Source_Smartsuit_Public_RokokoStudioCommandAPI_h_111_PROLOG
#define FID_olavu_Documents_Unreal_Projects_rokoko_studio_live_unreal_engine_Plugins_Smartsuit_Source_Smartsuit_Public_RokokoStudioCommandAPI_h_114_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_olavu_Documents_Unreal_Projects_rokoko_studio_live_unreal_engine_Plugins_Smartsuit_Source_Smartsuit_Public_RokokoStudioCommandAPI_h_114_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_olavu_Documents_Unreal_Projects_rokoko_studio_live_unreal_engine_Plugins_Smartsuit_Source_Smartsuit_Public_RokokoStudioCommandAPI_h_114_INCLASS_NO_PURE_DECLS \
	FID_olavu_Documents_Unreal_Projects_rokoko_studio_live_unreal_engine_Plugins_Smartsuit_Source_Smartsuit_Public_RokokoStudioCommandAPI_h_114_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SMARTSUIT_API UClass* StaticClass<class URokokoStudioCommandAPI>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_olavu_Documents_Unreal_Projects_rokoko_studio_live_unreal_engine_Plugins_Smartsuit_Source_Smartsuit_Public_RokokoStudioCommandAPI_h


#define FOREACH_ENUM_EPLAYBACKCHANGE(op) \
	op(EPlaybackChange::NONE) \
	op(EPlaybackChange::IsPlaying) \
	op(EPlaybackChange::CurrentTime) \
	op(EPlaybackChange::GotoFirstFrame) \
	op(EPlaybackChange::GotoLastFrame) \
	op(EPlaybackChange::PlaybackSpeed) 

enum class EPlaybackChange : uint8;
template<> struct TIsUEnumClass<EPlaybackChange> { enum { Value = true }; };
template<> SMARTSUIT_API UEnum* StaticEnum<EPlaybackChange>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
