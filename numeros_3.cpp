/* 
Escriba un programa que lea 3 números y le diga al usuario cuál es le mayor
*/

#include <stdio.h>

int main (void){
	
	printf("\t\nPrograma para saber cu%cl de los 3 n%cmeros es mayor",160,163);
	
	//Variables de entrada
	int a,b,c;
	
	printf("\n\tEscriba el primer n%cmero ",163);
	scanf("\t%d",&a);

	printf("\n\tEscriba el segundo n%cmero ",163);
	scanf("\t%d",&b);
	
	printf("\n\tEscriba el tercer n%cmero ",163);
	scanf("\t%d",&c);
	
	
	//Fase de proceso
	
	if((a>=b)&& (a>=c)){
		printf("\n\t %d es el mayor",a);
		return(0);
	}
	
	if((b>=a)&& (b>=c)){
		printf("\n\t %d es el mayor",b);
		return(0);
	}	
	
	if((c>=b)&& (c>=a)){
		printf("\n\t %d es el mayor",c);
		return(0);
	}
	
}
