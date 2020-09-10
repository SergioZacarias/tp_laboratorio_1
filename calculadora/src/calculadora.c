/*
 ============================================================================
 Name        : calculadora.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "logicacalculadora.h"


int main(void) {
	setbuf(stdout, NULL);

	int operandoA;
	int flagPrimerOperando =0;
	int flagSegundoOperando =0;
	int flagTres =0;
	int operandoB;
	int resultadoSuma;
	int resultadoResta;
	float resultadoDivision;
	int resultadoMultiplicacion;
	double resulFactorialA;
	double resulFactorialB;

	int opcion;

	do{
		printf("Elija una opcion: \n");
		printf("1. Ingresar 1er operando: \n");
		printf("2. Ingresar 2do operando: \n");
		printf("3. Calcular todas las operaciones: \n");
		printf("4. Informar resultados: \n");
		printf("5. Salir \n");
		fflush(stdin);
		scanf("%d", &opcion);

		switch(opcion)
		{
		case 1:

				printf("Ingresar 1er operando: \n");
				fflush(stdin);
				scanf("%d", &operandoA);
				flagPrimerOperando =1;
                break;
		case 2:
			if (flagPrimerOperando == 0){
				printf("Error.Debe ingresar primer operando. \n");

			}
			else if(flagPrimerOperando ==1){
				printf("Ingresar 2do operando: \n");
				fflush(stdin);
				scanf("%d", &operandoB);
				flagSegundoOperando =1;

			}

			break;

		case 3:
			if (flagPrimerOperando == 1 && flagSegundoOperando == 1)
				{
					resultadoSuma = sumar(operandoA,operandoB);
					resultadoResta = restar(operandoA,operandoB);
					resultadoDivision = dividir(operandoA,operandoB);
					resultadoMultiplicacion = multiplicar(operandoA,operandoB);
					resulFactorialA = factorial(operandoA);
					resulFactorialB = factorial(operandoB);

					flagTres =1;
				}

			if (flagPrimerOperando == 0)
			{
				printf("Error.Debe ingresar primer operando. \n");

			}
			if (flagSegundoOperando == 0)
			{

				printf("Error.Debe ingresar segundo operando. \n");
			}

			break;

		case 4:
			if (flagTres==1)
			{
				printf("El resultado de A+B es %d: \n", resultadoSuma);
				printf("El resultado de A-B es: %d \n", resultadoResta);
				if(operandoB!=0)
				{
					printf("El resultado de A/B es: %2.f \n", resultadoDivision);
				}
				else
				{
					printf("No se puede dividir por cero. \n");
				}
				printf("El resultado de A*B es: %d \n", resultadoMultiplicacion);
				printf("El factorial de A es: %lf \n", resulFactorialA);
				printf("El factorial de B es: %lf \n", resulFactorialB);

			}
			if(flagPrimerOperando ==0)
			{
				printf("Error.Debe ingresar primer operando. \n");

			}
			if(flagSegundoOperando == 0){
				printf("Error.Debe ingresar segundo operando. \n");

			}
			if (flagTres == 0){
				printf("Error. Debes ingresar los operandos antes de hacer todas las operaciones. \n");
			}
			flagPrimerOperando =0;
			flagSegundoOperando=0;
			flagTres=0;

			break;



		}

		system("CLS");

	}while(opcion != 5);

	system("pause");

	return EXIT_SUCCESS;
}

