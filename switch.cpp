/*
Sintaxis de la estructura switch

switch(expresi�n){
	case<expresi�n1>:
		bloque de instrucciones;
	case<expresi�n2>:
		bloque de instrucciones;
	.
	.
	.
	case<expresi�nN>:
		bloque de instrucciones;
	default:
		bloque de instrucciones;
}

Donde:
	expresi�n puede ser de tipo num�rico o de tipo caracter.
	las expresiones 1 hasta n deber�n coincidir con el tipo de la expresi�n
	la expresi�n default es opcional, esto es no toda la estructura Switch requiere un default.	
*/

//Ejemplo con expresiones num�ricas. Escriba un programa que dado el d�a de la semana responda con el d�a corrrespondiente.
//"BREAK" es una funci�n aparte para cerrar ciclos owo

#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	//Variables de entrada
	int dia;
	
	system("cls");
	
	printf("\n\t Programa para conocer el d�a de la semana con respecto a su n�mero");
	
	//Fase de lectura
	printf("\n\t Ingrese el n�mero del d�a: ");
	scanf("%d",&dia);
	
	//Fase de proceso
	switch(dia){
		case 1:
			printf("\n\t El d�a correspondiente es Lunes\n");
			break;
		case 2:
			printf("\n\t El d�a correspondiente es Martes\n");
			break;
		case 3:
			printf("\n\t El d�a correspondiente es Mi�rcoles\n");
			break;
		case 4:
			printf("\n\t El d�a correspondiente es Jueves\n");
			break;
		case 5:
			printf("\n\t El d�a correspondiente es Viernes\n");
			break;
		case 6:
			printf("\n\t El d�a correspondiente es S�bado\n");
			break;
		case 7:
			printf("\n\t El d�a correspondiente es Domingo\n");
			break;
		default:
			printf("\n\t El n�mero no corresponde a un d�a de la semana");
			break;	
	}
	
	
	system("pause");
}
