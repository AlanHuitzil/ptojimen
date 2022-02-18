/*

For, se utiliza cuándo queremos que se repitan un conjunto de instrucciones, un número determinado
de veces.

para (i=1 hasta n){

	bloque de instrucciones;
}

for(inicio; condicion; incremento){

	instruccion_1;
	instruccion_2;
	
}

Donde:
inicio: es el campo donde se inicializan las variables de control
condicion: las instruccioes se ejecutarán mientras condición sea verdadero (es una expresión)
incremento: es el campo donde se incrementa o decrementan las variables de control

nota: ninguno de estos campos es imprescindible

*/

//Escriba un programa que cuente de n en n, mostrándolo en pantalla, hasta el número m

#include<stdlib.h>
#include<stdio.h>

int main(void){
	
	//Variables de entrada
	int m,n;
	
	//Variable temporal
	int contador;
	
	system("cls");
	
	printf("\n Programa que cuenta de uno en uno de un intervalo");
	
	//Fase de lectura
	printf("\n Ingresa el valor del primer número");
	scanf("\n%d",&n);
	
	printf("\n Ingresa hasta que número quiere que cuente");
	scanf("\n%d",&m);
	
	//Fase de proceso y salida
	for(contador=1;(contador*n)<=m;contador++){
		
		printf("\n%d",(contador));
		
	}
	
}
