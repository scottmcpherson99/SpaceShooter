// Fill out your copyright notice in the Description page of Project Settings.


#include "SpaceShooterGameMode.h"
#include "PlayerCharacter.h"
#include "Blueprint/UserWidget.h"
#include "SaveScore.h"
#include "Kismet/GameplayStatics.h"
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

		savePlayerHighScore = Cast<USaveScore>(UGameplayStatics::CreateSaveGameObject(USaveScore::StaticClass()));
	}
}

void ASpaceShooterGameMode::UpdatePlayerStats(int playerHealth_, int playerScore_, int playerHighScore_)
{
	gameWidget->UpdatePlayerScore(playerScore_);
	gameWidget->UpdatePlayerHealth(playerHealth_);
	gameWidget->UpdatePlayerHighScore(playerHighScore_);
}
