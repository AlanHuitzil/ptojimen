/* Estructura c�clica while

	mientras (condci�n){
		instruccion_1;
		instruccion_2;
		
	}
	Mientras la condici�n "condici�n" sea verdadera se ejecutan las instrucciones "incion_1" e
	"instruccion_2". Para que al menos se ejecute una vez, la condici�n debera de ser verdadera
	La condici�n puede ser una constante, una variable o una expresi�n.

	Sintaxis
	while(condicion){
		
		instruccion1;
		instruccion2;
	}
*/

//Escriba un programa que muestre los n�meros del 10 al 20

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
