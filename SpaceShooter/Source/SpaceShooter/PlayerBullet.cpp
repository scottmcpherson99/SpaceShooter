// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerBullet.h"
#include "EnemyCharacter.h"
#include "PlayerCharacter.h"
#include "Wall.h"
#include "SpeedBoost.h"
#include "HealthDrop.h"
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

		if (FMath::FRandRange(1, 15) < 2)
		{
			UWorld* world = GetWorld();

			if (world)
			{
				//set the spawn parameters
				FActorSpawnParameters SpawnParams;
				SpawnParams.Owner = this;
				SpawnParams.Instigator = GetInstigator();
				FVector powerUpSpawnerVec;

				//set the location to spawn the bullet
				powerUpSpawnerVec = FVector(GetActorLocation().X, GetActorLocation().Y, GetActorLocation().Z + 5.f);

				float powerUpToSpawn = FMath::FRandRange(0, 3);


				if (powerUpToSpawn < 2)
				{
					//check that the bullet asset is not a nullptr and spawn the bullet
					if (speedBoost != nullptr)
					{
						world->SpawnActor<ASpeedBoost>(speedBoost, powerUpSpawnerVec, FRotator(0.0f, 0.0f, 0.0f), SpawnParams);
					}
				}

				else if (powerUpToSpawn >= 2 && powerUpToSpawn < 3)
				{
					//check that the bullet asset is not a nullptr and spawn the bullet
					if (healthDrop != nullptr)
					{
						world->SpawnActor<AHealthDrop>(healthDrop, powerUpSpawnerVec, FRotator(0.0f, 0.0f, 0.0f), SpawnParams);
					}
				}

			}
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
