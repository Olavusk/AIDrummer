// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Smartsuit/Public/RokokoSkeletonData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRokokoSkeletonData() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
SMARTSUIT_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterData();
SMARTSUIT_API UScriptStruct* Z_Construct_UScriptStruct_FNewtonData();
SMARTSUIT_API UScriptStruct* Z_Construct_UScriptStruct_FRokokoCharacterJoint();
SMARTSUIT_API UScriptStruct* Z_Construct_UScriptStruct_FSmartsuitBone();
SMARTSUIT_API UScriptStruct* Z_Construct_UScriptStruct_FSuitData();
UPackage* Z_Construct_UPackage__Script_Smartsuit();
// End Cross Module References

// Begin ScriptStruct FRokokoCharacterJoint
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RokokoCharacterJoint;
class UScriptStruct* FRokokoCharacterJoint::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RokokoCharacterJoint.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RokokoCharacterJoint.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRokokoCharacterJoint, (UObject*)Z_Construct_UPackage__Script_Smartsuit(), TEXT("RokokoCharacterJoint"));
	}
	return Z_Registration_Info_UScriptStruct_RokokoCharacterJoint.OuterSingleton;
}
template<> SMARTSUIT_API UScriptStruct* StaticStruct<FRokokoCharacterJoint>()
{
	return FRokokoCharacterJoint::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRokokoCharacterJoint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RokokoSkeletonData.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRokokoCharacterJoint>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRokokoCharacterJoint_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Smartsuit,
	nullptr,
	&NewStructOps,
	"RokokoCharacterJoint",
	nullptr,
	0,
	sizeof(FRokokoCharacterJoint),
	alignof(FRokokoCharacterJoint),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRokokoCharacterJoint_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRokokoCharacterJoint_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRokokoCharacterJoint()
{
	if (!Z_Registration_Info_UScriptStruct_RokokoCharacterJoint.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RokokoCharacterJoint.InnerSingleton, Z_Construct_UScriptStruct_FRokokoCharacterJoint_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RokokoCharacterJoint.InnerSingleton;
}
// End ScriptStruct FRokokoCharacterJoint

// Begin ScriptStruct FSmartsuitBone
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SmartsuitBone;
class UScriptStruct* FSmartsuitBone::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SmartsuitBone.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SmartsuitBone.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSmartsuitBone, (UObject*)Z_Construct_UPackage__Script_Smartsuit(), TEXT("SmartsuitBone"));
	}
	return Z_Registration_Info_UScriptStruct_SmartsuitBone.OuterSingleton;
}
template<> SMARTSUIT_API UScriptStruct* StaticStruct<FSmartsuitBone>()
{
	return FSmartsuitBone::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSmartsuitBone_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RokokoSkeletonData.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSmartsuitBone>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSmartsuitBone_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Smartsuit,
	nullptr,
	&NewStructOps,
	"SmartsuitBone",
	nullptr,
	0,
	sizeof(FSmartsuitBone),
	alignof(FSmartsuitBone),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBone_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSmartsuitBone_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSmartsuitBone()
{
	if (!Z_Registration_Info_UScriptStruct_SmartsuitBone.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SmartsuitBone.InnerSingleton, Z_Construct_UScriptStruct_FSmartsuitBone_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SmartsuitBone.InnerSingleton;
}
// End ScriptStruct FSmartsuitBone

// Begin ScriptStruct FSuitData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SuitData;
class UScriptStruct* FSuitData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SuitData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SuitData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSuitData, (UObject*)Z_Construct_UPackage__Script_Smartsuit(), TEXT("SuitData"));
	}
	return Z_Registration_Info_UScriptStruct_SuitData.OuterSingleton;
}
template<> SMARTSUIT_API UScriptStruct* StaticStruct<FSuitData>()
{
	return FSuitData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSuitData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*! \\brief Contains data that represent the last frame received from the Rokoko Actor.\n*\n* This struct represents a skeleton data frame as received from the Studio Actor.\n* It also includes meta variables used to manage the state of the Actor in Unreal.\n*/" },
#endif
		{ "ModuleRelativePath", "Public/RokokoSkeletonData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "! \\brief Contains data that represent the last frame received from the Rokoko Actor.\n*\n* This struct represents a skeleton data frame as received from the Studio Actor.\n* It also includes meta variables used to manage the state of the Actor in Unreal." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_suitname_MetaData[] = {
		{ "Category", "Default" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The name of the Smartsuit. */" },
#endif
		{ "ModuleRelativePath", "Public/RokokoSkeletonData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The name of the Smartsuit." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_id_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/RokokoSkeletonData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_isLive_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/RokokoSkeletonData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_profileName_MetaData[] = {
		{ "Category", "Default" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The name of the profile. */" },
#endif
		{ "ModuleRelativePath", "Public/RokokoSkeletonData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The name of the profile." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_hasGloves_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/RokokoSkeletonData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_hasLeftGlove_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/RokokoSkeletonData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_hasRightGlove_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/RokokoSkeletonData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_hasBody_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/RokokoSkeletonData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_hasFace_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/RokokoSkeletonData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_faceId_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/RokokoSkeletonData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_color_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/RokokoSkeletonData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_suitname;
	static const UECodeGen_Private::FStrPropertyParams NewProp_id;
	static void NewProp_isLive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_isLive;
	static const UECodeGen_Private::FStrPropertyParams NewProp_profileName;
	static void NewProp_hasGloves_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_hasGloves;
	static void NewProp_hasLeftGlove_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_hasLeftGlove;
	static void NewProp_hasRightGlove_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_hasRightGlove;
	static void NewProp_hasBody_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_hasBody;
	static void NewProp_hasFace_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_hasFace;
	static const UECodeGen_Private::FStrPropertyParams NewProp_faceId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_color;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSuitData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSuitData_Statics::NewProp_suitname = { "suitname", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSuitData, suitname), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_suitname_MetaData), NewProp_suitname_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSuitData_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSuitData, id), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_id_MetaData), NewProp_id_MetaData) };
void Z_Construct_UScriptStruct_FSuitData_Statics::NewProp_isLive_SetBit(void* Obj)
{
	((FSuitData*)Obj)->isLive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSuitData_Statics::NewProp_isLive = { "isLive", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSuitData), &Z_Construct_UScriptStruct_FSuitData_Statics::NewProp_isLive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_isLive_MetaData), NewProp_isLive_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSuitData_Statics::NewProp_profileName = { "profileName", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSuitData, profileName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_profileName_MetaData), NewProp_profileName_MetaData) };
