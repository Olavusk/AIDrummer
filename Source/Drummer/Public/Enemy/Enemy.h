
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Interfaces/HitInterface.h"
#include "Enemy.generated.h"

class UAnimMontage;

UCLASS()
class DRUMMER_API AEnemy : public ACharacter, public IHitInterface
{
	GENERATED_BODY()

public:
	AEnemy();

	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent *PlayerInputComponent) override;

	void DirectionalHitReact(const FVector &ImpactPoint);
	virtual void GetHit(const FVector &ImpactPoint) override;

private:
	/**
	 * Animation montages
	 */

	UPROPERTY(EditDefaultsOnly, Category = Montages)
	UAnimMontage *HitReactMontage;

	UPROPERTY(EditAnywhere, Category = Sounds)
	USoundBase *HitSound;

	UPROPERTY(EditAnywhere, Category = VisualEffects)
	UParticleSystem *HitParticles;

protected:
	virtual void BeginPlay() override;

	/**
	 * Play montage functions
	 */
	void PlayHitReactMontage(const FName &SectionName);

public:
};
