//Ejercicio 1

#include <stdio.h>

int main(void){
	
	printf("\n\t Programa para conocer el v�lumen de un cilindro dados su altura y su di�metro");
	
	//Variables de entrada= son los valores que requiere el programa
	
	float altura, diametro;
	
	//Variables de salida = Son los valores que regresa el programa
	
	float volumen;
	
	//Variables temporales = Son los valores que se usan adicionalmente dentro del programa 
	
	float radio, pi;
	
	//Lectura de datos
	
	printf("\n\tIntroduzca el di�metro, en metros");
	scanf("\t%f",&diametro);//diametro=10
	
	printf("\n\t Introduzca la altura, en metros");
	scanf("\t%f",&altura);//altura=8
	
	//Fase de procedimiento
	
	radio=diametro/2;//radio=10/2
	pi=3.141593;
	volumen=pi*(radio*radio)*altura;4//pi(5*5)8
	
	//Salida de informaci�n
	
	printf("\n\t El volumen del cilindro es de %f metros c�biicos",volumen);
}
