// Fill out your copyright notice in the Description page of Project Settings.


#include "Bullet.h"
#include "PlayerCharacter.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"
#include "PaperSpriteComponent.h"

ABullet::ABullet()
{
	bulletMesh = CreateDefaultSubobject<UPaperSpriteComponent>(TEXT("bulletMesh"));
	bulletMesh->SetupAttachment(RootComponent);

	PrimaryActorTick.bCanEverTick = true;
}

void ABullet::BeginPlay()
{
	Super::BeginPlay();

	APlayerCharacter* playerCharacter = Cast<APlayerCharacter>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));

	if (playerCharacter != nullptr)
	{
		rotationValue = playerCharacter->GetRotationValue();
	}
	bulletMesh->AddRelativeRotation(FRotator(0.0f, rotationValue, 0.0f));
}

void ABullet::Tick(float DeltaTime)
{
	
	AddActorLocalOffset(FVector(UKismetMathLibrary::DegSin(rotationValue) * DeltaTime * movementSpeed, UKismetMathLibrary::DegCos(rotationValue) * -DeltaTime * movementSpeed, 0.0f));
}