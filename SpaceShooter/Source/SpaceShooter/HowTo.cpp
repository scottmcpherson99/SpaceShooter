// Fill out your copyright notice in the Description page of Project Settings.


#include "HowTo.h"
#include "MainMenuGameMode.h"

void UHowTo::NativeConstruct()
{
	if (BackButton)
	{
		BackButton->OnClicked.AddDynamic(this, &UHowTo::OnBackButtonClicked);
	}
}

void UHowTo::OnBackButtonClicked()
{
	AMainMenuGameMode* gameMode = (AMainMenuGameMode*)GetWorld()->GetAuthGameMode();

	gameMode->SwitchWidget(EMainMenuWidget::EMAINMENU);
}
