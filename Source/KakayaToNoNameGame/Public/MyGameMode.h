// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "MyGameMode.generated.h"

/**
 * 
 */
UCLASS()
class KAKAYATONONAMEGAME_API AMyGameMode : public AGameMode
{
	GENERATED_BODY()
	
protected:

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)

	FString debugMessage;
	virtual void BeginPlay() override;
};
