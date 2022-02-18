/* 
	Escriba un programa que resuelva que encuentre las ra�ces de una ecuaci�n cuadr�tica.

	En el caso de que no se puedan calcular, que le avise al usuario.
*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int main(void){
	
	printf("\n\t Programa para sacar las ra�ces de una ecuaci�n cuadr�tica");
	
	//Variables de etrada
	int a,b,c;
	
	//Variables de salida
	float x1,x2;
	
	//Variable temporal
	float discriminante;
	
	//Fase de lectura
	printf("\n\tIngrese el coeficiente cuadr�tico ");
	scanf("\t%d",&a);
	
	printf("\n\tIngrese el coeficiente del termino lineal ");
	scanf("\t%d",&b);
	
	printf("\n\tIngrese el coeficiente del termino independiente ");
	scanf("\t%d",&c);
	
	//Fase de poceso
	
	if(a==0){
		printf("\n\tEl t�rmino cuadr�tico no puede ser cero");
		return(0);
	}
	
	discriminante= pow(b,2)-4*a*c;
	
	if(discriminante<0){
		printf("\n\t Las ra�ces son complejas");
		return(0);
	}
	
	x1=(-b+sqrt(discriminante))/(2*a);
	
	x2=(-b-sqrt(discriminante))/(2*a);
	
	//Fase de Salida
	
	printf("\n\t La ra�z uno de la ecuaci�n es= %f",x1);
	printf("\n\t La ra�z dos de la ecuaci�n es= %f",x2);

	return(0);

}
