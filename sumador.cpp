/*
	Escriba un programa en lenguaje C que:
	-Que diga por el teclado un n�mero entero
	-Repite el paso n�mero 1 mientras que el paso n�mero 1 sea distinto de 0.
	-Muestre cu�ntos n�meros mayores que 0 han sido introduciso por el usuario, 
	 as� como la suma de todos ellos.
	
*/

#include<stdio.h>
#include<stdlib.h>

int main(void){
	
	//Variables de entrada
	int numero;
	
	//Variables de salida
	int suma=0;
	
	int contador=-1;
	
	system("cls");

	printf("\n\t Programa que va sumando n�meros");

	do{
	
	
	printf("\n\t Introduzca su n�mero	");
	scanf("%d",&numero);
	suma=suma+numero;
	contador++;

	
	}while(numero!=0);
	
	printf("\n\n\t La suma de sus n�meros es: %d",suma);
	printf("\n\t Ingreso un total de %d numeros",contador);
	
	printf("\n\n");
	system("pause");
	
	
}
