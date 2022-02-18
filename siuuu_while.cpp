
// Escriba un progrma que muestre una expresión afirmativa mientras el usuario lo requiera.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
	
	//Variables de entrada
	char respuesta[3]="si";
	
	printf("\n\tPrograma que te satisface");
	
	//Fase de proceso
	
	//strcmp(); Compara dos cadenas de caracteres
	//La sintaxis strcmp( cadena_1, cadena_2);
	//Si la función regresa 0, quiere decir que las cadenas son iguales
	
	while (strcmp(respuesta,"si")==0){
		printf("\n\t SIUUUU!");
		printf("\n\t Quiere volver a sentirlo?"	);
		printf("\n\t SI[si] o NO[no]	");
		scanf("\n\t%s",&respuesta);
		
	}
	
	
}
