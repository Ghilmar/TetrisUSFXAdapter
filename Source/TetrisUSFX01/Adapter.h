// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include <functional>
#include "Adapter.generated.h"


// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UAdapter : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class TETRISUSFX01_API IAdapter
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	float VelocidadMovimiento;

	virtual void HacerRotar() = 0;
};
