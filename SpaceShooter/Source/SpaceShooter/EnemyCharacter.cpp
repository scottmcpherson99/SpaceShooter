// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyCharacter.h"
#include "PaperSpriteComponent.h"
#include "PlayerCharacter.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "Components/BoxComponent.h"

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

	//turn on collision checks
	TriggerBox->OnComponentBeginOverlap.AddDynamic(this, &AEnemyCharacter::OnTriggerBoxOverlap);
}

void AEnemyCharacter::OnTriggerBoxOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	APlayerCharacter* playerCharacter = Cast<APlayerCharacter>(OtherActor);

	//if the colliding actor is a wall actor, destoy the bullet
	if (playerCharacter != nullptr)
	{
		UKismetSystemLibrary::QuitGame(GetWorld(), UGameplayStatics::GetPlayerController(GetWorld(), 0), EQuitPreference::Quit, true);
	}
}
