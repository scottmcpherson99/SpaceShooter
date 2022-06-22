// Fill out your copyright notice in the Description page of Project Settings.


#include "Bullet.h"
#include "PlayerCharacter.h"
#include "Wall.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"
#include "Components/BoxComponent.h"
#include "PaperSpriteComponent.h"

ABullet::ABullet()
{
	bulletMesh = CreateDefaultSubobject<UPaperSpriteComponent>(TEXT("bulletMesh"));
	bulletMesh->SetupAttachment(RootComponent);

	TriggerBox = CreateDefaultSubobject<UBoxComponent>(TEXT("triggerBoxComponent"));
	TriggerBox->SetupAttachment(RootComponent);

	PrimaryActorTick.bCanEverTick = true;
}

void ABullet::BeginPlay()
{
	Super::BeginPlay();

	//rotate the bullet to be the same direction as the player
	APlayerCharacter* playerCharacter = Cast<APlayerCharacter>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));

	if (playerCharacter != nullptr)
	{
		rotationValue = playerCharacter->GetRotationValue();
	}
	bulletMesh->AddRelativeRotation(FRotator(0.0f, rotationValue, 0.0f));

	//turn on collision checks
	TriggerBox->OnComponentBeginOverlap.AddDynamic(this, &ABullet::OnTriggerBoxOverlap);
}

void ABullet::Tick(float DeltaTime)
{
	//move the bullet forward in the direction it is facing
	AddActorLocalOffset(FVector(UKismetMathLibrary::DegSin(rotationValue) * DeltaTime * movementSpeed, UKismetMathLibrary::DegCos(rotationValue) * -DeltaTime * movementSpeed, 0.0f));
}

void ABullet::OnTriggerBoxOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	AWall* wallMesh = Cast<AWall>(OtherActor);

	//if the colliding actor is a wall actor, destoy the bullet
	if (wallMesh != nullptr)
	{
		Destroy();
	}
}