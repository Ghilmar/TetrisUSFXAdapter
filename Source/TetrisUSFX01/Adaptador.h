// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Adapter.h"
#include "movimientosComp_Actor.h"
#include "Piece.h"
#include "Adaptador.generated.h"

//class APiece;
UCLASS()
class TETRISUSFX01_API AAdaptador : public AActor , public IAdapter
{
	GENERATED_BODY()

private:
	//inatnciamos el componete
	UmovimientosComp_Actor* movimientoComp_Actor;
	APiece* Piece;

public:	
	// Sets default values for this actor's properties
	AAdaptador();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	/*virtual void RotatePiece();*/
	virtual void HacerRotar();

	//Establecer el Arma Actor
	void SetPiece(AActor* PieceObj);

};
