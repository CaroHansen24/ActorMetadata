// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include <MetadataComponent.h>
#include "Kismet/GameplayStatics.h"
#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "MyGameStateBase.generated.h"

/**
 * 
 */
UCLASS()
class ACTORMETADATA_API AMyGameStateBase : public AGameStateBase
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	TArray<UMetadataComponent*> getAllMetadata();
	
};
