/* ESTRUCTURA GENERAL DE UN PROGRAma
	ejemplificado por el programa de las velocidades
	
	Autor: Medina Serna Alan						*/
	
//Librer�as utilizadas
#include<stdio.h>

//Definici�n de la funci�n tiempo

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

	printf("Ingrese la aceleraci�n");

	scanf("%f",&a);
	
	//Fase de procedimiento
	tiempo = Tiempo(vi,vf,a);
	
	//Salida de informaci�n
	printf("El tiempo es %f", tiempo);
	}
	//Desarrollo del c�digo de la funci�n tiempo
	
	float Tiempo(float vi, float vf, float a)
	{
		float tiempo;
		tiempo=(vi-vf)/a;
		//Salida de informaci�n
		return(tiempo);
	}
	//Fin de la funci�n

