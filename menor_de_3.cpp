//Escriba una funci�n que dados 3 n�meros le regrese el n�mero menor.
//Escriba la funci�n principal que la utilice.

#include <stdio.h>
#include <stdlib.h>

int menor(int num1, int num2, int num3);

int main(void){
	
	//Variables de entrada
	int num1, num2, num3;
	
	//Variable de salida
	int min;
	
	system("cls");
	
	printf("\n\tEl programa lee 3 n�meros e indica cu�l es el menor a trav�s de una funci�n");
	

	//Fase de lectura
	printf("Ingrese el primer n�mero");
	scanf("\n\t%d",&num1);
	
	printf("Ingrese el segundo n�mero");
	scanf("\n\t%d",&num2);
	
	
	printf("Ingrese el tercer n�mero");
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

