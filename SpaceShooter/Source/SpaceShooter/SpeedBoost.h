// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Powerup.h"
#include "SpeedBoost.generated.h"

/**
 * 
 */
UCLASS()
class SPACESHOOTER_API ASpeedBoost : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ASpeedBoost();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	//the root component
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Sprite)
		class UPaperSpriteComponent* rootComp;

	//the powerup sprite
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Sprite)
		class UPaperSpriteComponent* powerupMesh;

	//trigger box to check for collisions with the player
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Collision")
		class UBoxComponent* TriggerBox;

	//checks to see if any actors have overlapped the collision box
	UFUNCTION()
		void OnTriggerBoxOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	//collection sound
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Sound)
		class USoundBase* collectionSound;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
