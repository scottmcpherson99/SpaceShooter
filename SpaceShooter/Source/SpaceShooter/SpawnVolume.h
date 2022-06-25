// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SpawnVolume.generated.h"

UCLASS()
class SPACESHOOTER_API ASpawnVolume : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASpawnVolume();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	//The pickup to spawn
	UPROPERTY(EditAnywhere, Category = "Spawning")
		TSubclassOf<class AEnemyCharacter> whatToSpawn;


	FTimerHandle SpawnTimer;

	//minimum spawn delay
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawning")
		float spawnDelayRangeLow;

	//maximum spawn delay
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawning")
		float spawnDelayRangeMax;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//returns the whereToSpawn sub object
	FORCEINLINE class UBoxComponent* GetWhereToSpawn() const { return whereToSpawn; }

	//find a random point within the box component
	UFUNCTION(BlueprintPure, Category = "Spawning")
		FVector GetRandomPointInVolume();

	//this function toggles whether or not the spawn volume spawns pickups
	UFUNCTION(BlueprintCallable, Category = "Spawning")
		void SetSpawningActive(bool bShouldSpawn);
private:
	//Box component to specify where the pickups should be spawned
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Spawning", meta = (AllowPrivateAccess = "true"))
		class UBoxComponent* whereToSpawn;


	//handle the spawning a new pickup
	void SpawnPickup();

	//The current spawn delay
	float spawnDelay;

};
