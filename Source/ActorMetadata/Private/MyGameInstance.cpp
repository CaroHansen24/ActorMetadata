// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameInstance.h"

void UMyGameInstance::addToRecentLikedActors(AActor* actor) {
	lastFiveLikedActors.push(actor);
	if (lastFiveLikedActors.size() > 5) {
		lastFiveLikedActors.pop();
	}
}

std::queue<AActor*> UMyGameInstance::getLastFiveLikedActors() {
	return std::queue<AActor*>();
}
