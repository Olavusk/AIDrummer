#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h" // <-- this is critical for FTableRowBase

#include "BoneRetargetRow.generated.h"

USTRUCT(BlueprintType)
struct FBoneRetargetRow : public FTableRowBase
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FName Original;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FName Retarget;
};