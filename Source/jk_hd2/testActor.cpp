// Fill out your copyright notice in the Description page of Project Settings.
#include "testActor.h"

// Sets default values
AtestActor::AtestActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("asd"));

	RootComponent = StaticMeshComponent;

}

// Called when the game starts or when spawned
void AtestActor::BeginPlay()
{
	Super::BeginPlay();
	
	UE_LOG(LogTemp, Log, TEXT("hello, world"));
	
	
}

// Called every frame
void AtestActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// UE_LOG(LogTemp, Log, TEXT("hello, world22"));
	FRotator nr = FRotator(0,90 * DeltaTime,0);
	
	if(StaticMeshComponent)
		StaticMeshComponent->AddLocalRotation(nr);
}

