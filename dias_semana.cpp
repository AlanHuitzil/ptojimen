/*
	Estructura anidada del if-else
	
	if(condici�n_1)
		if(condici�n_2)
			if(condici�n_3)
				instrucci�n_1;
		else
			Instrucci�n_2;	
	else	
		if(condici�n_4)
			Instrucci�n_3;
		else
			instrucci�n_4;			
			
*/
	
//Escriba un programa que lea un n�mero del 1 al 7 y diga que d�a de la semana le corresponde

#include<stdio.h>
#include<stdlib.h>

int main (void){
	
	//Variables de entrada
	int numero;

	system("cls");
	printf("Programa que indica un d�a de la semana seg�n un n�mero del 1 al 7");

	//Fase de lectura
	printf("\n\tIngrese un n%cmero del 1 al 7 ",163);
	scanf("\n%d",&numero);
	
	//Fase de procedimiento
	
	if(numero>=1 && numero<=7){
		if(numero==1){
			printf("\n\tEl d�a de la semana que le corresponde al %d es lunes",numero);
		}
		if(numero==2){
			printf("\n\tEl d�a de la semana que le corresponde al %d es martes",numero);
		}
		if(numero==3){
			printf("\n\tEl d�a de la semana que le corresponde al %d es mi�rcoles",numero);
		}
		if(numero==4){
			printf("\n\tEl d�a de la semana que le corresponde al %d es jueves",numero);
		}
		if(numero==5){
			printf("\n\tEl d�a de la semana que le corresponde al %d es viernes",numero);
		}
		if(numero==6){
			printf("\n\tEl d�a de la semana que le corresponde al %d es s�bado",numero);
		}
		if(numero==7){
			printf("\n\tEl d�a de la semana que le corresponde al %d es domingo",numero);
	
		}
	else{
		printf("\n\t El n�mero no corresponde a ning�n d�a de la semana");
	}

	}
	
	
}	
