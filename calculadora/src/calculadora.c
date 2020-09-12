/*
 ============================================================================
 Name        : calculadora.c
 Author      : Zacarias, Sergio Daniel
 Version     :
 Copyright   :
 Description : Div 1E
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "logicacalculadora.h"


int main(void) {
	setbuf(stdout, NULL);

	float operandoA=0;
	int flagPrimerOperando =0;
	int flagSegundoOperando =0;
	int flagTres =0;
	float operandoB=0;
	float resultadoSuma=0;
	float resultadoResta=0;
	float resultadoDivision=0;
	float resultadoMultiplicacion=0;
	double resulFactorialA=0;
	double resulFactorialB=0;
	int opcion;

	do{
		printf("Elija una opcion:  \n");
		printf("1. Ingresar 1er operando:  %1.f \n",operandoA);
		printf("2. Ingresar 2do operando:  %1.f \n",operandoB);
		printf("3. Calcular todas las operaciones: \n");
		printf("4. Informar resultados: \n");
		printf("5. Salir \n");
		fflush(stdin);
		scanf("%d", &opcion);

		switch(opcion)
		{
		case 1:

				printf("Ingresar 1er operando:  \n");
				fflush(stdin);
				scanf("%f", &operandoA);
				flagPrimerOperando =1;
				system("pause");
                break;

		case 2:
			if (flagPrimerOperando == 0){
				printf("Error.Debe ingresar primer operando. \n");

			}
			else if(flagPrimerOperando ==1){
				printf("Ingresar 2do operando:  \n");
				fflush(stdin);
				scanf("%f", &operandoB);
				flagSegundoOperando =1;

			}
            system("pause");
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
            system("pause");
			break;

		case 4:
			if (flagTres==1)
			{
				printf("El resultado de A+B es %2.f: \n", resultadoSuma);
				printf("El resultado de A-B es: %2.f \n", resultadoResta);
				if(operandoB!=0)
				{
					printf("El resultado de A/B es: %2.f \n", resultadoDivision);
				}
				else
				{
					printf("No se puede dividir por cero. \n");
				}
				printf("El resultado de A*B es: %2.f \n", resultadoMultiplicacion);
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
            system("pause");
			break;

		default:
			printf("Error. Por favor ingrese una de las opciones del menu. \n");
			system("pause");
			break;

		}

		system("CLS");

	}while(opcion != 5);

	system("pause");

	return 0;
}

