/*
Hacer un programa que lea un número entero y diga si es natural o no
*/

#include<stdio.h>
#include<stdlib.h>

int main (void){
	
	//Variables de entrada
	int numero;
	
	system("cls");

	printf("\n\t Progana que lee un n%cmero entero e indica si es natural o no",163);
	
	//Fase de lectura
	printf("\n\t Ingrese un n%cmero entero ",163);
	scanf("\t%d",&numero);
	
	//Fase de proceso
	if(numero>=0)
		printf("\n\t El n%cmero %d es natural ",163,numero);
	else
		printf("\n\t El n%cmero %d no es natural",163,numero);
		
	system ("pause");
	
}
