
/* Estructuras while anidadas 
	
	while(condición_1){
		
		while(condición_2){
		
			instrucción;	
		}	
	}

	La estructura de la condición_2 se repite tantas veces como como la condición_1 lo requiera

*/

//Escriba un programa que muestre en pantalla 5 renglones con los números del 1 al 5
#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	//Variables de entrada
	int contador_1=1, contador_2=1;
	
	printf("\n\t El programa muestra series del 1 al 5, repetidas veces\n");
	
	//Fase de proceso
	while(contador_1<=5){
		contador_2=1;
		while(contador_2<=5){
			
			printf("\t%d",contador_2);
			contador_2++;
		}
		printf("\n");
		contador_1++;
	}
	
}
