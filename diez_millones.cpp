/*
	Escriba un programa que vaya escribiendo los número 1, 10, 100, 1000 etc. hasta 10,000,000	
*/

#include<stdio.h>
#include<stdlib.h>

int main(void){
	
	//Variables
	double n=1;
	printf("\n\t Programa que agrega ceros al 1 hasta llegar a los 6M");
	
	do{
		printf("\n%8.0lf",n);
		n=n*10;
			
	}while(n<=10000000);
	
	
	
}
