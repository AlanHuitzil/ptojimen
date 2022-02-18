//Ejercicio 1

#include <stdio.h>

int main(void){
	
	printf("\n\t Programa para conocer el vólumen de un cilindro dados su altura y su diámetro");
	
	//Variables de entrada= son los valores que requiere el programa
	
	float altura, diametro;
	
	//Variables de salida = Son los valores que regresa el programa
	
	float volumen;
	
	//Variables temporales = Son los valores que se usan adicionalmente dentro del programa 
	
	float radio, pi;
	
	//Lectura de datos
	
	printf("\n\tIntroduzca el diámetro, en metros");
	scanf("\t%f",&diametro);//diametro=10
	
	printf("\n\t Introduzca la altura, en metros");
	scanf("\t%f",&altura);//altura=8
	
	//Fase de procedimiento
	
	radio=diametro/2;//radio=10/2
	pi=3.141593;
	volumen=pi*(radio*radio)*altura;4//pi(5*5)8
	
	//Salida de información
	
	printf("\n\t El volumen del cilindro es de %f metros cúbiicos",volumen);
}
