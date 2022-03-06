// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PaddleCharacter.h"
#include "PaddlePlayerController.h"
#include "Components/BoxComponent.h"
#include "GameFramework/Actor.h"
#include "BallBound.generated.h"

UCLASS()
class BASICBRICKGAME_API ABallBound : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABallBound();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UBoxComponent* Box_Collision;

	APaddlePlayerController* PlayerController;
	
	UFUNCTION()
	void OnOverlapBegin
	(
		class UPrimitiveComponent* OverlappedComponent,
		class AActor* OtherActor,
		class UPrimitiveComponent* OtherComponent,
		int32 OtherBodyIndexType,
		bool bFromSweep,
		const FHitResult& SwapResult
	);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
