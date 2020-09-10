/*
 * logicacalculadora.c
 *
 *  Created on: 10 sep. 2020
 *      Author: usuario
 */
	int sumar (int numero1, int numero2)
	{
    	int resultado;

		resultado = numero1 + numero2;

		return resultado;
	}


	int restar (int numero1, int numero2)
	{
	int resultado;

	resultado = numero1 - numero2;

	return resultado;
	}


	int multiplicar (int numero1, int numero2)
	{
	int resultado;

	resultado = numero1 * numero2;

	return resultado;
	}


	float dividir (int numero1, int numero2)
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


