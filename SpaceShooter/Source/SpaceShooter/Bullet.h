// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PaperSpriteActor.h"
#include "Bullet.generated.h"

/**
 * 
 */
UCLASS()
class SPACESHOOTER_API ABullet : public APaperSpriteActor
{
	GENERATED_BODY()

public:
	//constructor
	ABullet();

	//called on begin play
	virtual void BeginPlay() override;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	//the player sprite
	UPROPERTY(EditAnywhere, Category = Sprite)
		class UPaperSpriteComponent* bulletMesh;

	//trigger box to check for collisions with the bullet actor
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Collision")
		class UBoxComponent* TriggerBox;

	//checks to see if any actors have overlapped the collision box
	UFUNCTION()
		void OnTriggerBoxOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	//controls the speed at which the bullet can move
	UPROPERTY(EditAnywhere, meta = (UIMin = 500, UIMax = 2000), Category = movement)
		float movementSpeed;

	//the degree at which the bullet should be travelling along the horizontal axis
	float rotationValue;
};
