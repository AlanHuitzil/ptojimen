/* ESTRUCTURA GENERAL DE UN PROGRAma
	ejemplificado por el programa de las velocidades
	
	Autor: Medina Serna Alan						*/
	
//Librerías utilizadas
#include<stdio.h>

//Definición de la función tiempo

float Tiempo(float vi, float vf, float a);

int main(void)
{
	//variable de entrada
	float vi,vf,a;
	//variable de salida
	float tiempo;
	
	//datos de entrada
	printf("Ingrese la velocidad final");

	scanf("%f",&vf);

	printf("Ingrese la velocidad inicial");

	scanf("%f",&vi);

	printf("Ingrese la aceleración");

	scanf("%f",&a);
	
	//Fase de procedimiento
	tiempo = Tiempo(vi,vf,a);
	
	//Salida de información
	printf("El tiempo es %f", tiempo);
	}
	//Desarrollo del código de la función tiempo
	
	float Tiempo(float vi, float vf, float a)
	{
		float tiempo;
		tiempo=(vi-vf)/a;
		//Salida de información
		return(tiempo);
	}
	//Fin de la función

