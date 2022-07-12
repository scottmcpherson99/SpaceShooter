// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PaperCharacter.h"
#include "GameFramework/SaveGame.h"
#include "PlayerCharacter.generated.h"

UENUM(BlueprintType)
enum class EPlayerPowerup : uint8
{
	ENOPOWERUP UMETA(DisplayName = "NoPowerup"),
	ESPEEDBOOST UMETA(DisplayName = "SpeedBoost"),
	EHEALTHBOOST UMETA(DisplayName = "HealthBoost"),
	EDOUBLEPOINTS UMETA(DisplayName = "DoublePoints")
};

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

	//constructor
	APlayerCharacter();

	//player bullet asset
	UPROPERTY(EditAnywhere, Category = "Assets")
		TSubclassOf<class APlayerBullet> playerBullet;
	
	//save game state
	UPROPERTY(EditAnywhere, Category = "Save Game")
		TSubclassOf<class USaveScore> saveState;

	class USaveScore* saveHighScore;

	//get the current rotation value of the player
	float GetRotationValue();

	//increase the players score
	void IncreaseScore(int updatedScore_);

	//update the players health
	void UpdateHealth(int updatedHealth_);

	//choose the new player powerup
	void choosePowerup(EPlayerPowerup powerup_);

	//recieve the players score
	int GetPlayerScore();

	//recieve the players health
	int GetPlayerHealth();
protected:

	// APlayerCharacter Interface
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	//called on begin play
	virtual void BeginPlay() override;

	//Move the player character forward
	void MoveForward(float inputValue);

	//Rotate the player character
	void Rotate(float inputValue);

	//shoot a bullet in the direction the player is facing
	void Shoot();

	//load the current high score for the level
	void LoadHighScore();

	//save the new high score for the level
	void SaveHighScore();


	//controls the speed at which the player can rotate
	UPROPERTY(EditAnywhere, meta = (UIMin = 0.1, UIMax = 2), Category = movement)
		float rotationSpeed;

	//the original rotation rate of the player
	float originalRotationSpeed;

	//controls the speed at which the player can move
	UPROPERTY(EditAnywhere, meta = (UIMin = 0.1, UIMax = 2), Category = movement)
		float movementSpeed;

	//the original movement speed of the player
		float originalMovementSpeed;

	//the value of which the players roll value is facing
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float rotationValue;

	//shooting sound
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Sound)
		class USoundBase* shootSound;

private:
	//player values
	int score;
	int health;
	int highScore;
	int doublePoints;
};