void Z_Construct_UScriptStruct_FSuitData_Statics::NewProp_hasGloves_SetBit(void* Obj)
{
	((FSuitData*)Obj)->hasGloves = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSuitData_Statics::NewProp_hasGloves = { "hasGloves", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSuitData), &Z_Construct_UScriptStruct_FSuitData_Statics::NewProp_hasGloves_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_hasGloves_MetaData), NewProp_hasGloves_MetaData) };
void Z_Construct_UScriptStruct_FSuitData_Statics::NewProp_hasLeftGlove_SetBit(void* Obj)
{
	((FSuitData*)Obj)->hasLeftGlove = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSuitData_Statics::NewProp_hasLeftGlove = { "hasLeftGlove", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSuitData), &Z_Construct_UScriptStruct_FSuitData_Statics::NewProp_hasLeftGlove_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_hasLeftGlove_MetaData), NewProp_hasLeftGlove_MetaData) };
void Z_Construct_UScriptStruct_FSuitData_Statics::NewProp_hasRightGlove_SetBit(void* Obj)
{
	((FSuitData*)Obj)->hasRightGlove = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSuitData_Statics::NewProp_hasRightGlove = { "hasRightGlove", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSuitData), &Z_Construct_UScriptStruct_FSuitData_Statics::NewProp_hasRightGlove_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_hasRightGlove_MetaData), NewProp_hasRightGlove_MetaData) };
void Z_Construct_UScriptStruct_FSuitData_Statics::NewProp_hasBody_SetBit(void* Obj)
{
	((FSuitData*)Obj)->hasBody = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSuitData_Statics::NewProp_hasBody = { "hasBody", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSuitData), &Z_Construct_UScriptStruct_FSuitData_Statics::NewProp_hasBody_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_hasBody_MetaData), NewProp_hasBody_MetaData) };
