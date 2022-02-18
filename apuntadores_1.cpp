/*
			Apuntadores
	
	Este tema tambi�n se encuentra como enteros
	Los apuntadores son variables que s�lo pueden
	almacenar direcciones de una variable.

	Sintaxis:
	
	tipo *nombre_apuntador;
	
	con el operador"&" podemos hacer referencia a 
	la direcci�n asociada a una variable
	
	El operador "*" se utiliza en dos instancias
	
	1. Para declarar una variable de tipo apuntador
	2. Para accesar al dato que almacena la direcci�n
	que se encuentra en la variable de tipo aputador

	Ejemplo: Mediante el operador asterisco se puede
	imprimir o extraer datos de una direcci�n 
	almacendada en una variable de tipo apuntador.
	
*/

#include<stdio.h>
#include<stdlib.h>

int main(void){
	
	int x=5;
	int *xp = &x;
	
	printf("\n\t Valor de x = %d",*xp);
	*xp = 20;
	
	printf("\n\t Valor de x = %d",x);
	
	printf("\n\n");
	
}

