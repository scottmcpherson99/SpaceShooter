// Fill out your copyright notice in the Description page of Project Settings.


#include "MainMenuGameMode.h"
#include "Blueprint/UserWidget.h"
#include "Kismet/GameplayStatics.h"
#include "MainMenuWidget.h"
#include "HowTo.h"
#include "CreditsWidget.h"
#include "PlayerCharacter.h"
#include "Sound/SoundBase.h"
#include "Blueprint/WidgetLayoutLibrary.h"

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

	//check if the howto widget is valid
	if (IsValid(HowToHUDWidget))
	{
		howToWidget = Cast<UHowTo>(CreateWidget(GetWorld(), HowToHUDWidget));
	}

	//check if the credits widget is valid
	if (IsValid(CreditsHUDWidget))
	{
		creditsWidget = Cast<UCreditsWidget>(CreateWidget(GetWorld(), CreditsHUDWidget));
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

void AMainMenuGameMode::SwitchMapChoice(EMainMenuLevel mapChoice_)
{
	switch (mapChoice_)
	{
		//switch the map to the open box map
	case EMainMenuLevel::EOPENBOX :

		break;

		//switch the map to the four boxes map
	case EMainMenuLevel::EFOURBOXES :

		break;

		//switch the map to the fortress map
	case EMainMenuLevel::EFORTRESS :

		break;
	}
}

void AMainMenuGameMode::SwitchWidget(EMainMenuWidget widget_)
{
	switch (widget_)
	{
		//switch the widget to the main menu widget
	case EMainMenuWidget::EMAINMENU:
		UWidgetLayoutLibrary::RemoveAllWidgets(GetWorld());
		mainMenuWidget->AddToViewport();
		break;

		//switch the widget to the howto widget
	case EMainMenuWidget::EHOWTO:
		UWidgetLayoutLibrary::RemoveAllWidgets(GetWorld());
		howToWidget->AddToViewport();
		break;

		//switch the widget to the credits widget
	case EMainMenuWidget::ECREDITS:
		UWidgetLayoutLibrary::RemoveAllWidgets(GetWorld());
		creditsWidget->AddToViewport();
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
