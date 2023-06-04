// Fill out your copyright notice in the Description page of Project Settings.


#include "Adaptador.h"
//#include "movimientosComp_Actor.h"


// Sets default values

AAdaptador::AAdaptador()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


}

// Called when the game starts or when spawned
void AAdaptador::BeginPlay()
{
	//Super::BeginPlay();
	Super::BeginPlay();

}

// Called every frame
void AAdaptador::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AAdaptador::HacerRotar()
{
	if (!Piece) {
		UE_LOG(LogTemp, Error, TEXT("Sling(): Tiro con honda es NULL, asegurese de que este inicializada."));
		return;
	}
	Piece->MoveDown();
}

void AAdaptador::SetPiece(AActor* PieceObj)
{
	Piece = Cast<APiece>(PieceObj);
	if (!Piece) //Error de registro si falla el lanzamiento
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Red, FString::Printf(TEXT("Lanzamiento no valido! Vea el registro de salida para mas detalles")));
		UE_LOG(LogTemp, Error, TEXT("SetSlingShot(): El Actor pasado no es un tiro con honda! Esta seguro de que el Actor implementa esa interfaz?"));
	}
}

