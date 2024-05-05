// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Net/UnrealNetwork.h"
#include "GameFramework/Actor.h"
#include "MetadataActor.generated.h"

UCLASS()
class ACTORMETADATA_API AMetadataActor : public AActor
{
	GENERATED_BODY()
	
public:	
	UPROPERTY(VisibleAnywhere, Replicated)
	FString Name;

	UPROPERTY(VisibleAnywhere, Replicated)
	bool IsLikedByPlayer;

	UPROPERTY(VisibleAnywhere, Replicated)
	AActor* OtherActor;


	// Sets default values for this actor's properties
	AMetadataActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	UFUNCTION(BlueprintCallable)
	void SetName(FString n);

	UFUNCTION(BlueprintCallable)
	void SetIsLikedByPlayer(bool isLiked);

	UFUNCTION(BlueprintCallable)
	void SetOtherActor(AActor* actor);

	UFUNCTION(BlueprintCallable)
	FString GetName();

	UFUNCTION(BlueprintCallable)
	bool GetIsLikedByPlayer();

	UFUNCTION(BlueprintCallable)
	AActor* GetOtherActor();

};
