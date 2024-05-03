// Fill out your copyright notice in the Description page of Project Settings.


#include "MetadataComponent.h"

// Sets default values for this component's properties
UMetadataComponent::UMetadataComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UMetadataComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UMetadataComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UMetadataComponent::SetName(FString n) {
	name = n;
}

void UMetadataComponent::SetIsLikedByPlayer(bool liked) {
	isLikedByPlayer = liked;
}

FString UMetadataComponent::GetName() {
	return name;
}

bool UMetadataComponent::GetIsLikedByPlayer() {
	return isLikedByPlayer;
}
