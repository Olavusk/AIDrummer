#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "SQLiteDatabase.h"
#include "DatabaseDrummer.generated.h"

UCLASS()
class DRUMMER_API ADatabaseDrummer : public ACharacter
{
	GENERATED_BODY()

public:
	ADatabaseDrummer();

	bool GetAnimationFrameData(int32 FrameIndex, TMap<FName, FVector> &OutBoneData) const;
	const TMap<int32, TMap<FName, FVector>> &GetAnimationFrames() const;

protected:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

private:
	FSQLiteDatabase Database;
	bool bDatabaseOpen = false;

	UPROPERTY()
	class UDatabaseDrummerAnimInstance *DrummerAnimInstance;

	UPROPERTY(EditAnywhere, Category = "Database")
	FString DatabasePath;

	TMap<int32, TMap<FName, FVector>> AnimationFrames;

	void LoadAnimationFromDatabase();
};