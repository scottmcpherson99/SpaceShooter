// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "SpaceShooterGameMode.generated.h"

/**
 * 
 */


UCLASS()
class SPACESHOOTER_API ASpaceShooterGameMode : public AGameModeBase
{
	GENERATED_BODY()
	
public:
	ASpaceShooterGameMode();

	virtual void BeginPlay() override;

	void UpdatePlayerStats(int playerHealth_, int playerScore_);

protected:
	//widget class to use for our hud screen
	UPROPERTY(EditAnywhere, Category = "Widget")
		TSubclassOf<UUserWidget> GameScreenWidget;

	UPROPERTY(EditAnywhere, Category = "Widget")
	class UGameScreenWidget* gameWidget;
};
