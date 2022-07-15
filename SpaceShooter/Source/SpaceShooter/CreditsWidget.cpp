// Fill out your copyright notice in the Description page of Project Settings.


#include "CreditsWidget.h"

#include "MainMenuGameMode.h"

void UCreditsWidget::NativeConstruct()
{
	if (BackButton)
	{
		BackButton->OnClicked.AddDynamic(this, &UCreditsWidget::OnBackButtonClicked);
	}
}

void UCreditsWidget::OnBackButtonClicked()
{
	AMainMenuGameMode* gameMode = (AMainMenuGameMode*)GetWorld()->GetAuthGameMode();

	gameMode->SwitchWidget(EMainMenuWidget::EMAINMENU);
}
