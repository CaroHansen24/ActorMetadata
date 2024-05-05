// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameStateBase.h"

TArray<FMetadataStruct> AMyGameStateBase::getAllMetadata()
{
	TArray<FMetadataStruct> MetadataArray;
	TArray<AActor*> FoundActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AMetadataActor::StaticClass(), FoundActors);
	for (AActor* Actor : FoundActors) {
		AMetadataActor* MetadataActor = (AMetadataActor*) Actor;
		MetadataArray.Add({ MetadataActor->GetName(), MetadataActor->GetIsLikedByPlayer(), MetadataActor->GetOtherActor() });
	}
	
	return MetadataArray;
}
