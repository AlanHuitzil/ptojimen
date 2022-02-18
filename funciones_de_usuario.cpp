#include<stdio.h>

void saluda(void){
	
	printf("\n\tHola compa%ceros del grupo 1CM13",164);
}

//Definición de la función suma
int suma(void);
int resultado;


int main(void){
	
	//Problema: Escribir una función que salude	
	//Llamado de la función saluda
	saluda();
	
	//Problema: Escriba una función que sume 2 valores y regrese el resultado
	//Llamado de la función suma
	resultado= suma();
	printf("\n\t El resultado de la suma es = %d",resultado);
	
}
//Fin de main

int suma(void){
	
	//Variables de entrada
	int x;
	int y;
	
	//Variables de salida
	int r;
	
	//Fase de lectura
	printf("\n\tIngrese el primer sumando ");
	scanf("%d",&x);
	
	printf("\n\tIngrese el segundo sumando ");
	scanf("%d",&y);
	
	//Fase de proceso 
	r=x+y;
	
	//Salida de resultados
	return r;
	
}

