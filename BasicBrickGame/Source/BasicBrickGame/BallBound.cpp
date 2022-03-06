// Fill out your copyright notice in the Description page of Project Settings.


#include "BallBound.h"
#include "Components/BoxComponent.h"
#include "Kismet/GameplayStatics.h"
#include "PaddlePlayerController.h"

// Sets default values
ABallBound::ABallBound()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Box_Collision = CreateDefaultSubobject<UBoxComponent>(TEXT("Box Collision"));
	RootComponent = Box_Collision;

}

// Called when the game starts or when spawned
void ABallBound::BeginPlay()
{
	Super::BeginPlay();
	
	Box_Collision->OnComponentBeginOverlap.AddDynamic(this, &ABallBound::OnOverlapBegin);

	PlayerController = Cast<APaddlePlayerController>(UGameplayStatics::GetPlayerController(GetWorld(), 0));
}

// Called every frame
void ABallBound::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABallBound::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComponent, int32 OtherBodyIndexType, bool bFromSweep, const FHitResult& SwapResult)
{
	if(OtherActor->ActorHasTag("Ball"))
	{
		OtherActor->Destroy();
		PlayerController->SpawnNewBall();
	}
}

