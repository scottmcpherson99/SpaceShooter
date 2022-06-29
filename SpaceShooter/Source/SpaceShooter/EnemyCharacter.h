// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PaperCharacter.h"
#include "EnemyCharacter.generated.h"

/**
 * 
 */
UCLASS()
class SPACESHOOTER_API AEnemyCharacter : public APaperCharacter
{
	GENERATED_BODY()
	
public:
	//constructor
	AEnemyCharacter();

	//called on begin play
	virtual void BeginPlay() override;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	//the player sprite
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Sprite)
		class UPaperSpriteComponent* enemyMesh;

	//trigger box to check for collisions with the bullet actor
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Collision")
		class UBoxComponent* TriggerBox;

	//explosion sound
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Sound)
		class USoundBase* explosionSound;

	//checks to see if any actors have overlapped the collision box
	UFUNCTION()
		void OnTriggerBoxOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
};
