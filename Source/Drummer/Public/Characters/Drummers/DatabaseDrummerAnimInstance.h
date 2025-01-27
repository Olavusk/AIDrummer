#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "DatabaseDrummerAnimInstance.generated.h"

UCLASS()
class DRUMMER_API UDatabaseDrummerAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Animation")
	void ApplyFrameData(const TMap<FName, FVector> &BoneData, int32 FrameIndex);

	UPROPERTY(BlueprintReadOnly)
	class ADatabaseDrummer *DatabaseDrummer;

	UFUNCTION(BlueprintCallable, Category = "Drummer Animation")
	TMap<FName, FVector> GetBoneTransformData() const { return BoneTransformData; }

protected:
	virtual void NativeInitializeAnimation() override;
	virtual void NativeUpdateAnimation(float DeltaTime) override;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Drummer Animation", meta = (AllowPrivateAccess = "true"))
	TMap<FName, FVector> BoneTransformData;

	TMap<FName, FVector> CurrentBonePositions;

	int32 CurrentFrameIndex;
	float FrameTimeAccumulator;
};