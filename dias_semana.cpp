/*
	Estructura anidada del if-else
	
	if(condición_1)
		if(condición_2)
			if(condición_3)
				instrucción_1;
		else
			Instrucción_2;	
	else	
		if(condición_4)
			Instrucción_3;
		else
			instrucción_4;			
			
*/
	
//Escriba un programa que lea un número del 1 al 7 y diga que día de la semana le corresponde

#include<stdio.h>
#include<stdlib.h>

int main (void){
	
	//Variables de entrada
	int numero;

	system("cls");
	printf("Programa que indica un día de la semana según un número del 1 al 7");

	//Fase de lectura
	printf("\n\tIngrese un n%cmero del 1 al 7 ",163);
	scanf("\n%d",&numero);
	
	//Fase de procedimiento
	
	if(numero>=1 && numero<=7){
		if(numero==1){
			printf("\n\tEl día de la semana que le corresponde al %d es lunes",numero);
		}
		if(numero==2){
			printf("\n\tEl día de la semana que le corresponde al %d es martes",numero);
		}
		if(numero==3){
			printf("\n\tEl día de la semana que le corresponde al %d es miércoles",numero);
		}
		if(numero==4){
			printf("\n\tEl día de la semana que le corresponde al %d es jueves",numero);
		}
		if(numero==5){
			printf("\n\tEl día de la semana que le corresponde al %d es viernes",numero);
		}
		if(numero==6){
			printf("\n\tEl día de la semana que le corresponde al %d es sábado",numero);
		}
		if(numero==7){
			printf("\n\tEl día de la semana que le corresponde al %d es domingo",numero);
	
		}
	else{
		printf("\n\t El número no corresponde a ningún día de la semana");
	}

	}
	
	
}	
