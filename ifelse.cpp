/*
	Estructura If else
	Pseudoc�digo:
	si(condici�n) entonces
		instrucci�n1;
	si no
		Instrucci�n2:
*/

// Problema: Escriba un programa que dado un n�mero indique si es par o impar

#include<stdio.h>
#include<stdlib.h>

int main (void){
	
	printf("Programa que sirve para saber si un programa es par");
	
	//variable de entrada
	int numero;
	
	//Fase de lectura
	printf("\n\tEscriba un n%cmero entero ",163);
	scanf("\t %d",&numero);
	
	//Fase de proceso
	
	if(numero%2==0){
		printf("\n\t El n%cmero %d es par",163,numero);
		return(0);
	}
	else{
		printf("\n\t El n%cmero %d es impar",163,numero);
	}
}
