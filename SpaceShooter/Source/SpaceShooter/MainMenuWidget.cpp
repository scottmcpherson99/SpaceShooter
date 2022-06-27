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
}

void UMainMenuWidget::OnStartGameClicked()
{
	AMainMenuGameMode* gameMode = (AMainMenuGameMode*)GetWorld()->GetAuthGameMode();
	if (gameMode)
	{
		gameMode->StartGame();
	}
}


void UMainMenuWidget::OnExitGameClicked()
{
	UKismetSystemLibrary::QuitGame(GetWorld(), UGameplayStatics::GetPlayerController(GetWorld(), 0), EQuitPreference::Quit, true);

}