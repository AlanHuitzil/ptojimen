#include <stdio.h>

float multiplica(float multiplicando, float multiplicador);


int main(void){
	
	//Declaraci�n de variables
	float multiplicando;
	float multiplicador;
	
	//Variable de salida
	float producto;
	
	
	printf("Este programa sirve para multiplicar el multiplicando por el multiplicador en n�meros reales");
	//Fase de lectura
	printf("\n\t Ingrese el multiplicando: ");
	scanf("\t%f",&multiplicando);
	
	printf("\n\t Ingrese el multiplicador: ");
	scanf("\t%f",&multiplicador);

	//Procedimiento
	producto = multiplica(multiplicando, multiplicador);
	printf("\n\n\t%f * %f = %f\n",multiplicando,multiplicador,producto);	
	
}//fin de main


float multiplica(float multiplicando, float multiplicador){

	
	float producto;
	producto= multiplicando*multiplicador;
	
	return (producto);
	

}
