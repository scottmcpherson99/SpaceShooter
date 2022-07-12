// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Bullet.h"
#include "PlayerBullet.generated.h"

/**
 * 
 */
UCLASS()
class SPACESHOOTER_API APlayerBullet : public ABullet
{
	GENERATED_BODY()
	
public:
	//constructor
	APlayerBullet();

	//called on begin play
	virtual void BeginPlay() override;

protected:

	//checks to see if any actors have overlapped the collision box
	UFUNCTION()
		void OnTriggerBoxOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	//player bullet asset
	UPROPERTY(EditAnywhere, Category = "Powerups")
		TSubclassOf<class ASpeedBoost> speedBoost;


	//player extra life asset
	UPROPERTY(EditAnywhere, Category = "Powerups")
		TSubclassOf<class AHealthDrop> healthDrop;


	//player extra life asset
	UPROPERTY(EditAnywhere, Category = "Powerups")
		TSubclassOf<class ADoublePoints> doublePointsDrop;


	//explosion sound
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Sound)
		class USoundBase* explosionSound;
};
