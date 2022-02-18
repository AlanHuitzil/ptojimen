/*

For, se utiliza cu�ndo queremos que se repitan un conjunto de instrucciones, un n�mero determinado
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
condicion: las instruccioes se ejecutar�n mientras condici�n sea verdadero (es una expresi�n)
incremento: es el campo donde se incrementa o decrementan las variables de control

nota: ninguno de estos campos es imprescindible

*/

//Escriba un programa que cuente de n en n, mostr�ndolo en pantalla, hasta el n�mero m

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
	printf("\n Ingresa el valor del primer n�mero");
	scanf("\n%d",&n);
	
	printf("\n Ingresa hasta que n�mero quiere que cuente");
	scanf("\n%d",&m);
	
	//Fase de proceso y salida
	for(contador=1;(contador*n)<=m;contador++){
		
		printf("\n%d",(contador));
		
	}
	
}
