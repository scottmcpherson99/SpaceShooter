// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "PaperSpriteComponent.h"
#include "PlayerCharacter.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"
#include "Components/BoxComponent.h"
#include "Sound/SoundBase.h"
#include "Powerup.h"

AEnemyCharacter::AEnemyCharacter()
{

	enemyMesh = CreateDefaultSubobject<UPaperSpriteComponent>(TEXT("enemyMesh"));
	enemyMesh->SetupAttachment(RootComponent);

	TriggerBox = CreateDefaultSubobject<UBoxComponent>(TEXT("triggerBoxComponent"));
	TriggerBox->SetupAttachment(RootComponent);

	PrimaryActorTick.bCanEverTick = true;
}

void AEnemyCharacter::BeginPlay()
{
	Super::BeginPlay();
	//turn on collision checks
	TriggerBox->OnComponentBeginOverlap.AddDynamic(this, &AEnemyCharacter::OnTriggerBoxOverlap);

	GetCharacterMovement()->MaxWalkSpeed = FMath::FRandRange(150.f, 350.f);
}

void AEnemyCharacter::Tick(float DeltaTime)
{
}

void AEnemyCharacter::OnTriggerBoxOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	APlayerCharacter* playerCharacter = Cast<APlayerCharacter>(OtherActor);

	//if the colliding actor is the player, destoy the enemy and take a life off the player
	if (playerCharacter != nullptr)
	{
		//play the explosion sound when the enemy collides with the player
		if (explosionSound != nullptr)
		{
			UGameplayStatics::PlaySound2D(GetWorld(), explosionSound);
		}
		playerCharacter->UpdateHealth(-1);

		Destroy();
	}
}
