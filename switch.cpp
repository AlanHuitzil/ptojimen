/*
Sintaxis de la estructura switch

switch(expresión){
	case<expresión1>:
		bloque de instrucciones;
	case<expresión2>:
		bloque de instrucciones;
	.
	.
	.
	case<expresiónN>:
		bloque de instrucciones;
	default:
		bloque de instrucciones;
}

Donde:
	expresión puede ser de tipo numérico o de tipo caracter.
	las expresiones 1 hasta n deberán coincidir con el tipo de la expresión
	la expresión default es opcional, esto es no toda la estructura Switch requiere un default.	
*/

//Ejemplo con expresiones numéricas. Escriba un programa que dado el día de la semana responda con el día corrrespondiente.
//"BREAK" es una función aparte para cerrar ciclos owo

#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	//Variables de entrada
	int dia;
	
	system("cls");
	
	printf("\n\t Programa para conocer el día de la semana con respecto a su número");
	
	//Fase de lectura
	printf("\n\t Ingrese el número del día: ");
	scanf("%d",&dia);
	
	//Fase de proceso
	switch(dia){
		case 1:
			printf("\n\t El día correspondiente es Lunes\n");
			break;
		case 2:
			printf("\n\t El día correspondiente es Martes\n");
			break;
		case 3:
			printf("\n\t El día correspondiente es Miércoles\n");
			break;
		case 4:
			printf("\n\t El día correspondiente es Jueves\n");
			break;
		case 5:
			printf("\n\t El día correspondiente es Viernes\n");
			break;
		case 6:
			printf("\n\t El día correspondiente es Sábado\n");
			break;
		case 7:
			printf("\n\t El día correspondiente es Domingo\n");
			break;
		default:
			printf("\n\t El número no corresponde a un día de la semana");
			break;	
	}
	
	
	system("pause");
}
