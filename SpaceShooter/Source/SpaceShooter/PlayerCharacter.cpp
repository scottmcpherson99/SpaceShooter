// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerCharacter.h"
#include "PaperSpriteComponent.h"
#include "Kismet/KismetMathLibrary.h"

APlayerCharacter::APlayerCharacter()
{
	playerMesh = CreateDefaultSubobject<UPaperSpriteComponent>(TEXT("playerMesh"));
	playerMesh->SetupAttachment(RootComponent);

	//set default values for players movement stats
	movementSpeed = 1.f;
	rotationSpeed = 1.f;
}

/// //////////////////////////////////////////////////////////////////////
/// Input
void APlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	//set up gameplay key bindings
	check(PlayerInputComponent);

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
/// //////////////////////////////////////////////////////////////////////
