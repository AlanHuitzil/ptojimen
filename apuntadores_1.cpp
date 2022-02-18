/*
			Apuntadores
	
	Este tema también se encuentra como enteros
	Los apuntadores son variables que sólo pueden
	almacenar direcciones de una variable.

	Sintaxis:
	
	tipo *nombre_apuntador;
	
	con el operador"&" podemos hacer referencia a 
	la dirección asociada a una variable
	
	El operador "*" se utiliza en dos instancias
	
	1. Para declarar una variable de tipo apuntador
	2. Para accesar al dato que almacena la dirección
	que se encuentra en la variable de tipo aputador

	Ejemplo: Mediante el operador asterisco se puede
	imprimir o extraer datos de una dirección 
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

