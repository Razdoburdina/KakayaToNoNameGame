// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameMode.h"
#include "Engine/Engine.h"

void AMyGameMode::BeginPlay()
{
	Super::BeginPlay();

	GEngine->AddOnScreenDebugMessage(1, 5.0f, FColor::Silver, debugMessage);
}