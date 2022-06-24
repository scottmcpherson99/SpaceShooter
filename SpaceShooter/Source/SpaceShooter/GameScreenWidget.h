// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/TextBlock.h"
#include "GameScreenWidget.generated.h"

/**
 * 
 */
UCLASS()
class SPACESHOOTER_API UGameScreenWidget : public UUserWidget
{
	GENERATED_BODY()
	
protected:
	//the players score
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
		class UTextBlock* PlayerScore;

	//the players health
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
		class UTextBlock* PlayerHealth;

public:
	//update the new players health onto the display
	void UpdatePlayerHealth(int playerHealth_);

	//update the new players score onto the display
	void UpdatePlayerScore(int playerScore_);
};