void Z_Construct_UScriptStruct_FSuitData_Statics::NewProp_hasFace_SetBit(void* Obj)
{
	((FSuitData*)Obj)->hasFace = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSuitData_Statics::NewProp_hasFace = { "hasFace", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSuitData), &Z_Construct_UScriptStruct_FSuitData_Statics::NewProp_hasFace_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_hasFace_MetaData), NewProp_hasFace_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSuitData_Statics::NewProp_faceId = { "faceId", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSuitData, faceId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_faceId_MetaData), NewProp_faceId_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSuitData_Statics::NewProp_color = { "color", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSuitData, color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_color_MetaData), NewProp_color_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSuitData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSuitData_Statics::NewProp_suitname,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSuitData_Statics::NewProp_id,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSuitData_Statics::NewProp_isLive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSuitData_Statics::NewProp_profileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSuitData_Statics::NewProp_hasGloves,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSuitData_Statics::NewProp_hasLeftGlove,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSuitData_Statics::NewProp_hasRightGlove,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSuitData_Statics::NewProp_hasBody,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSuitData_Statics::NewProp_hasFace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSuitData_Statics::NewProp_faceId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSuitData_Statics::NewProp_color,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSuitData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSuitData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Smartsuit,
	nullptr,
	&NewStructOps,
	"SuitData",
	Z_Construct_UScriptStruct_FSuitData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSuitData_Statics::PropPointers),
	sizeof(FSuitData),
	alignof(FSuitData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSuitData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSuitData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSuitData()
{
	if (!Z_Registration_Info_UScriptStruct_SuitData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SuitData.InnerSingleton, Z_Construct_UScriptStruct_FSuitData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SuitData.InnerSingleton;
}
// End ScriptStruct FSuitData

// Begin ScriptStruct FCharacterData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CharacterData;
class UScriptStruct* FCharacterData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CharacterData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CharacterData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCharacterData, (UObject*)Z_Construct_UPackage__Script_Smartsuit(), TEXT("CharacterData"));
	}
	return Z_Registration_Info_UScriptStruct_CharacterData.OuterSingleton;
}
template<> SMARTSUIT_API UScriptStruct* StaticStruct<FCharacterData>()
{
	return FCharacterData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCharacterData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RokokoSkeletonData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterName_MetaData[] = {
		{ "Category", "Default" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The name of the Smartsuit. */" },
#endif
		{ "ModuleRelativePath", "Public/RokokoSkeletonData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The name of the Smartsuit." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/RokokoSkeletonData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsLive_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/RokokoSkeletonData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_CharacterName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Id;
	static void NewProp_IsLive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsLive;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCharacterData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCharacterData_Statics::NewProp_CharacterName = { "CharacterName", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterData, CharacterName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterName_MetaData), NewProp_CharacterName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCharacterData_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterData, Id), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Id_MetaData), NewProp_Id_MetaData) };
void Z_Construct_UScriptStruct_FCharacterData_Statics::NewProp_IsLive_SetBit(void* Obj)
{
	((FCharacterData*)Obj)->IsLive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCharacterData_Statics::NewProp_IsLive = { "IsLive", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCharacterData), &Z_Construct_UScriptStruct_FCharacterData_Statics::NewProp_IsLive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsLive_MetaData), NewProp_IsLive_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCharacterData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterData_Statics::NewProp_CharacterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterData_Statics::NewProp_Id,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterData_Statics::NewProp_IsLive,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCharacterData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Smartsuit,
	nullptr,
	&NewStructOps,
	"CharacterData",
	Z_Construct_UScriptStruct_FCharacterData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterData_Statics::PropPointers),
	sizeof(FCharacterData),
	alignof(FCharacterData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCharacterData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCharacterData()
{
	if (!Z_Registration_Info_UScriptStruct_CharacterData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CharacterData.InnerSingleton, Z_Construct_UScriptStruct_FCharacterData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CharacterData.InnerSingleton;
}
// End ScriptStruct FCharacterData

// Begin ScriptStruct FNewtonData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NewtonData;
class UScriptStruct* FNewtonData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NewtonData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NewtonData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNewtonData, (UObject*)Z_Construct_UPackage__Script_Smartsuit(), TEXT("NewtonData"));
	}
	return Z_Registration_Info_UScriptStruct_NewtonData.OuterSingleton;
}
template<> SMARTSUIT_API UScriptStruct* StaticStruct<FNewtonData>()
{
	return FNewtonData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNewtonData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RokokoSkeletonData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewtonName_MetaData[] = {
		{ "Category", "Default" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The name of the Actor. */" },
#endif
		{ "ModuleRelativePath", "Public/RokokoSkeletonData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The name of the Actor." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/RokokoSkeletonData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsLive_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/RokokoSkeletonData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HasFace_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/RokokoSkeletonData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_NewtonName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Id;
	static void NewProp_IsLive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsLive;
	static void NewProp_HasFace_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_HasFace;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNewtonData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNewtonData_Statics::NewProp_NewtonName = { "NewtonName", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNewtonData, NewtonName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewtonName_MetaData), NewProp_NewtonName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNewtonData_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNewtonData, Id), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Id_MetaData), NewProp_Id_MetaData) };
