// Fill out your copyright notice in the Description page of Project Settings.

#include "Items/Drumsticks/Drumstick.h"
#include "Characters/DrummerCharacter.h"
#include "Components/BoxComponent.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Interfaces/HitInterface.h"

ADrumstick::ADrumstick()
{
    DrumstickBox = CreateDefaultSubobject<UBoxComponent>(TEXT("Drumstick Box"));
    DrumstickBox->SetupAttachment(GetRootComponent());
    DrumstickBox->SetCollisionEnabled(ECollisionEnabled::NoCollision);
    DrumstickBox->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Overlap);
    DrumstickBox->SetCollisionResponseToChannel(ECollisionChannel::ECC_Pawn, ECollisionResponse::ECR_Ignore);

    BoxTraceStart = CreateDefaultSubobject<USceneComponent>(TEXT("Box Trace Start"));
    BoxTraceStart->SetupAttachment(GetRootComponent());

    BoxTraceEnd = CreateDefaultSubobject<USceneComponent>(TEXT("Box Trace End"));
    BoxTraceEnd->SetupAttachment(GetRootComponent());
}
void ADrumstick::BeginPlay()
{
    Super::BeginPlay();
    DrumstickBox->OnComponentBeginOverlap.AddDynamic(this, &ADrumstick::OnBoxOverlap);
}
void ADrumstick::Equip(USceneComponent *InParent, FName InSocketName)
{
    AttachMeshToSocket(InParent, InSocketName);
    ItemState = EItemState::EIS_Equipped;

    // Ensure collision is fully disabled
    DrumstickBox->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}
void ADrumstick::AttachMeshToSocket(USceneComponent *InParent, const FName &InSocketName)
{
    FAttachmentTransformRules TransformRules(EAttachmentRule::SnapToTarget, true);
    ItemMesh->AttachToComponent(InParent, TransformRules, InSocketName);
}

void ADrumstick::OnSphereOverlap(UPrimitiveComponent *OverlappedComponent, AActor *OtherActor, UPrimitiveComponent *OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult &SweepResult)
{
    Super::OnSphereOverlap(OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult);
}

void ADrumstick::OnSphereEndOverlap(UPrimitiveComponent *OverlappedComponent, AActor *OtherActor, UPrimitiveComponent *OtherComp, int32 OtherBodyIndex)
{
    Super::OnSphereEndOverlap(OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex);
}

void ADrumstick::OnBoxOverlap(UPrimitiveComponent *OverlappedComponent, AActor *OtherActor, UPrimitiveComponent *OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult &SweepResult)
{
    const FVector Start = BoxTraceStart->GetComponentLocation();
    const FVector End = BoxTraceEnd->GetComponentLocation();

    TArray<AActor *> ActorsToIgnore;
    ActorsToIgnore.Add(this);

    for (AActor *Actor : IgnoreActors)
    {
        ActorsToIgnore.AddUnique(Actor);
    }

    FHitResult BoxHit;

    UKismetSystemLibrary::BoxTraceSingle(
        this,
        Start,
        End,
        FVector(5.f, 5.f, 5.f),
        BoxTraceStart->GetComponentRotation(),
        ETraceTypeQuery::TraceTypeQuery1,
        false,
        ActorsToIgnore,
        EDrawDebugTrace::ForDuration,
        BoxHit,
        true);
    if (BoxHit.GetActor())
    {
        IHitInterface *HitInterface = Cast<IHitInterface>(BoxHit.GetActor());
        if (HitInterface)
        {
            HitInterface->GetHit(BoxHit.ImpactPoint);
        }
        IgnoreActors.AddUnique(BoxHit.GetActor());
    }
}