/*
	Dados dos n�meros enteros, escriba una funci�n que muestre las tablas de multiplicar del primer n�mero
	uno al n�mero 2.
	Escriba una funci�n que la utilice 
	hint: utilice una estructura de Fors anidados
	
*/

#include<stdio.h>
#include<stdlib.h>

void tablas(int numero_1,int numero_2){
	
	int contador;
	for(;numero_1<=numero_2;numero_1++){
		
		system("cls");
		printf("\n\n\t Tabla del n�mero %d \n\n",numero_1);
		
		for(contador=1;contador<=10;contador++){
			printf("\n\t%d X %d = %d",numero_1,contador,contador*numero_1);
		}
		printf("\n\n");
		system("pause");
	}
	
}

int main(void){
	
	//Variables de entrada
	int n1,n2;
	
	system("cls");
	printf("\n El programa lee dos n�mero, y muestra las tablas de multiplicar desde el primer n�mero hasta el segundo");
	
	//fase de lectura
	do{
		
		system("cls");
		
		printf("\n\n Ingrese el primer n�mero. Debe de ser menor que el segundo: ");
		scanf("\n %d",&n1);
		
		printf("\n Ingrese el segundo n�mero: ");
		scanf("\n %d",&n2);
		
		if(n1>n2){
			system("cls");
			system("color 04");
			printf("\n\nNO SABES LEER O QU� TE PASA? REPORT\n\n");
			system("pause");
			system("color 07");
		}
		
	}while(n1>n2);
	
	//Fase de proceso
	tablas(n1,n2);
	
	printf("\n\n FIN PTA\n\n");	
	system("pause");
	
}
