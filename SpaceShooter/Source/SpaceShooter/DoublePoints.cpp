// Fill out your copyright notice in the Description page of Project Settings.


#include "DoublePoints.h"
#include "PaperSpriteComponent.h"
#include "Components/BoxComponent.h"
#include "Sound/SoundBase.h"
#include "Kismet/GameplayStatics.h"
#include "PlayerCharacter.h"
#include "Components/SceneComponent.h"

// Sets default values
ADoublePoints::ADoublePoints()
{
	rootComp = CreateDefaultSubobject<UPaperSpriteComponent>(TEXT("RootComp"));
	rootComp->SetupAttachment(RootComponent);

	powerupMesh = CreateDefaultSubobject<UPaperSpriteComponent>(TEXT("powerupMesh"));
	powerupMesh->SetupAttachment(rootComp);

	TriggerBox = CreateDefaultSubobject<UBoxComponent>(TEXT("triggerBoxComponent"));
	TriggerBox->SetupAttachment(rootComp);

	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADoublePoints::BeginPlay()
{
	Super::BeginPlay();

	//turn on collision checks
	TriggerBox->OnComponentBeginOverlap.AddDynamic(this, &ADoublePoints::OnTriggerBoxOverlap);
}

void ADoublePoints::OnTriggerBoxOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	APlayerCharacter* playerCharacter = Cast<APlayerCharacter>(OtherActor);

	//if the colliding actor is the player, destoy the enemy and take a life off the player
	if (playerCharacter != nullptr)
	{
		//play the collection sound when the player collects the powerup
		if (collectionSound != nullptr)
		{
			UGameplayStatics::PlaySound2D(GetWorld(), collectionSound);
			playerCharacter->choosePowerup(EPlayerPowerup::EDOUBLEPOINTS);
		}

		Destroy();
	}
}

// Called every frame
void ADoublePoints::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

