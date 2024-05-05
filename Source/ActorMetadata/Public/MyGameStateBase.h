// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include <MetadataActor.h>
#include "Kismet/GameplayStatics.h"
#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "MyGameStateBase.generated.h"

USTRUCT(BlueprintType)
struct FMetadataStruct
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadOnly)
	FString Name;

	UPROPERTY(BlueprintReadOnly)
	bool IsLikedByPlayer;

	UPROPERTY(BlueprintReadOnly)
	AActor* OtherActor;
};

/**
 * 
 */
UCLASS()
class ACTORMETADATA_API AMyGameStateBase : public AGameStateBase
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable)
	TArray<FMetadataStruct> getAllMetadata();
	
};
