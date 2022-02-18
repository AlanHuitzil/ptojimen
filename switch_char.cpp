//Problema con expresiones de caracter. Escribe un programa dado un caracter responda con elprimer caraer 
//del día de la semana
//Escriba una función  menú, que muestre las opciones


#include<stdio.h>
#include<stdlib.h>

char menu(void);

int main (void){
	
	//Variables de entrada
	char dia;

	system("cls");

	printf("Programa que indica un día de la semana según un carcater");

	dia=menu();

	

	//Fase de procedimiento
	
	switch (dia){
		
		case'L':
			printf("\n\t Eligió el día Lunes \n");
			break;
		case'M':
			printf("\n\t Eligió el día Martes \n");
			break;
		case'm':
			printf("\n\t Eligió el día Miércoles \n");
			break;
		case'J':
			printf("\n\t Eligió el día Jueves \n");
			break;
		case'V':
			printf("\n\t Eligió el día Viernes \n");
			break;
		case'S':
			printf("\n\t Eligió el día Sábado \n");
			break;
		case'D':
			printf("\n\t Eligió el día Domingo \n");
			break;
		default:
			printf("El caracter no es válido");
			break;
	}
	system("pause");
	
} 

char menu(void){
	
	char opcion;
	
	printf("\n [L] Lunes");
	printf("\n [M] Martes");
	printf("\n [m] Miércoles");
	printf("\n [J] Jueves");
	printf("\n [V] Viernes");
	printf("\n [S] Sábado");
	printf("\n [D] Domingo");
	printf("\nElija una opción");
	scanf("\n%c",&opcion);
	return(opcion);
}
