#include<stdio.h>
#include<stdlib.h>

void precio(void){
	
	float precio_base,impuesto;
	float precio_final;
	printf("\n\t Programa que calcula el precio final de un producto");
	
	printf("\n\t Introduzca el precio base: ");
	scanf("%f",&precio_base);
	
	printf("\n\t Introduzca el impuesto: ");
	scanf("%f",&impuesto);
	
	precio_final = precio_base+precio_base*impuesto;
	
	printf("\n\t El preio final es %f pesos",precio_final);
}

int main(void){
	
	precio();
	
	system("pause");
}
