/*
	Escriba un programa en lenguaje C que:
	-Que diga por el teclado un número entero
	-Repite el paso número 1 mientras que el paso número 1 sea distinto de 0.
	-Muestre cuántos números mayores que 0 han sido introduciso por el usuario, 
	 así como la suma de todos ellos.
	
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

	printf("\n\t Programa que va sumando números");

	do{
	
	
	printf("\n\t Introduzca su número	");
	scanf("%d",&numero);
	suma=suma+numero;
	contador++;

	
	}while(numero!=0);
	
	printf("\n\n\t La suma de sus números es: %d",suma);
	printf("\n\t Ingreso un total de %d numeros",contador);
	
	printf("\n\n");
	system("pause");
	
	
}
