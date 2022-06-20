// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PaperCharacter.h"
#include "PlayerCharacter.generated.h"

/**
 * 
 */
UCLASS()
class SPACESHOOTER_API APlayerCharacter : public APaperCharacter
{
	GENERATED_BODY()

		/** Camera boom positioning the camera beside the character */
		UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
		class USpringArmComponent* CameraBoom;

	/** Side view camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
		class UCameraComponent* SideViewCameraComponent;

public:
		//the player sprite
		UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Sprite)
		class UPaperSpriteComponent* playerMesh;


public:
	//constructor
	APlayerCharacter();

	//player bullet asset
	UPROPERTY(EditAnywhere, Category = "Assets")
		TSubclassOf<class APlayerBullet> playerBullet;
	
	//get the current rotation value of the player
	float GetRotationValue();

protected:

	// APlayerCharacter Interface
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	//Move the player character forward
	void MoveForward(float inputValue);

	//Rotate the player character
	void Rotate(float inputValue);

	//shoot a bullet in the direction the player is facing
	void Shoot();

	//controls the speed at which the player can rotate
	UPROPERTY(EditAnywhere, meta = (UIMin = 0.5, UIMax = 2), Category = movement)
		float rotationSpeed;

	//controls the speed at which the player can move
	UPROPERTY(EditAnywhere, meta = (UIMin = 0.5, UIMax = 2), Category = movement)
		float movementSpeed;

	//the value of which the players roll value is facing
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float rotationValue;

};
