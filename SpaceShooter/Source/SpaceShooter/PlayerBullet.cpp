// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerBullet.h"
#include "EnemyCharacter.h"
#include "PlayerCharacter.h"
#include "Wall.h"
#include "Kismet/GameplayStatics.h"
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

	//if the colliding actor is a wall actor, destoy the bullet and increase the player's score
	if (enemyCharacter != nullptr)
	{
		enemyCharacter->Destroy();

		APlayerCharacter* playerCharacter = Cast<APlayerCharacter>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));
		if (playerCharacter != nullptr)
		{
			playerCharacter->IncreaseScore(10);
		}

		Destroy();
	}

	AWall* wallMesh = Cast<AWall>(OtherActor);

	//if the colliding actor is a wall actor, destoy the bullet
	if (wallMesh != nullptr)
	{
		Destroy();
	}
}