void Z_Construct_UScriptStruct_FNewtonData_Statics::NewProp_IsLive_SetBit(void* Obj)
{
	((FNewtonData*)Obj)->IsLive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNewtonData_Statics::NewProp_IsLive = { "IsLive", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FNewtonData), &Z_Construct_UScriptStruct_FNewtonData_Statics::NewProp_IsLive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsLive_MetaData), NewProp_IsLive_MetaData) };
void Z_Construct_UScriptStruct_FNewtonData_Statics::NewProp_HasFace_SetBit(void* Obj)
{
	((FNewtonData*)Obj)->HasFace = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNewtonData_Statics::NewProp_HasFace = { "HasFace", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FNewtonData), &Z_Construct_UScriptStruct_FNewtonData_Statics::NewProp_HasFace_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HasFace_MetaData), NewProp_HasFace_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNewtonData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNewtonData_Statics::NewProp_NewtonName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNewtonData_Statics::NewProp_Id,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNewtonData_Statics::NewProp_IsLive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNewtonData_Statics::NewProp_HasFace,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNewtonData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNewtonData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Smartsuit,
	nullptr,
	&NewStructOps,
	"NewtonData",
	Z_Construct_UScriptStruct_FNewtonData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNewtonData_Statics::PropPointers),
	sizeof(FNewtonData),
	alignof(FNewtonData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNewtonData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNewtonData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNewtonData()
{
	if (!Z_Registration_Info_UScriptStruct_NewtonData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NewtonData.InnerSingleton, Z_Construct_UScriptStruct_FNewtonData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NewtonData.InnerSingleton;
}
// End ScriptStruct FNewtonData

// Begin Registration
struct Z_CompiledInDeferFile_FID_olavu_Documents_Unreal_Projects_rokoko_studio_live_unreal_engine_Plugins_Smartsuit_Source_Smartsuit_Public_RokokoSkeletonData_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRokokoCharacterJoint::StaticStruct, Z_Construct_UScriptStruct_FRokokoCharacterJoint_Statics::NewStructOps, TEXT("RokokoCharacterJoint"), &Z_Registration_Info_UScriptStruct_RokokoCharacterJoint, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRokokoCharacterJoint), 1420592235U) },
		{ FSmartsuitBone::StaticStruct, Z_Construct_UScriptStruct_FSmartsuitBone_Statics::NewStructOps, TEXT("SmartsuitBone"), &Z_Registration_Info_UScriptStruct_SmartsuitBone, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSmartsuitBone), 407976635U) },
		{ FSuitData::StaticStruct, Z_Construct_UScriptStruct_FSuitData_Statics::NewStructOps, TEXT("SuitData"), &Z_Registration_Info_UScriptStruct_SuitData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSuitData), 1152959455U) },
		{ FCharacterData::StaticStruct, Z_Construct_UScriptStruct_FCharacterData_Statics::NewStructOps, TEXT("CharacterData"), &Z_Registration_Info_UScriptStruct_CharacterData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCharacterData), 210037287U) },
		{ FNewtonData::StaticStruct, Z_Construct_UScriptStruct_FNewtonData_Statics::NewStructOps, TEXT("NewtonData"), &Z_Registration_Info_UScriptStruct_NewtonData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNewtonData), 2762288304U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_olavu_Documents_Unreal_Projects_rokoko_studio_live_unreal_engine_Plugins_Smartsuit_Source_Smartsuit_Public_RokokoSkeletonData_h_20953623(TEXT("/Script/Smartsuit"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_olavu_Documents_Unreal_Projects_rokoko_studio_live_unreal_engine_Plugins_Smartsuit_Source_Smartsuit_Public_RokokoSkeletonData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_olavu_Documents_Unreal_Projects_rokoko_studio_live_unreal_engine_Plugins_Smartsuit_Source_Smartsuit_Public_RokokoSkeletonData_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
