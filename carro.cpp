#include<stdio.h>

int main(void)
{
	
//Definici�n de variables
//Variables de entrada

float vf,vi,a;

//Variables de salida

float t;

//Fase de lectura

printf("Ingrese la velocidad final");

scanf("%f",&vf);

printf("Ingrese la velocidad inicial");

scanf("%f",&vi);

printf("Ingrese la aceleraci�n");

scanf("%f",&a);

//Pr0ocedimiento

t=(vf-vi)/a;

//Fase de salida

printf("El tiempo es %f",t);

}
