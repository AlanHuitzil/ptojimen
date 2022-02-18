//Ejercicio 2

#include <stdio.h>

float media(void);
float resultado;

int main (void){
	
	printf("\n\t Programa para conocer la media de 3 productos que se venden en establecimientos diferentes");
	
	resultado = media();
	printf("\n\t La media de los 3 productos es = %f",resultado);		
}

float media (void){
	
	//Variables de enrada
	float producto1, producto2, producto3;
	
	//Variables de salida
	float media;
	
	//Fase de lectura
	
	printf("\n\t Ingrese el precio del primer producto");
	scanf("\t%f",&producto1);
	
	printf("\n\t Ingrese el precio del segundo producto");
	scanf("\t%f",&producto2);
	
	printf("\n\t Ingrese el precio del tercer producto");
	scanf("\t%f",&producto3);
	
	//Fase de proceso
	
	media=(producto1+producto2+producto3)/3;
	
	//Salida de resultados
	return media;
	
}
