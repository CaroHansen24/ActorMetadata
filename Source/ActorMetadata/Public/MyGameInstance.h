// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include <MetadataActor.h>
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
	TArray<AMetadataActor*> recentlikedActors;
	
public:
	UFUNCTION(BlueprintCallable)
	void addToRecentLikedActors(AMetadataActor* actor);

	UFUNCTION(BlueprintCallable)
	TArray<AMetadataActor*> getRecentLikedActors();
};
