// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameInstance.h"

void UMyGameInstance::addToRecentLikedActors(AMetadataActor* actor) {
	// If the actor was liked previously it should be removed from
	// its previous index and moved to the end of the array.
	if (recentlikedActors.Contains(actor)) {
		recentlikedActors.Remove(actor);
	}
	recentlikedActors.Add(actor);

	if (recentlikedActors.Num() > 5) {
		recentlikedActors.RemoveAt(0);
	}
}

TArray<AMetadataActor*> UMyGameInstance::getRecentLikedActors() {
	return recentlikedActors;
}
