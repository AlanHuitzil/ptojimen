
/*
Problema: Escriba un programa que lea 3 números y le diga al usuaio cuál es el mayor
el programa tendrá las siguientes restricciones: las condiciones deben ser simples (sin
and y or), utilice una estructura anidada
*/

#include <stdio.h>
 int main(void){
 	
 	printf("\t\nPrograma para saber cu%cl de los 3 n%cmeros es mayor",160,163);
	
	//Variables de entrada
	int a,b,c;
	
	//Fase de lectura
	printf("\n\tEscriba el primer n%cmero ",163);
	scanf("\t%d",&a);

	printf("\n\tEscriba el segundo n%cmero ",163);
	scanf("\t%d",&b);
	
	printf("\n\tEscriba el tercer n%cmero ",163);
	scanf("\t%d",&c);
	
	//Fase de procedimeinto
	if(a>b){
		if(a>c){
			printf("\n\t %d es el mayor",a);
			return(0);
		}
	}

	if(b>a){
		if(b>c){
			printf("\n\t %d es el mayor",b);
			return(0);
		}
	}

	if(c>a){
		if(c>b){
			printf("\n\t %d es el mayor",c);
			return(0);
		}
	}
 }
