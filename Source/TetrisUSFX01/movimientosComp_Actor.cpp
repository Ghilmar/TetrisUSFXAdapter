// Fill out your copyright notice in the Description page of Project Settings.


#include "movimientosComp_Actor.h"

// Sets default values for this component's properties
UmovimientosComp_Actor::UmovimientosComp_Actor()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// Default values
	VelocidadMovimiento = 2.0f;


}


// Called when the game starts
void UmovimientosComp_Actor::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UmovimientosComp_Actor::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	

	AActor* padre = GetOwner();
	if (padre) {
		// Obtener la rotación actual del actor
		FRotator RotacionActual = padre->GetActorRotation();

		// Calcular la nueva rotación
		FRotator NuevaRotacion = RotacionActual + FRotator(0.0f, 0.0f, 30.0f)*VelocidadMovimiento* DeltaTime; // Rotar 90 grados en el eje Y

		// Establecer la nueva rotación del actor
		padre->SetActorRotation(NuevaRotacion);
	}

	
	
}



