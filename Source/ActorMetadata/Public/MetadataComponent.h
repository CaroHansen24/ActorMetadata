// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "string.h"
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MetadataComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class ACTORMETADATA_API UMetadataComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	std::string name;
	bool isLikedByPlayer;

public:	
	// Sets default values for this component's properties
	UMetadataComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	void SetName(std::string n) {
		name = n;
	}

	void SetIsLikedByPlayer(bool liked) {
		isLikedByPlayer = liked;
	}

	std::string GetName() {
		return name;
	}

	bool GetIsLikedByPlayer() {
		return isLikedByPlayer;
	}
};
