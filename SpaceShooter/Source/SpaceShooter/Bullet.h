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

		//the player sprite
		UPROPERTY(EditAnywhere, Category = Sprite)
		class UPaperSpriteComponent* bulletMesh;

public:
	//constructor
	ABullet();

	//called on begin play
	virtual void BeginPlay() override;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	//controls the speed at which the bullet can move
	UPROPERTY(EditAnywhere, meta = (UIMin = 0.5, UIMax = 2), Category = movement)
		float movementSpeed;

	float rotationValue;
};
