/*
 * logicacalculadora.c
 *
 *  Created on: 10 sep. 2020
 *      Author: usuario
 */
#include <stdio.h>
#include <stdlib.h>
#include "logicacalculadora.h"

	float sumar (float numero1, float numero2)
	{
    	float resultado;

		resultado = numero1 + numero2;

		return resultado;
	}


	float restar (float numero1, float numero2)
	{
	float resultado;

	resultado = numero1 - numero2;

	return resultado;
	}


	float multiplicar (float numero1, float numero2)
	{
	float resultado;

	resultado = numero1 * numero2;

	return resultado;
	}


	float dividir (float numero1, float numero2)
	{
	float resultado;

	resultado = (float)numero1 / numero2;

	return resultado;
	}


	double factorial (double numero1){
		double numFactorial =1;
		int i;

		for(i=1; i<=numero1;i++){

			numFactorial = numFactorial*i;
		}

		return numFactorial;
	}


