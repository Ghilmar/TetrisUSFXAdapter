// Fill out your copyright notice in the Description page of Project Settings.


#include "movimientoComp_A2.h"

// Sets default values for this component's properties
UmovimientoComp_A2::UmovimientoComp_A2()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
	VelocidadMovimiento = 50.0f;
}


// Called when the game starts
void UmovimientoComp_A2::BeginPlay()
{
	Super::BeginPlay();

	// ...

	PosicionInicial = GetOwner()->GetActorLocation();
	PosicionActual = PosicionInicial;
	
}


// Called every frame
void UmovimientoComp_A2::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	// Calcula la nueva posicion


	FVector NuevaPosicion = PosicionActual + (GetOwner()->GetActorRightVector() * VelocidadMovimiento * DeltaTime);

	////Actualizar la posición del actor
	GetOwner()->SetActorLocation(NuevaPosicion);

	//Actualizar la posición actual
	PosicionActual = NuevaPosicion;
	// ...
}

