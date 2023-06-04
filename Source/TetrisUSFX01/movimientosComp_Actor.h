// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "movimientosComp_Actor.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class TETRISUSFX01_API UmovimientosComp_Actor : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UmovimientosComp_Actor();

	UPROPERTY()
		float VelocidadMovimiento;
	

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;


};
