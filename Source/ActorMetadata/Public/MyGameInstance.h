// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "MyGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class ACTORMETADATA_API UMyGameInstance : public UGameInstance
{
	GENERATED_BODY()

private:
	std::queue<AActor*> lastFiveLikedActors;
	
public:
	void addToRecentLikedActors(AActor* actor);

	std::queue<AActor*> getLastFiveLikedActors();
};
