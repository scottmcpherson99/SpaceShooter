// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerCharacter.h"
#include "SpaceShooterGameMode.h"
#include "PlayerBullet.h"
#include "PaperSpriteComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Components/InputComponent.h"
#include "Kismet/KismetMathLibrary.h"

APlayerCharacter::APlayerCharacter()
{
	playerMesh = CreateDefaultSubobject<UPaperSpriteComponent>(TEXT("playerMesh"));
	playerMesh->SetupAttachment(RootComponent);

	// Create a camera boom attached to the root (capsule)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 500.0f;
	CameraBoom->SocketOffset = FVector(0.0f, 0.0f, 75.0f);
	CameraBoom->SetUsingAbsoluteRotation(true);
	CameraBoom->bDoCollisionTest = false;
	CameraBoom->SetRelativeRotation(FRotator(0.0f, -90.0f, 0.0f));

	// Create an orthographic camera (no perspective) and attach it to the boom
	SideViewCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("SideViewCamera"));
	SideViewCameraComponent->ProjectionMode = ECameraProjectionMode::Orthographic;
	SideViewCameraComponent->OrthoWidth = 2048.0f;
	SideViewCameraComponent->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);

	// Prevent all automatic rotation behavior on the camera, character, and camera component
	CameraBoom->SetUsingAbsoluteRotation(true);
	SideViewCameraComponent->bUsePawnControlRotation = false;
	SideViewCameraComponent->bAutoActivate = true;
	GetCharacterMovement()->bOrientRotationToMovement = false;

	//set default values for players movement stats
	movementSpeed = 1.f;
	rotationSpeed = 1.f;

	//set the default player stats
	score = 0;
	health = 3;
}

/// //////////////////////////////////////////////////////////////////////
/// Input
void APlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	//set up gameplay key bindings
	check(PlayerInputComponent);

	PlayerInputComponent->BindAction("Shoot", IE_Pressed, this, &APlayerCharacter::Shoot);

	PlayerInputComponent->BindAxis("MoveForward", this, &APlayerCharacter::MoveForward);
	PlayerInputComponent->BindAxis("Rotate", this, &APlayerCharacter::Rotate);

}

/// //////////////////////////////////////////////////////////////////////


/// //////////////////////////////////////////////////////////////////////
/// Player Movement
void APlayerCharacter::MoveForward(float inputValue)
{
	if (Controller && (inputValue != 0))
	{
		//add player movement based off the current rotation and input from the player
		AddMovementInput(FVector(UKismetMathLibrary::DegSin(-rotationValue), UKismetMathLibrary::DegCos(rotationValue), 0.0f), inputValue * movementSpeed);
	}
}

void APlayerCharacter::Rotate(float inputValue)
{
	if (Controller && (inputValue != 0))
	{
		
		//update the rotation value based on the user input and apply the new rotation to the player sprite
		playerMesh->AddLocalRotation(FQuat(FRotator(inputValue * rotationSpeed, 0.0f, 0.0f)));
		rotationValue -= inputValue * rotationSpeed;
	}
}

float APlayerCharacter::GetRotationValue()
{
	return rotationValue;
}

/// //////////////////////////////////////////////////////////////////////


/// //////////////////////////////////////////////////////////////////////
/// Player Weapons
void APlayerCharacter::Shoot()
{
	UWorld* world = GetWorld();

	if (world)
	{
		//set the spawn parameters
		FActorSpawnParameters SpawnParams;
		SpawnParams.Owner = this;
		SpawnParams.Instigator = GetInstigator();
		FVector BulletSpawnerVec;

		//set the location to spawn the bullet
		BulletSpawnerVec = FVector(GetActorLocation().X, GetActorLocation().Y, GetActorLocation().Z + 5.f);

		//check that the bullet asset is not a nullptr and spawn the bullet
		if (playerBullet != nullptr)
		{
			world->SpawnActor<APlayerBullet>(playerBullet, BulletSpawnerVec, FRotator(0.0f, 0.0f, 0.0f), SpawnParams);
		}
	}
}
/// //////////////////////////////////////////////////////////////////////


/// //////////////////////////////////////////////////////////////////////
/// Player Stats
void APlayerCharacter::IncreaseScore(int updatedScore_)
{
	score += updatedScore_;
	ASpaceShooterGameMode* gameMode = (ASpaceShooterGameMode*)GetWorld()->GetAuthGameMode();
	if (gameMode)
	{
		gameMode->UpdatePlayerStats(health, score);
	}

}

void APlayerCharacter::UpdateHealth(int updatedHealth_)
{
	health += updatedHealth_;
	ASpaceShooterGameMode* gameMode = (ASpaceShooterGameMode*)GetWorld()->GetAuthGameMode();
	if (gameMode)
	{
		gameMode->UpdatePlayerStats(health, score);
	}
}

int APlayerCharacter::GetPlayerScore()
{
	return score;
}

int APlayerCharacter::GetPlayerHealth()
{
	return health;
}
/// /////////////////////////////////////////////////////////////////////////