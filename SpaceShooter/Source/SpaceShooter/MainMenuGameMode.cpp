// Fill out your copyright notice in the Description page of Project Settings.


#include "MainMenuGameMode.h"
#include "Blueprint/UserWidget.h"
#include "Kismet/GameplayStatics.h"
#include "MainMenuWidget.h"
#include "PlayerCharacter.h"
#include "Sound/SoundBase.h"

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


	//play the background music on repeat
	PlayMusic();
	GetWorldTimerManager().SetTimer(musicTimer, this, &AMainMenuGameMode::PlayMusic, backgroundMusic->GetDuration(), true);
}

void AMainMenuGameMode::StartGame(FName levelName_)
{
	UGameplayStatics::OpenLevel(GetWorld(), levelName_);
}

void AMainMenuGameMode::SwitchMapChoice(EMainMenuWidget mapChoice_)
{
	switch (mapChoice_)
	{
		//switch the map to the open box map
	case EMainMenuWidget::EOPENBOX :

		break;

		//switch the map to the four boxes map
	case EMainMenuWidget::EFOURBOXES :

		break;

		//switch the map to the fortress map
	case EMainMenuWidget::EFORTRESS :

		break;
	}
}

void AMainMenuGameMode::PlayMusic()
{
	//play the background music
	if (backgroundMusic != nullptr)
	{
		UGameplayStatics::PlaySound2D(GetWorld(), backgroundMusic);
	}
}
