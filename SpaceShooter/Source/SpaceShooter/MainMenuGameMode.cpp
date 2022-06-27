// Fill out your copyright notice in the Description page of Project Settings.


#include "MainMenuGameMode.h"
#include "Blueprint/UserWidget.h"
#include "Kismet/GameplayStatics.h"
#include "MainMenuWidget.h"
#include "PlayerCharacter.h"

AMainMenuGameMode::AMainMenuGameMode()
{

}


void AMainMenuGameMode::BeginPlay()
{
	//check if the main menu widget is valid, and if it is, add it to the viewscreen
	if (IsValid(MainMenuHUDWidget))
	{
		mainMenuWidget = Cast<UMainMenuWidget>(CreateWidget(GetWorld(), MainMenuHUDWidget));
		mainMenuWidget->AddToViewport();
	}

	//Show the players mouse cursor and disable their movement
	APlayerController* playerController = UGameplayStatics::GetPlayerController(this, 0);
	ACharacter* playerCharacter = UGameplayStatics::GetPlayerCharacter(this, 0);
	if (playerController != nullptr)
	{
		playerController->bShowMouseCursor = true;

		if (playerCharacter != nullptr)
		{
			playerCharacter->DisableInput(playerController);
		}
	}
}

void AMainMenuGameMode::StartGame()
{
	UGameplayStatics::OpenLevel(GetWorld(), "GameLevel");
}
