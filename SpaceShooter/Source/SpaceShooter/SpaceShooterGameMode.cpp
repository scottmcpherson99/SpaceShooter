// Fill out your copyright notice in the Description page of Project Settings.


#include "SpaceShooterGameMode.h"
#include "PlayerCharacter.h"
#include "Blueprint/UserWidget.h"
#include "GameScreenWidget.h"

ASpaceShooterGameMode::ASpaceShooterGameMode()
{

}

void ASpaceShooterGameMode::BeginPlay()
{
	Super::BeginPlay();

	if (IsValid(GameScreenWidget))
	{
		gameWidget = Cast<UGameScreenWidget>(CreateWidget(GetWorld(), GameScreenWidget));
		gameWidget->AddToViewport();
		gameWidget->UpdatePlayerHealth(3);
		gameWidget->UpdatePlayerScore(0);
	}
}

void ASpaceShooterGameMode::UpdatePlayerStats(int playerHealth_, int playerScore_)
{
	gameWidget->UpdatePlayerScore(playerScore_);
	gameWidget->UpdatePlayerHealth(playerHealth_);
}
