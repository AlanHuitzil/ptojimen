/*
	Escriba un programa que lea un arreglo de n n�mero enteros y que diga cu�l de ellos es el mayor
	y en qu� posici�n se encuentra.
	
*/

#include<stdio.h>
#include<stdlib.h>

int main(void){
	
	int numeros[100];
	int contador,n,numero_mayor,posicion;
	
	
	system("cls");
	printf("\n\t El programa lee una cantidad de numeros e indica cual es el mayor");
	
	printf("\n\t Ingrese la cantidad de elementos a ingresar(M�x. 100)		");
	scanf("%d",&n);
	
	for(contador=0;contador<n;contador++){
		
		printf("\n\tIngrese su n�mero %d pinche zorra	",contador+1);
		scanf("%d",&numeros[contador]);
		
	}
	
	numero_mayor=numeros[0];
		
	for(contador=0;contador<n;contador++){
		
		if(numeros[contador]>numero_mayor){
			numero_mayor=numeros[contador];
			posicion=contador+1;
		}
		
	}
	
	printf("\n\t El numero mayor es %d con posicion %d",numero_mayor,posicion);
	printf("\n\n\n");
	
	system("pause");
	
}

