/* 
	Escriba un programa que resuelva que encuentre las raíces de una ecuación cuadrática.

	En el caso de que no se puedan calcular, que le avise al usuario.
*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int main(void){
	
	printf("\n\t Programa para sacar las raíces de una ecuación cuadrática");
	
	//Variables de etrada
	int a,b,c;
	
	//Variables de salida
	float x1,x2;
	
	//Variable temporal
	float discriminante;
	
	//Fase de lectura
	printf("\n\tIngrese el coeficiente cuadrático ");
	scanf("\t%d",&a);
	
	printf("\n\tIngrese el coeficiente del termino lineal ");
	scanf("\t%d",&b);
	
	printf("\n\tIngrese el coeficiente del termino independiente ");
	scanf("\t%d",&c);
	
	//Fase de poceso
	
	if(a==0){
		printf("\n\tEl término cuadrático no puede ser cero");
		return(0);
	}
	
	discriminante= pow(b,2)-4*a*c;
	
	if(discriminante<0){
		printf("\n\t Las raíces son complejas");
		return(0);
	}
	
	x1=(-b+sqrt(discriminante))/(2*a);
	
	x2=(-b-sqrt(discriminante))/(2*a);
	
	//Fase de Salida
	
	printf("\n\t La raíz uno de la ecuación es= %f",x1);
	printf("\n\t La raíz dos de la ecuación es= %f",x2);

	return(0);

}
