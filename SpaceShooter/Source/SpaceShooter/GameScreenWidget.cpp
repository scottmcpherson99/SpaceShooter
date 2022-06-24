// Fill out your copyright notice in the Description page of Project Settings.


#include "GameScreenWidget.h"

/// //////////////////////////////////////////////////////////////////////
/// Update player stats
void UGameScreenWidget::UpdatePlayerHealth(int playerHealth_)
{
	PlayerHealth->SetText(FText::AsNumber(playerHealth_));
}

void UGameScreenWidget::UpdatePlayerScore(int playerScore_)
{
	PlayerScore->SetText(FText::AsNumber(playerScore_));
}
/// //////////////////////////////////////////////////////////////////////