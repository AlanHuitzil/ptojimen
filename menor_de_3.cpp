//Escriba una función que dados 3 números le regrese el número menor.
//Escriba la función principal que la utilice.

#include <stdio.h>
#include <stdlib.h>

int menor(int num1, int num2, int num3);

int main(void){
	
	//Variables de entrada
	int num1, num2, num3;
	
	//Variable de salida
	int min;
	
	system("cls");
	
	printf("\n\tEl programa lee 3 números e indica cuál es el menor a través de una función");
	

	//Fase de lectura
	printf("Ingrese el primer número");
	scanf("\n\t%d",&num1);
	
	printf("Ingrese el segundo número");
	scanf("\n\t%d",&num2);
	
	
	printf("Ingrese el tercer número");
	scanf("\n\t%d",&num3);
	
	//Fase de proceso
	min=menor( num1, num2, num3);
	
	printf("\n\t El menor es el %d",min);
	
	system("pause");	
}

int menor(int num1, int num2, int num3){
	
	int numero;
	
	if(num1<num2 && num1<num3)
		numero=num1;
	if(num2<num1 && num2<num3)
		numero=num2;	
	if(num3<num1 && num3<num2)
		numero=num3;
	
	return (numero);
}

