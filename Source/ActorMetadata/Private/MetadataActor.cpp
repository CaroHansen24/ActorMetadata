// Fill out your copyright notice in the Description page of Project Settings.


#include "MetadataActor.h"

// Sets default values
AMetadataActor::AMetadataActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMetadataActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMetadataActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMetadataActor::SetName(FString n)
{
	Name = n;
}

void AMetadataActor::SetIsLikedByPlayer(bool isLiked)
{
	IsLikedByPlayer = isLiked;
}

void AMetadataActor::SetOtherActor(AActor* actor)
{
	OtherActor = actor;
}

FString AMetadataActor::GetName()
{
	return Name;
}

bool AMetadataActor::GetIsLikedByPlayer()
{
	return IsLikedByPlayer;
}

AActor* AMetadataActor::GetOtherActor()
{
	return OtherActor;
}

