// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Items/Item.h"
#include "Drumstick.generated.h"

/**
 *
 */

class UBoxComponent;

UCLASS()
class DRUMMER_API ADrumstick : public AItem
{
	GENERATED_BODY()

public:
	ADrumstick();
	void Equip(USceneComponent *InParent, FName InSocketName);
	void AttachMeshToSocket(USceneComponent *InParent, const FName &InSocketName);
	TArray<AActor *> IgnoreActors;

protected:
	virtual void BeginPlay() override;

	virtual void OnSphereOverlap(UPrimitiveComponent *OverlappedComponent, AActor *OtherActor, UPrimitiveComponent *OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult &SweepResult) override;
	virtual void OnSphereEndOverlap(UPrimitiveComponent *OverlappedComponent, AActor *OtherActor, UPrimitiveComponent *OtherComp, int32 OtherBodyIndex) override;

	UFUNCTION()
	void OnBoxOverlap(UPrimitiveComponent *OverlappedComponent, AActor *OtherActor, UPrimitiveComponent *OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult &SweepResult);

private:
	UPROPERTY(VisibleAnywhere, Category = "Drumstick Properties")
	UBoxComponent *DrumstickBox;

	UPROPERTY(VisibleAnywhere)
	USceneComponent *BoxTraceStart;

	UPROPERTY(VisibleAnywhere)
	USceneComponent *BoxTraceEnd;

public:
	FORCEINLINE UBoxComponent *GetDrumstickBox() const { return DrumstickBox; }
};
