/* Estructura cíclica while

	mientras (condción){
		instruccion_1;
		instruccion_2;
		
	}
	Mientras la condición "condición" sea verdadera se ejecutan las instrucciones "incion_1" e
	"instruccion_2". Para que al menos se ejecute una vez, la condición debera de ser verdadera
	La condición puede ser una constante, una variable o una expresión.

	Sintaxis
	while(condicion){
		
		instruccion1;
		instruccion2;
	}
*/

//Escriba un programa que muestre los números del 10 al 20

#include<stdio.h>
#include<stdlib.h>

int main(void){
	
	//Variables de entrada
	int contador=10;
	
	printf("Contador del 10 al 20");
	
	while(contador<21){
		printf("\n\t%d",contador);
		contador=contador+1;
	}
	
}
