// Fill out your copyright notice in the Description page of Project Settings.


#include "SaveScore.h"

int USaveScore::GetHighScore()
{
	return highScore;
}

void USaveScore::SetHighScore(int highScore_)
{
	highScore = highScore_;
}
