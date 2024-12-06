// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Smartsuit/Public/VirtualProductionFrame.h"
#include "Smartsuit/Public/RokokoSkeletonData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVirtualProductionFrame() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
SMARTSUIT_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterData();
SMARTSUIT_API UScriptStruct* Z_Construct_UScriptStruct_FFace();
SMARTSUIT_API UScriptStruct* Z_Construct_UScriptStruct_FNewtonData();
SMARTSUIT_API UScriptStruct* Z_Construct_UScriptStruct_FProfile();
SMARTSUIT_API UScriptStruct* Z_Construct_UScriptStruct_FProp();
SMARTSUIT_API UScriptStruct* Z_Construct_UScriptStruct_FRadiusReferencePoint();
SMARTSUIT_API UScriptStruct* Z_Construct_UScriptStruct_FReferencePoint();
SMARTSUIT_API UScriptStruct* Z_Construct_UScriptStruct_FSuitData();
SMARTSUIT_API UScriptStruct* Z_Construct_UScriptStruct_FTracker();
SMARTSUIT_API UScriptStruct* Z_Construct_UScriptStruct_FVirtualProductionFrame();
UPackage* Z_Construct_UPackage__Script_Smartsuit();
// End Cross Module References

// Begin ScriptStruct FRadiusReferencePoint
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RadiusReferencePoint;
class UScriptStruct* FRadiusReferencePoint::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RadiusReferencePoint.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RadiusReferencePoint.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRadiusReferencePoint, (UObject*)Z_Construct_UPackage__Script_Smartsuit(), TEXT("RadiusReferencePoint"));
	}
	return Z_Registration_Info_UScriptStruct_RadiusReferencePoint.OuterSingleton;
}
template<> SMARTSUIT_API UScriptStruct* StaticStruct<FRadiusReferencePoint>()
{
	return FRadiusReferencePoint::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRadiusReferencePoint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Contains all information about a grip." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_radius_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Grip radius." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_position_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Grip position." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_rotation_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Grip rotation." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_radius;
	static const UECodeGen_Private::FStructPropertyParams NewProp_position;
	static const UECodeGen_Private::FStructPropertyParams NewProp_rotation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRadiusReferencePoint>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRadiusReferencePoint_Statics::NewProp_radius = { "radius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRadiusReferencePoint, radius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_radius_MetaData), NewProp_radius_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRadiusReferencePoint_Statics::NewProp_position = { "position", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRadiusReferencePoint, position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_position_MetaData), NewProp_position_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRadiusReferencePoint_Statics::NewProp_rotation = { "rotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRadiusReferencePoint, rotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_rotation_MetaData), NewProp_rotation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRadiusReferencePoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRadiusReferencePoint_Statics::NewProp_radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRadiusReferencePoint_Statics::NewProp_position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRadiusReferencePoint_Statics::NewProp_rotation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRadiusReferencePoint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRadiusReferencePoint_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Smartsuit,
	nullptr,
	&NewStructOps,
	"RadiusReferencePoint",
	Z_Construct_UScriptStruct_FRadiusReferencePoint_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRadiusReferencePoint_Statics::PropPointers),
	sizeof(FRadiusReferencePoint),
	alignof(FRadiusReferencePoint),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRadiusReferencePoint_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRadiusReferencePoint_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRadiusReferencePoint()
{
	if (!Z_Registration_Info_UScriptStruct_RadiusReferencePoint.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RadiusReferencePoint.InnerSingleton, Z_Construct_UScriptStruct_FRadiusReferencePoint_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RadiusReferencePoint.InnerSingleton;
}
// End ScriptStruct FRadiusReferencePoint

// Begin ScriptStruct FReferencePoint
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ReferencePoint;
class UScriptStruct* FReferencePoint::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ReferencePoint.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ReferencePoint.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FReferencePoint, (UObject*)Z_Construct_UPackage__Script_Smartsuit(), TEXT("ReferencePoint"));
	}
	return Z_Registration_Info_UScriptStruct_ReferencePoint.OuterSingleton;
}
template<> SMARTSUIT_API UScriptStruct* StaticStruct<FReferencePoint>()
{
	return FReferencePoint::StaticStruct();
}
struct Z_Construct_UScriptStruct_FReferencePoint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Contains all information about the pivot." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_position_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pivot position." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_rotation_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pivot rotation." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_position;
	static const UECodeGen_Private::FStructPropertyParams NewProp_rotation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FReferencePoint>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FReferencePoint_Statics::NewProp_position = { "position", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FReferencePoint, position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_position_MetaData), NewProp_position_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FReferencePoint_Statics::NewProp_rotation = { "rotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FReferencePoint, rotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_rotation_MetaData), NewProp_rotation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FReferencePoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReferencePoint_Statics::NewProp_position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReferencePoint_Statics::NewProp_rotation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReferencePoint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FReferencePoint_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Smartsuit,
	nullptr,
	&NewStructOps,
	"ReferencePoint",
	Z_Construct_UScriptStruct_FReferencePoint_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReferencePoint_Statics::PropPointers),
	sizeof(FReferencePoint),
	alignof(FReferencePoint),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReferencePoint_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FReferencePoint_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FReferencePoint()
{
	if (!Z_Registration_Info_UScriptStruct_ReferencePoint.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ReferencePoint.InnerSingleton, Z_Construct_UScriptStruct_FReferencePoint_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ReferencePoint.InnerSingleton;
}
// End ScriptStruct FReferencePoint

// Begin ScriptStruct FProfile
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Profile;
class UScriptStruct* FProfile::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Profile.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Profile.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProfile, (UObject*)Z_Construct_UPackage__Script_Smartsuit(), TEXT("Profile"));
	}
	return Z_Registration_Info_UScriptStruct_Profile.OuterSingleton;
}
template<> SMARTSUIT_API UScriptStruct* StaticStruct<FProfile>()
{
	return FProfile::StaticStruct();
}
struct Z_Construct_UScriptStruct_FProfile_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Contains all information about a prop's profile." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Profile's name." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_uuid_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Profile's uuid." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_dimensions_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Profile's dimensions." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_color_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Profile's color." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_trackerOffset_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tracker Offset." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_pivot_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pivot." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_grips_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of grips." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_propType_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Profile's prop type." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_name;
	static const UECodeGen_Private::FStrPropertyParams NewProp_uuid;
	static const UECodeGen_Private::FStructPropertyParams NewProp_dimensions;
	static const UECodeGen_Private::FStructPropertyParams NewProp_color;
	static const UECodeGen_Private::FStructPropertyParams NewProp_trackerOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_pivot;
	static const UECodeGen_Private::FStructPropertyParams NewProp_grips_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_grips;
	static const UECodeGen_Private::FIntPropertyParams NewProp_propType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProfile>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProfile_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProfile, name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_name_MetaData), NewProp_name_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProfile_Statics::NewProp_uuid = { "uuid", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProfile, uuid), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_uuid_MetaData), NewProp_uuid_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProfile_Statics::NewProp_dimensions = { "dimensions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProfile, dimensions), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_dimensions_MetaData), NewProp_dimensions_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProfile_Statics::NewProp_color = { "color", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProfile, color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_color_MetaData), NewProp_color_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProfile_Statics::NewProp_trackerOffset = { "trackerOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProfile, trackerOffset), Z_Construct_UScriptStruct_FReferencePoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_trackerOffset_MetaData), NewProp_trackerOffset_MetaData) }; // 4204782241
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProfile_Statics::NewProp_pivot = { "pivot", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProfile, pivot), Z_Construct_UScriptStruct_FReferencePoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_pivot_MetaData), NewProp_pivot_MetaData) }; // 4204782241
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProfile_Statics::NewProp_grips_Inner = { "grips", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRadiusReferencePoint, METADATA_PARAMS(0, nullptr) }; // 2515445372
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FProfile_Statics::NewProp_grips = { "grips", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProfile, grips), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_grips_MetaData), NewProp_grips_MetaData) }; // 2515445372
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FProfile_Statics::NewProp_propType = { "propType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProfile, propType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_propType_MetaData), NewProp_propType_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProfile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfile_Statics::NewProp_name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfile_Statics::NewProp_uuid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfile_Statics::NewProp_dimensions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfile_Statics::NewProp_color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfile_Statics::NewProp_trackerOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfile_Statics::NewProp_pivot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfile_Statics::NewProp_grips_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfile_Statics::NewProp_grips,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfile_Statics::NewProp_propType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProfile_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Smartsuit,
	nullptr,
	&NewStructOps,
	"Profile",
	Z_Construct_UScriptStruct_FProfile_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfile_Statics::PropPointers),
	sizeof(FProfile),
	alignof(FProfile),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfile_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FProfile_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FProfile()
{
	if (!Z_Registration_Info_UScriptStruct_Profile.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Profile.InnerSingleton, Z_Construct_UScriptStruct_FProfile_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_Profile.InnerSingleton;
}
// End ScriptStruct FProfile

// Begin ScriptStruct FProp
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Prop;
class UScriptStruct* FProp::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Prop.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Prop.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProp, (UObject*)Z_Construct_UPackage__Script_Smartsuit(), TEXT("Prop"));
	}
	return Z_Registration_Info_UScriptStruct_Prop.OuterSingleton;
}
template<> SMARTSUIT_API UScriptStruct* StaticStruct<FProp>()
{
	return FProp::StaticStruct();
}
struct Z_Construct_UScriptStruct_FProp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Contains all information about a prop." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Prop's name." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_color_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Rotation information." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_id_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Prop's id." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_position_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Position information." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_rotation_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Rotation information." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_isLive_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Information about whether a prop is live or not." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_profile_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Information about prop's profile." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_name;
	static const UECodeGen_Private::FStructPropertyParams NewProp_color;
	static const UECodeGen_Private::FStrPropertyParams NewProp_id;
	static const UECodeGen_Private::FStructPropertyParams NewProp_position;
	static const UECodeGen_Private::FStructPropertyParams NewProp_rotation;
	static void NewProp_isLive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_isLive;
	static const UECodeGen_Private::FStructPropertyParams NewProp_profile;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProp>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProp_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProp, name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_name_MetaData), NewProp_name_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProp_Statics::NewProp_color = { "color", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProp, color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_color_MetaData), NewProp_color_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProp_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProp, id), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_id_MetaData), NewProp_id_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProp_Statics::NewProp_position = { "position", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProp, position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_position_MetaData), NewProp_position_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProp_Statics::NewProp_rotation = { "rotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProp, rotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_rotation_MetaData), NewProp_rotation_MetaData) };
void Z_Construct_UScriptStruct_FProp_Statics::NewProp_isLive_SetBit(void* Obj)
{
	((FProp*)Obj)->isLive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FProp_Statics::NewProp_isLive = { "isLive", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FProp), &Z_Construct_UScriptStruct_FProp_Statics::NewProp_isLive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_isLive_MetaData), NewProp_isLive_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProp_Statics::NewProp_profile = { "profile", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProp, profile), Z_Construct_UScriptStruct_FProfile, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_profile_MetaData), NewProp_profile_MetaData) }; // 2175688368
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProp_Statics::NewProp_name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProp_Statics::NewProp_color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProp_Statics::NewProp_id,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProp_Statics::NewProp_position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProp_Statics::NewProp_rotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProp_Statics::NewProp_isLive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProp_Statics::NewProp_profile,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProp_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Smartsuit,
	nullptr,
	&NewStructOps,
	"Prop",
	Z_Construct_UScriptStruct_FProp_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProp_Statics::PropPointers),
	sizeof(FProp),
	alignof(FProp),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProp_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FProp_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FProp()
{
	if (!Z_Registration_Info_UScriptStruct_Prop.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Prop.InnerSingleton, Z_Construct_UScriptStruct_FProp_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_Prop.InnerSingleton;
}
// End ScriptStruct FProp

// Begin ScriptStruct FTracker
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Tracker;
class UScriptStruct* FTracker::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Tracker.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Tracker.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTracker, (UObject*)Z_Construct_UPackage__Script_Smartsuit(), TEXT("Tracker"));
	}
	return Z_Registration_Info_UScriptStruct_Tracker.OuterSingleton;
}
template<> SMARTSUIT_API UScriptStruct* StaticStruct<FTracker>()
{
	return FTracker::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTracker_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Contains all information about a tracker." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tracker's name." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_connectionId_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tracker's connection id." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_position_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Position information." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_rotation_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Rotation information." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_isLive_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Information about whether a tracker is live or not." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_trackingResult_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Information about the result of the tracking." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_trackerType_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**Indicates the type of the tracker.*/" },
#endif
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Indicates the type of the tracker." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RenderModelName_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Render Model Name." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_battery_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Battery information." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_name;
	static const UECodeGen_Private::FStrPropertyParams NewProp_connectionId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_position;
	static const UECodeGen_Private::FStructPropertyParams NewProp_rotation;
	static void NewProp_isLive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_isLive;
	static const UECodeGen_Private::FIntPropertyParams NewProp_trackingResult;
	static const UECodeGen_Private::FIntPropertyParams NewProp_trackerType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_RenderModelName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_battery;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTracker>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTracker_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTracker, name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_name_MetaData), NewProp_name_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTracker_Statics::NewProp_connectionId = { "connectionId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTracker, connectionId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_connectionId_MetaData), NewProp_connectionId_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTracker_Statics::NewProp_position = { "position", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTracker, position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_position_MetaData), NewProp_position_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTracker_Statics::NewProp_rotation = { "rotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTracker, rotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_rotation_MetaData), NewProp_rotation_MetaData) };
