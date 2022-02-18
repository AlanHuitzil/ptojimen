//Escriba un algoritmo que dados 3 enteros muestre el número menor utilizando condiciones sencillas, esto es
//sólo podra comparar dos números y sólo una estructura de ifs/else anidados

#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	printf("\n\tEl programa lee 3 números e indica cuál es el menor a través de una función");
	
	//Variables de entrada
	int num1, num2, num3;
	
	//Variable de salida
	int min;
	
	//Fase de lectura
	printf("\n\tIngrese el primer número ");
	scanf("\n\t%d",&num1);
	
	printf("\n\tIngrese el segundo número ");
	scanf("%d",&num2);
	
	
	printf("\n\tIngrese el tercer número ");
	scanf("%d",&num3);
	
	//Fase de proceso
	
	if(num1<num2){
		if(num1<num3){
			printf("\n\t El menor es el %d",num1);
			return(0);
		}		
	}
	
	if(num2<num3){
		if(num2<num1){
			printf("\n\t El menor es el %d",num2);
			return(0);
		}		
	}
	if(num3<num1){
		if(num3<num2){
			printf("\n\t El menor es el %d",num3);
			return(0);
		}		
	}
	
}
