// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameStateBase.h"

TArray<UMetadataComponent*> AMyGameStateBase::getAllMetadata()
{
	TArray<UMetadataComponent*> componentArray;
	TArray<AActor*> FoundActors;
	UGameplayStatics::GetAllActorsWithTag(GetWorld(), FName("METADATA"), FoundActors);
	for (int i = 0; i < FoundActors.Num(); i++) {
		AActor* actor = FoundActors[i];
		UMetadataComponent* component = actor->FindComponentByClass<UMetadataComponent>();
		componentArray.Add(component);
	}
	return componentArray;
}
