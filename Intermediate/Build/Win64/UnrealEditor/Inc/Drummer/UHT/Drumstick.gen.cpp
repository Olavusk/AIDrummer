// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Drummer/Public/Items/Drumsticks/Drumstick.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDrumstick() {}

// Begin Cross Module References
DRUMMER_API UClass* Z_Construct_UClass_ADrumstick();
DRUMMER_API UClass* Z_Construct_UClass_ADrumstick_NoRegister();
DRUMMER_API UClass* Z_Construct_UClass_AItem();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
UPackage* Z_Construct_UPackage__Script_Drummer();
// End Cross Module References

// Begin Class ADrumstick Function OnBoxOverlap
struct Z_Construct_UFunction_ADrumstick_OnBoxOverlap_Statics
{
	struct Drumstick_eventOnBoxOverlap_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Items/Drumsticks/Drumstick.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADrumstick_OnBoxOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Drumstick_eventOnBoxOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADrumstick_OnBoxOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Drumstick_eventOnBoxOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADrumstick_OnBoxOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Drumstick_eventOnBoxOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADrumstick_OnBoxOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Drumstick_eventOnBoxOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ADrumstick_OnBoxOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((Drumstick_eventOnBoxOverlap_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADrumstick_OnBoxOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Drumstick_eventOnBoxOverlap_Parms), &Z_Construct_UFunction_ADrumstick_OnBoxOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADrumstick_OnBoxOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Drumstick_eventOnBoxOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADrumstick_OnBoxOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADrumstick_OnBoxOverlap_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADrumstick_OnBoxOverlap_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADrumstick_OnBoxOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADrumstick_OnBoxOverlap_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADrumstick_OnBoxOverlap_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADrumstick_OnBoxOverlap_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADrumstick_OnBoxOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADrumstick_OnBoxOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADrumstick, nullptr, "OnBoxOverlap", nullptr, nullptr, Z_Construct_UFunction_ADrumstick_OnBoxOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADrumstick_OnBoxOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADrumstick_OnBoxOverlap_Statics::Drumstick_eventOnBoxOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADrumstick_OnBoxOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADrumstick_OnBoxOverlap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADrumstick_OnBoxOverlap_Statics::Drumstick_eventOnBoxOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADrumstick_OnBoxOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADrumstick_OnBoxOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADrumstick::execOnBoxOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnBoxOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// End Class ADrumstick Function OnBoxOverlap

// Begin Class ADrumstick
void ADrumstick::StaticRegisterNativesADrumstick()
{
	UClass* Class = ADrumstick::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnBoxOverlap", &ADrumstick::execOnBoxOverlap },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADrumstick);
UClass* Z_Construct_UClass_ADrumstick_NoRegister()
{
	return ADrumstick::StaticClass();
}
struct Z_Construct_UClass_ADrumstick_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Items/Drumsticks/Drumstick.h" },
		{ "ModuleRelativePath", "Public/Items/Drumsticks/Drumstick.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DrumstickBox_MetaData[] = {
		{ "Category", "Drumstick Properties" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Items/Drumsticks/Drumstick.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoxTraceStart_MetaData[] = {
		{ "Category", "Drumstick" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Items/Drumsticks/Drumstick.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoxTraceEnd_MetaData[] = {
		{ "Category", "Drumstick" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Items/Drumsticks/Drumstick.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DrumstickBox;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BoxTraceStart;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BoxTraceEnd;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ADrumstick_OnBoxOverlap, "OnBoxOverlap" }, // 3000054180
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADrumstick>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADrumstick_Statics::NewProp_DrumstickBox = { "DrumstickBox", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADrumstick, DrumstickBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DrumstickBox_MetaData), NewProp_DrumstickBox_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADrumstick_Statics::NewProp_BoxTraceStart = { "BoxTraceStart", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADrumstick, BoxTraceStart), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoxTraceStart_MetaData), NewProp_BoxTraceStart_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADrumstick_Statics::NewProp_BoxTraceEnd = { "BoxTraceEnd", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADrumstick, BoxTraceEnd), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoxTraceEnd_MetaData), NewProp_BoxTraceEnd_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADrumstick_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADrumstick_Statics::NewProp_DrumstickBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADrumstick_Statics::NewProp_BoxTraceStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADrumstick_Statics::NewProp_BoxTraceEnd,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADrumstick_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADrumstick_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AItem,
	(UObject* (*)())Z_Construct_UPackage__Script_Drummer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADrumstick_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADrumstick_Statics::ClassParams = {
	&ADrumstick::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ADrumstick_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ADrumstick_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADrumstick_Statics::Class_MetaDataParams), Z_Construct_UClass_ADrumstick_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADrumstick()
{
	if (!Z_Registration_Info_UClass_ADrumstick.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADrumstick.OuterSingleton, Z_Construct_UClass_ADrumstick_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADrumstick.OuterSingleton;
}
template<> DRUMMER_API UClass* StaticClass<ADrumstick>()
{
	return ADrumstick::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADrumstick);
ADrumstick::~ADrumstick() {}
// End Class ADrumstick

// Begin Registration
struct Z_CompiledInDeferFile_FID_projects_AIDrummer_Source_Drummer_Public_Items_Drumsticks_Drumstick_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADrumstick, ADrumstick::StaticClass, TEXT("ADrumstick"), &Z_Registration_Info_UClass_ADrumstick, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADrumstick), 3994174000U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projects_AIDrummer_Source_Drummer_Public_Items_Drumsticks_Drumstick_h_3964737229(TEXT("/Script/Drummer"),
	Z_CompiledInDeferFile_FID_projects_AIDrummer_Source_Drummer_Public_Items_Drumsticks_Drumstick_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projects_AIDrummer_Source_Drummer_Public_Items_Drumsticks_Drumstick_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
