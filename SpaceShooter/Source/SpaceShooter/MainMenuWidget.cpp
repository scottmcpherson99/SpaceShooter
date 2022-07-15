// Fill out your copyright notice in the Description page of Project Settings.


#include "MainMenuWidget.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetSystemLibrary.h"
#include "MainMenuGameMode.h"



void UMainMenuWidget::NativeConstruct()
{
	if (StartGameButton)
	{
		StartGameButton->OnClicked.AddDynamic(this, &UMainMenuWidget::OnStartGameClicked);
	}

	if (ExitGameButton)
	{
		ExitGameButton->OnClicked.AddDynamic(this, &UMainMenuWidget::OnExitGameClicked);
	}

	if (NextButton)
	{
		NextButton->OnClicked.AddDynamic(this, &UMainMenuWidget::OnNextLevelClicked);
	}

	if (PreviousButton)
	{
		PreviousButton->OnClicked.AddDynamic(this, &UMainMenuWidget::OnPreviousLevelClicked);
	}

	if (HowToButton)
	{
		HowToButton->OnClicked.AddDynamic(this, &UMainMenuWidget::OnHowToClicked);
	}
}

void UMainMenuWidget::OnStartGameClicked()
{
	//start the game based on the level the user has chosen
	AMainMenuGameMode* gameMode = (AMainMenuGameMode*)GetWorld()->GetAuthGameMode();
	if (gameMode)
	{
		gameMode->StartGame(levelNames[levelIndex]);
	}
}

void UMainMenuWidget::OnNextLevelClicked()
{
	//increase the level index to display the next level name, if the level index has reached its max value, reset it to 0
	if (levelIndex == 2)
	{
		levelIndex = 0;
	}
	else
	{
		levelIndex++;
	}

	UpdateLevelName(levelNames[levelIndex]);
}

void UMainMenuWidget::OnPreviousLevelClicked()
{
	//decrease the level index to display the previous level name, if the level index has reached 0, reset it to the max value
	if (levelIndex == 0)
	{
		levelIndex = 2;
	}
	else
	{
		levelIndex--;
	}
	UpdateLevelName(levelNames[levelIndex]);
}

void UMainMenuWidget::OnExitGameClicked()
{
	UKismetSystemLibrary::QuitGame(GetWorld(), UGameplayStatics::GetPlayerController(GetWorld(), 0), EQuitPreference::Quit, true);

}


void UMainMenuWidget::OnHowToClicked()
{
	//show the how to widget
	AMainMenuGameMode* gameMode = (AMainMenuGameMode*)GetWorld()->GetAuthGameMode();
	if (gameMode)
	{
		gameMode->SwitchWidget(EMainMenuWidget::EHOWTO);
	}
}

void UMainMenuWidget::UpdateLevelName(FName name_)
{
	LevelName->SetText(FText::FromName(name_));
}