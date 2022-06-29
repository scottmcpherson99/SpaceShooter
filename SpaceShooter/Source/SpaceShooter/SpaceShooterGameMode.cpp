// Fill out your copyright notice in the Description page of Project Settings.


#include "SpaceShooterGameMode.h"
#include "PlayerCharacter.h"
#include "Blueprint/UserWidget.h"
#include "SaveScore.h"
#include "Kismet/GameplayStatics.h"
#include "GameScreenWidget.h"
#include "Sound/SoundBase.h"

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

	//play the background music on repeat
	PlayMusic();
	GetWorldTimerManager().SetTimer(musicTimer, this, &ASpaceShooterGameMode::PlayMusic, backgroundMusic->GetDuration(), true);
}

void ASpaceShooterGameMode::UpdatePlayerStats(int playerHealth_, int playerScore_, int playerHighScore_)
{
	gameWidget->UpdatePlayerScore(playerScore_);
	gameWidget->UpdatePlayerHealth(playerHealth_);
	gameWidget->UpdatePlayerHighScore(playerHighScore_);
}

void ASpaceShooterGameMode::PlayMusic()
{
	//play the background music
	if (backgroundMusic != nullptr)
	{
		UGameplayStatics::PlaySound2D(GetWorld(), backgroundMusic);
	}
}
