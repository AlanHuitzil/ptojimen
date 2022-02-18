

#include <stdio.h>
#include<stdlib.h>

int main(void){
	
	system("cls");
	
	printf("\n\t Programa que saca el promedio de los números");
	
	float n=0;
	float r;
	int contador=0;
	float promedio;
	
	do{
	
	printf("\n\n Ingrese su número ");
	scanf("\n%f",&r);
	n=n+r;
	contador++;
	promedio=n/contador;
	printf("El promedio es de: %f",promedio);
	printf("\n\nContador: %d",contador);
	printf("\n\n Valor acumulado: %f",n);
			
	}while(n!=999);
	
	printf("\n\n");
	printf("Adiós ");
	system("pause");
	
}
