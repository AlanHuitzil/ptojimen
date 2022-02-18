#include <stdio.h>

void resta(int minuendo, int sustraendo);


int main(void){
	
	//Declaración de variables
	int minuendo;
	int sustraendo;
	
	printf("Este programa sirve para restar el minuendo del sustraendo en números enteros");
	//Fase de lectura
	printf("\n\t Ingrese el minuendo: ");
	scanf("\t%d",&minuendo);
	
	printf("\n\t Ingrese el sustraendo: ");
	scanf("\t%d",&sustraendo);

	//Procedimiento
	 resta(minuendo, sustraendo);
	
	
}//fin de main


void resta(int minuendo, int sustraendo){
	
	int resultado;
	resultado= minuendo-sustraendo;
	printf("\n\n\t%d - %d = %d\n",minuendo,sustraendo,resultado);

}
