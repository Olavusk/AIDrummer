#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h" // <-- this is critical for FTableRowBase

#include "BoneToModuleRow.generated.h"

USTRUCT(BlueprintType)
struct FBoneToModuleRow : public FTableRowBase
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FName BoneName;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString ModuleName;
};