//Problema con expresiones de caracter. Escribe un programa dado un caracter responda con elprimer caraer 
//del d�a de la semana
//Escriba una funci�n  men�, que muestre las opciones


#include<stdio.h>
#include<stdlib.h>

char menu(void);

int main (void){
	
	//Variables de entrada
	char dia;

	system("cls");

	printf("Programa que indica un d�a de la semana seg�n un carcater");

	dia=menu();

	

	//Fase de procedimiento
	
	switch (dia){
		
		case'L':
			printf("\n\t Eligi� el d�a Lunes \n");
			break;
		case'M':
			printf("\n\t Eligi� el d�a Martes \n");
			break;
		case'm':
			printf("\n\t Eligi� el d�a Mi�rcoles \n");
			break;
		case'J':
			printf("\n\t Eligi� el d�a Jueves \n");
			break;
		case'V':
			printf("\n\t Eligi� el d�a Viernes \n");
			break;
		case'S':
			printf("\n\t Eligi� el d�a S�bado \n");
			break;
		case'D':
			printf("\n\t Eligi� el d�a Domingo \n");
			break;
		default:
			printf("El caracter no es v�lido");
			break;
	}
	system("pause");
	
} 

char menu(void){
	
	char opcion;
	
	printf("\n [L] Lunes");
	printf("\n [M] Martes");
	printf("\n [m] Mi�rcoles");
	printf("\n [J] Jueves");
	printf("\n [V] Viernes");
	printf("\n [S] S�bado");
	printf("\n [D] Domingo");
	printf("\nElija una opci�n");
	scanf("\n%c",&opcion);
	return(opcion);
}
