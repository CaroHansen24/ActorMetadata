// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameInstance.h"

void UMyGameInstance::addToRecentLikedActors(AActor* actor) {
	recentlikedActors.Add(actor);
	if (recentlikedActors.Num() > 5) {
		recentlikedActors.RemoveAt(0);
	}
}

TArray<AActor*> UMyGameInstance::getRecentLikedActors() {
	return recentlikedActors;
}