void Z_Construct_UScriptStruct_FTracker_Statics::NewProp_isLive_SetBit(void* Obj)
{
	((FTracker*)Obj)->isLive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTracker_Statics::NewProp_isLive = { "isLive", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FTracker), &Z_Construct_UScriptStruct_FTracker_Statics::NewProp_isLive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_isLive_MetaData), NewProp_isLive_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTracker_Statics::NewProp_trackingResult = { "trackingResult", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTracker, trackingResult), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_trackingResult_MetaData), NewProp_trackingResult_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTracker_Statics::NewProp_trackerType = { "trackerType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTracker, trackerType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_trackerType_MetaData), NewProp_trackerType_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTracker_Statics::NewProp_RenderModelName = { "RenderModelName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTracker, RenderModelName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RenderModelName_MetaData), NewProp_RenderModelName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTracker_Statics::NewProp_battery = { "battery", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTracker, battery), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_battery_MetaData), NewProp_battery_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTracker_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTracker_Statics::NewProp_name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTracker_Statics::NewProp_connectionId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTracker_Statics::NewProp_position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTracker_Statics::NewProp_rotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTracker_Statics::NewProp_isLive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTracker_Statics::NewProp_trackingResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTracker_Statics::NewProp_trackerType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTracker_Statics::NewProp_RenderModelName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTracker_Statics::NewProp_battery,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTracker_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTracker_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Smartsuit,
	nullptr,
	&NewStructOps,
	"Tracker",
	Z_Construct_UScriptStruct_FTracker_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTracker_Statics::PropPointers),
	sizeof(FTracker),
	alignof(FTracker),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTracker_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTracker_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTracker()
{
	if (!Z_Registration_Info_UScriptStruct_Tracker.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Tracker.InnerSingleton, Z_Construct_UScriptStruct_FTracker_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_Tracker.InnerSingleton;
}
// End ScriptStruct FTracker

// Begin ScriptStruct FFace
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Face;
class UScriptStruct* FFace::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Face.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Face.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFace, (UObject*)Z_Construct_UPackage__Script_Smartsuit(), TEXT("Face"));
	}
	return Z_Registration_Info_UScriptStruct_Face.OuterSingleton;
}
template<> SMARTSUIT_API UScriptStruct* StaticStruct<FFace>()
{
	return FFace::StaticStruct();
}
struct Z_Construct_UScriptStruct_FFace_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Contains all the information for face." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_profileName_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_version_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Face's version." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_provider_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Face's provider." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_faceId_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Face's ID." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_actorName_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Face's ID." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_eyeBlinkLeft_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Faces blendshape" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_eyeLookDownLeft_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Faces blendshape" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_eyeLookInLeft_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Faces blendshape" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_eyeLookOutLeft_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Faces blendshape" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_eyeLookUpLeft_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Faces blendshape" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_eyeSquintLeft_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Faces blendshape" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_eyeWideLeft_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Faces blendshape" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_eyeBlinkRight_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Faces blendshape" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_eyeLookDownRight_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Faces blendshape" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_eyeLookInRight_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Faces blendshape" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_eyeLookOutRight_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Faces blendshape" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_eyeLookUpRight_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Faces blendshape" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_eyeSquintRight_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Faces blendshape" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_eyeWideRight_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Faces blendshape" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_jawForward_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Faces blendshape" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_jawLeft_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Faces blendshape" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_jawRight_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Faces blendshape" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_jawOpen_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Faces blendshape" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_mouthClose_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Faces blendshape" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_mouthFunnel_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Faces blendshape" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_mouthPucker_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Faces blendshape" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_mouthLeft_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Faces blendshape" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_mouthRight_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Faces blendshape" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_mouthSmileLeft_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Faces blendshape" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_mouthSmileRight_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Faces blendshape" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_mouthFrownLeft_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Faces blendshape" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_mouthFrownRight_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Faces blendshape" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_mouthDimpleLeft_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Faces blendshape" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_mouthDimpleRight_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Faces blendshape" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_mouthStretchLeft_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Faces blendshape" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_mouthStretchRight_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Faces blendshape" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_mouthRollLower_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Faces blendshape" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_mouthRollUpper_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Faces blendshape" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_mouthShrugLower_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Faces blendshape" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_mouthShrugUpper_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Faces blendshape" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_mouthPressLeft_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Faces blendshape" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_mouthPressRight_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Faces blendshape" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_mouthLowerDownLeft_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Faces blendshape" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_mouthLowerDownRight_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Faces blendshape" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_mouthUpperUpLeft_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Faces blendshape" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_mouthUpperUpRight_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Faces blendshape" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_browDownLeft_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Faces blendshape" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_browDownRight_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Faces blendshape" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_browInnerUp_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Faces blendshape" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_browOuterUpLeft_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Faces blendshape" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_browOuterUpRight_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Faces blendshape" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_cheekPuff_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Faces blendshape" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_cheekSquintLeft_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Faces blendshape" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_cheekSquintRight_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Faces blendshape" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_noseSneerLeft_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Faces blendshape" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_noseSneerRight_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Faces blendshape" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_tongueOut_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Faces blendshape" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_profileName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_version;
	static const UECodeGen_Private::FStrPropertyParams NewProp_provider;
	static const UECodeGen_Private::FStrPropertyParams NewProp_faceId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_actorName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_eyeBlinkLeft;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_eyeLookDownLeft;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_eyeLookInLeft;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_eyeLookOutLeft;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_eyeLookUpLeft;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_eyeSquintLeft;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_eyeWideLeft;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_eyeBlinkRight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_eyeLookDownRight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_eyeLookInRight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_eyeLookOutRight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_eyeLookUpRight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_eyeSquintRight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_eyeWideRight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_jawForward;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_jawLeft;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_jawRight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_jawOpen;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_mouthClose;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_mouthFunnel;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_mouthPucker;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_mouthLeft;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_mouthRight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_mouthSmileLeft;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_mouthSmileRight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_mouthFrownLeft;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_mouthFrownRight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_mouthDimpleLeft;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_mouthDimpleRight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_mouthStretchLeft;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_mouthStretchRight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_mouthRollLower;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_mouthRollUpper;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_mouthShrugLower;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_mouthShrugUpper;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_mouthPressLeft;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_mouthPressRight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_mouthLowerDownLeft;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_mouthLowerDownRight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_mouthUpperUpLeft;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_mouthUpperUpRight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_browDownLeft;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_browDownRight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_browInnerUp;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_browOuterUpLeft;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_browOuterUpRight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_cheekPuff;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_cheekSquintLeft;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_cheekSquintRight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_noseSneerLeft;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_noseSneerRight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_tongueOut;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFace>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFace_Statics::NewProp_profileName = { "profileName", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFace, profileName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_profileName_MetaData), NewProp_profileName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFace_Statics::NewProp_version = { "version", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFace, version), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_version_MetaData), NewProp_version_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFace_Statics::NewProp_provider = { "provider", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFace, provider), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_provider_MetaData), NewProp_provider_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFace_Statics::NewProp_faceId = { "faceId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFace, faceId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_faceId_MetaData), NewProp_faceId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFace_Statics::NewProp_actorName = { "actorName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFace, actorName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_actorName_MetaData), NewProp_actorName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFace_Statics::NewProp_eyeBlinkLeft = { "eyeBlinkLeft", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFace, eyeBlinkLeft), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_eyeBlinkLeft_MetaData), NewProp_eyeBlinkLeft_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFace_Statics::NewProp_eyeLookDownLeft = { "eyeLookDownLeft", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFace, eyeLookDownLeft), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_eyeLookDownLeft_MetaData), NewProp_eyeLookDownLeft_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFace_Statics::NewProp_eyeLookInLeft = { "eyeLookInLeft", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFace, eyeLookInLeft), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_eyeLookInLeft_MetaData), NewProp_eyeLookInLeft_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFace_Statics::NewProp_eyeLookOutLeft = { "eyeLookOutLeft", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFace, eyeLookOutLeft), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_eyeLookOutLeft_MetaData), NewProp_eyeLookOutLeft_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFace_Statics::NewProp_eyeLookUpLeft = { "eyeLookUpLeft", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFace, eyeLookUpLeft), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_eyeLookUpLeft_MetaData), NewProp_eyeLookUpLeft_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFace_Statics::NewProp_eyeSquintLeft = { "eyeSquintLeft", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFace, eyeSquintLeft), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_eyeSquintLeft_MetaData), NewProp_eyeSquintLeft_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFace_Statics::NewProp_eyeWideLeft = { "eyeWideLeft", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFace, eyeWideLeft), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_eyeWideLeft_MetaData), NewProp_eyeWideLeft_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFace_Statics::NewProp_eyeBlinkRight = { "eyeBlinkRight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFace, eyeBlinkRight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_eyeBlinkRight_MetaData), NewProp_eyeBlinkRight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFace_Statics::NewProp_eyeLookDownRight = { "eyeLookDownRight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFace, eyeLookDownRight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_eyeLookDownRight_MetaData), NewProp_eyeLookDownRight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFace_Statics::NewProp_eyeLookInRight = { "eyeLookInRight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFace, eyeLookInRight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_eyeLookInRight_MetaData), NewProp_eyeLookInRight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFace_Statics::NewProp_eyeLookOutRight = { "eyeLookOutRight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFace, eyeLookOutRight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_eyeLookOutRight_MetaData), NewProp_eyeLookOutRight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFace_Statics::NewProp_eyeLookUpRight = { "eyeLookUpRight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFace, eyeLookUpRight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_eyeLookUpRight_MetaData), NewProp_eyeLookUpRight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFace_Statics::NewProp_eyeSquintRight = { "eyeSquintRight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFace, eyeSquintRight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_eyeSquintRight_MetaData), NewProp_eyeSquintRight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFace_Statics::NewProp_eyeWideRight = { "eyeWideRight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFace, eyeWideRight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_eyeWideRight_MetaData), NewProp_eyeWideRight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFace_Statics::NewProp_jawForward = { "jawForward", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFace, jawForward), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_jawForward_MetaData), NewProp_jawForward_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFace_Statics::NewProp_jawLeft = { "jawLeft", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFace, jawLeft), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_jawLeft_MetaData), NewProp_jawLeft_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFace_Statics::NewProp_jawRight = { "jawRight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFace, jawRight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_jawRight_MetaData), NewProp_jawRight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFace_Statics::NewProp_jawOpen = { "jawOpen", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFace, jawOpen), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_jawOpen_MetaData), NewProp_jawOpen_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthClose = { "mouthClose", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFace, mouthClose), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_mouthClose_MetaData), NewProp_mouthClose_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthFunnel = { "mouthFunnel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFace, mouthFunnel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_mouthFunnel_MetaData), NewProp_mouthFunnel_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthPucker = { "mouthPucker", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFace, mouthPucker), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_mouthPucker_MetaData), NewProp_mouthPucker_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthLeft = { "mouthLeft", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFace, mouthLeft), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_mouthLeft_MetaData), NewProp_mouthLeft_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthRight = { "mouthRight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFace, mouthRight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_mouthRight_MetaData), NewProp_mouthRight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthSmileLeft = { "mouthSmileLeft", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFace, mouthSmileLeft), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_mouthSmileLeft_MetaData), NewProp_mouthSmileLeft_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthSmileRight = { "mouthSmileRight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFace, mouthSmileRight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_mouthSmileRight_MetaData), NewProp_mouthSmileRight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthFrownLeft = { "mouthFrownLeft", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFace, mouthFrownLeft), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_mouthFrownLeft_MetaData), NewProp_mouthFrownLeft_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthFrownRight = { "mouthFrownRight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFace, mouthFrownRight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_mouthFrownRight_MetaData), NewProp_mouthFrownRight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthDimpleLeft = { "mouthDimpleLeft", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFace, mouthDimpleLeft), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_mouthDimpleLeft_MetaData), NewProp_mouthDimpleLeft_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthDimpleRight = { "mouthDimpleRight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFace, mouthDimpleRight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_mouthDimpleRight_MetaData), NewProp_mouthDimpleRight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthStretchLeft = { "mouthStretchLeft", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFace, mouthStretchLeft), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_mouthStretchLeft_MetaData), NewProp_mouthStretchLeft_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthStretchRight = { "mouthStretchRight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFace, mouthStretchRight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_mouthStretchRight_MetaData), NewProp_mouthStretchRight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthRollLower = { "mouthRollLower", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFace, mouthRollLower), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_mouthRollLower_MetaData), NewProp_mouthRollLower_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthRollUpper = { "mouthRollUpper", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFace, mouthRollUpper), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_mouthRollUpper_MetaData), NewProp_mouthRollUpper_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthShrugLower = { "mouthShrugLower", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFace, mouthShrugLower), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_mouthShrugLower_MetaData), NewProp_mouthShrugLower_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthShrugUpper = { "mouthShrugUpper", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFace, mouthShrugUpper), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_mouthShrugUpper_MetaData), NewProp_mouthShrugUpper_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthPressLeft = { "mouthPressLeft", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFace, mouthPressLeft), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_mouthPressLeft_MetaData), NewProp_mouthPressLeft_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthPressRight = { "mouthPressRight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFace, mouthPressRight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_mouthPressRight_MetaData), NewProp_mouthPressRight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthLowerDownLeft = { "mouthLowerDownLeft", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFace, mouthLowerDownLeft), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_mouthLowerDownLeft_MetaData), NewProp_mouthLowerDownLeft_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthLowerDownRight = { "mouthLowerDownRight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFace, mouthLowerDownRight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_mouthLowerDownRight_MetaData), NewProp_mouthLowerDownRight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthUpperUpLeft = { "mouthUpperUpLeft", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFace, mouthUpperUpLeft), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_mouthUpperUpLeft_MetaData), NewProp_mouthUpperUpLeft_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthUpperUpRight = { "mouthUpperUpRight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFace, mouthUpperUpRight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_mouthUpperUpRight_MetaData), NewProp_mouthUpperUpRight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFace_Statics::NewProp_browDownLeft = { "browDownLeft", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFace, browDownLeft), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_browDownLeft_MetaData), NewProp_browDownLeft_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFace_Statics::NewProp_browDownRight = { "browDownRight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFace, browDownRight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_browDownRight_MetaData), NewProp_browDownRight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFace_Statics::NewProp_browInnerUp = { "browInnerUp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFace, browInnerUp), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_browInnerUp_MetaData), NewProp_browInnerUp_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFace_Statics::NewProp_browOuterUpLeft = { "browOuterUpLeft", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFace, browOuterUpLeft), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_browOuterUpLeft_MetaData), NewProp_browOuterUpLeft_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFace_Statics::NewProp_browOuterUpRight = { "browOuterUpRight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFace, browOuterUpRight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_browOuterUpRight_MetaData), NewProp_browOuterUpRight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFace_Statics::NewProp_cheekPuff = { "cheekPuff", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFace, cheekPuff), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_cheekPuff_MetaData), NewProp_cheekPuff_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFace_Statics::NewProp_cheekSquintLeft = { "cheekSquintLeft", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFace, cheekSquintLeft), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_cheekSquintLeft_MetaData), NewProp_cheekSquintLeft_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFace_Statics::NewProp_cheekSquintRight = { "cheekSquintRight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFace, cheekSquintRight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_cheekSquintRight_MetaData), NewProp_cheekSquintRight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFace_Statics::NewProp_noseSneerLeft = { "noseSneerLeft", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFace, noseSneerLeft), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_noseSneerLeft_MetaData), NewProp_noseSneerLeft_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFace_Statics::NewProp_noseSneerRight = { "noseSneerRight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFace, noseSneerRight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_noseSneerRight_MetaData), NewProp_noseSneerRight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFace_Statics::NewProp_tongueOut = { "tongueOut", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFace, tongueOut), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_tongueOut_MetaData), NewProp_tongueOut_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFace_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFace_Statics::NewProp_profileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFace_Statics::NewProp_version,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFace_Statics::NewProp_provider,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFace_Statics::NewProp_faceId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFace_Statics::NewProp_actorName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFace_Statics::NewProp_eyeBlinkLeft,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFace_Statics::NewProp_eyeLookDownLeft,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFace_Statics::NewProp_eyeLookInLeft,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFace_Statics::NewProp_eyeLookOutLeft,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFace_Statics::NewProp_eyeLookUpLeft,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFace_Statics::NewProp_eyeSquintLeft,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFace_Statics::NewProp_eyeWideLeft,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFace_Statics::NewProp_eyeBlinkRight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFace_Statics::NewProp_eyeLookDownRight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFace_Statics::NewProp_eyeLookInRight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFace_Statics::NewProp_eyeLookOutRight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFace_Statics::NewProp_eyeLookUpRight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFace_Statics::NewProp_eyeSquintRight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFace_Statics::NewProp_eyeWideRight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFace_Statics::NewProp_jawForward,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFace_Statics::NewProp_jawLeft,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFace_Statics::NewProp_jawRight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFace_Statics::NewProp_jawOpen,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthClose,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthFunnel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthPucker,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthLeft,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthRight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthSmileLeft,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthSmileRight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthFrownLeft,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthFrownRight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthDimpleLeft,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthDimpleRight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthStretchLeft,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthStretchRight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthRollLower,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthRollUpper,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthShrugLower,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthShrugUpper,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthPressLeft,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthPressRight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthLowerDownLeft,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthLowerDownRight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthUpperUpLeft,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthUpperUpRight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFace_Statics::NewProp_browDownLeft,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFace_Statics::NewProp_browDownRight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFace_Statics::NewProp_browInnerUp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFace_Statics::NewProp_browOuterUpLeft,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFace_Statics::NewProp_browOuterUpRight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFace_Statics::NewProp_cheekPuff,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFace_Statics::NewProp_cheekSquintLeft,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFace_Statics::NewProp_cheekSquintRight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFace_Statics::NewProp_noseSneerLeft,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFace_Statics::NewProp_noseSneerRight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFace_Statics::NewProp_tongueOut,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFace_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFace_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Smartsuit,
	nullptr,
	&NewStructOps,
	"Face",
	Z_Construct_UScriptStruct_FFace_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFace_Statics::PropPointers),
	sizeof(FFace),
	alignof(FFace),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFace_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFace_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFace()
{
	if (!Z_Registration_Info_UScriptStruct_Face.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Face.InnerSingleton, Z_Construct_UScriptStruct_FFace_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_Face.InnerSingleton;
}
// End ScriptStruct FFace

// Begin ScriptStruct FVirtualProductionFrame
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VirtualProductionFrame;
class UScriptStruct* FVirtualProductionFrame::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VirtualProductionFrame.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VirtualProductionFrame.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVirtualProductionFrame, (UObject*)Z_Construct_UPackage__Script_Smartsuit(), TEXT("VirtualProductionFrame"));
	}
	return Z_Registration_Info_UScriptStruct_VirtualProductionFrame.OuterSingleton;
}
template<> SMARTSUIT_API UScriptStruct* StaticStruct<FVirtualProductionFrame>()
{
	return FVirtualProductionFrame::StaticStruct();
}
struct Z_Construct_UScriptStruct_FVirtualProductionFrame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Virtual Production frame contains all props' and trackers' information." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Version_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Virtual Production version." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Props_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of props." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Trackers_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of trackers." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Faces_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of faces." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Actors_MetaData[] = {
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Characters_MetaData[] = {
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Newtons_MetaData[] = {
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Version;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Props_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Props;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Trackers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Trackers;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Faces_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Faces;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Actors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Actors;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Characters_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Characters;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Newtons_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Newtons;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVirtualProductionFrame>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVirtualProductionFrame_Statics::NewProp_Version = { "Version", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVirtualProductionFrame, Version), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Version_MetaData), NewProp_Version_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVirtualProductionFrame_Statics::NewProp_Props_Inner = { "Props", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FProp, METADATA_PARAMS(0, nullptr) }; // 2553890183
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVirtualProductionFrame_Statics::NewProp_Props = { "Props", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVirtualProductionFrame, Props), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Props_MetaData), NewProp_Props_MetaData) }; // 2553890183
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVirtualProductionFrame_Statics::NewProp_Trackers_Inner = { "Trackers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTracker, METADATA_PARAMS(0, nullptr) }; // 2648379077
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVirtualProductionFrame_Statics::NewProp_Trackers = { "Trackers", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVirtualProductionFrame, Trackers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Trackers_MetaData), NewProp_Trackers_MetaData) }; // 2648379077
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVirtualProductionFrame_Statics::NewProp_Faces_Inner = { "Faces", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FFace, METADATA_PARAMS(0, nullptr) }; // 1334212696
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVirtualProductionFrame_Statics::NewProp_Faces = { "Faces", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVirtualProductionFrame, Faces), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Faces_MetaData), NewProp_Faces_MetaData) }; // 1334212696
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVirtualProductionFrame_Statics::NewProp_Actors_Inner = { "Actors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSuitData, METADATA_PARAMS(0, nullptr) }; // 1152959455
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVirtualProductionFrame_Statics::NewProp_Actors = { "Actors", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVirtualProductionFrame, Actors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Actors_MetaData), NewProp_Actors_MetaData) }; // 1152959455
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVirtualProductionFrame_Statics::NewProp_Characters_Inner = { "Characters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCharacterData, METADATA_PARAMS(0, nullptr) }; // 210037287
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVirtualProductionFrame_Statics::NewProp_Characters = { "Characters", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVirtualProductionFrame, Characters), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Characters_MetaData), NewProp_Characters_MetaData) }; // 210037287
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVirtualProductionFrame_Statics::NewProp_Newtons_Inner = { "Newtons", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNewtonData, METADATA_PARAMS(0, nullptr) }; // 2762288304
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVirtualProductionFrame_Statics::NewProp_Newtons = { "Newtons", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVirtualProductionFrame, Newtons), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Newtons_MetaData), NewProp_Newtons_MetaData) }; // 2762288304
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVirtualProductionFrame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVirtualProductionFrame_Statics::NewProp_Version,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVirtualProductionFrame_Statics::NewProp_Props_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVirtualProductionFrame_Statics::NewProp_Props,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVirtualProductionFrame_Statics::NewProp_Trackers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVirtualProductionFrame_Statics::NewProp_Trackers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVirtualProductionFrame_Statics::NewProp_Faces_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVirtualProductionFrame_Statics::NewProp_Faces,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVirtualProductionFrame_Statics::NewProp_Actors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVirtualProductionFrame_Statics::NewProp_Actors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVirtualProductionFrame_Statics::NewProp_Characters_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVirtualProductionFrame_Statics::NewProp_Characters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVirtualProductionFrame_Statics::NewProp_Newtons_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVirtualProductionFrame_Statics::NewProp_Newtons,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVirtualProductionFrame_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVirtualProductionFrame_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Smartsuit,
	nullptr,
	&NewStructOps,
	"VirtualProductionFrame",
	Z_Construct_UScriptStruct_FVirtualProductionFrame_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVirtualProductionFrame_Statics::PropPointers),
	sizeof(FVirtualProductionFrame),
	alignof(FVirtualProductionFrame),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVirtualProductionFrame_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVirtualProductionFrame_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVirtualProductionFrame()
{
	if (!Z_Registration_Info_UScriptStruct_VirtualProductionFrame.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VirtualProductionFrame.InnerSingleton, Z_Construct_UScriptStruct_FVirtualProductionFrame_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_VirtualProductionFrame.InnerSingleton;
}
// End ScriptStruct FVirtualProductionFrame

// Begin Registration
struct Z_CompiledInDeferFile_FID_olavu_Documents_Unreal_Projects_rokoko_studio_live_unreal_engine_Plugins_Smartsuit_Source_Smartsuit_Public_VirtualProductionFrame_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRadiusReferencePoint::StaticStruct, Z_Construct_UScriptStruct_FRadiusReferencePoint_Statics::NewStructOps, TEXT("RadiusReferencePoint"), &Z_Registration_Info_UScriptStruct_RadiusReferencePoint, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRadiusReferencePoint), 2515445372U) },
		{ FReferencePoint::StaticStruct, Z_Construct_UScriptStruct_FReferencePoint_Statics::NewStructOps, TEXT("ReferencePoint"), &Z_Registration_Info_UScriptStruct_ReferencePoint, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FReferencePoint), 4204782241U) },
		{ FProfile::StaticStruct, Z_Construct_UScriptStruct_FProfile_Statics::NewStructOps, TEXT("Profile"), &Z_Registration_Info_UScriptStruct_Profile, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProfile), 2175688368U) },
		{ FProp::StaticStruct, Z_Construct_UScriptStruct_FProp_Statics::NewStructOps, TEXT("Prop"), &Z_Registration_Info_UScriptStruct_Prop, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProp), 2553890183U) },
		{ FTracker::StaticStruct, Z_Construct_UScriptStruct_FTracker_Statics::NewStructOps, TEXT("Tracker"), &Z_Registration_Info_UScriptStruct_Tracker, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTracker), 2648379077U) },
		{ FFace::StaticStruct, Z_Construct_UScriptStruct_FFace_Statics::NewStructOps, TEXT("Face"), &Z_Registration_Info_UScriptStruct_Face, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFace), 1334212696U) },
		{ FVirtualProductionFrame::StaticStruct, Z_Construct_UScriptStruct_FVirtualProductionFrame_Statics::NewStructOps, TEXT("VirtualProductionFrame"), &Z_Registration_Info_UScriptStruct_VirtualProductionFrame, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVirtualProductionFrame), 3002825847U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_olavu_Documents_Unreal_Projects_rokoko_studio_live_unreal_engine_Plugins_Smartsuit_Source_Smartsuit_Public_VirtualProductionFrame_h_1297296836(TEXT("/Script/Smartsuit"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_olavu_Documents_Unreal_Projects_rokoko_studio_live_unreal_engine_Plugins_Smartsuit_Source_Smartsuit_Public_VirtualProductionFrame_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_olavu_Documents_Unreal_Projects_rokoko_studio_live_unreal_engine_Plugins_Smartsuit_Source_Smartsuit_Public_VirtualProductionFrame_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
