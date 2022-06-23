// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerBullet.h"
#include "EnemyCharacter.h"
#include "Wall.h"
#include "Components/BoxComponent.h"

APlayerBullet::APlayerBullet()
{

}

void APlayerBullet::BeginPlay()
{
	Super::BeginPlay();

	//turn on collision checks
	TriggerBox->OnComponentBeginOverlap.AddDynamic(this, &APlayerBullet::OnTriggerBoxOverlap);
}

void APlayerBullet::OnTriggerBoxOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{

	AEnemyCharacter* enemyCharacter = Cast<AEnemyCharacter>(OtherActor);

	//if the colliding actor is a wall actor, destoy the bullet
	if (enemyCharacter != nullptr)
	{
		enemyCharacter->Destroy();
		Destroy();
	}

	AWall* wallMesh = Cast<AWall>(OtherActor);

	//if the colliding actor is a wall actor, destoy the bullet
	if (wallMesh != nullptr)
	{
		Destroy();
	}
}
