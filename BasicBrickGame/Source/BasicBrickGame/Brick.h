// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "GameFramework/Actor.h"
#include "Brick.generated.h"

UCLASS()
class BASICBRICKGAME_API ABrick : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ABrick();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UStaticMeshComponent* SM_Brick;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UBoxComponent* Box_Collision;

	float SpeedModifierOnBounce = 1.01f;

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

	void DestroyBrick();
	
public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
