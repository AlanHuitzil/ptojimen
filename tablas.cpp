/*
Escribir una función que escriba la tabla de un número
	Esriba la función principal que la utilice, que lea dos números enteros, el primero deberá de ser
	menor que el segundo y se le mostrará al usuario las tablas de multiplicar del número 1 al número
	2.
*/

#include<stdio.h>
#include<stdlib.h>

void tabla(int numero){
	
	int contador=1;
	
	do{
		
		printf("\n%d*%d=%d\n",numero, contador,(numero*contador));
		contador++;
		
	}while(contador<=10);
	
}

int main(void){
	
	//Variables de entrada
	int numero_1, numero_2;
	
	system("cls");
	
	printf("\n El programa lee dos número, y muestra las tablas de multiplicar desde el primer número hasta el segundo");
	
	//Fase de lectura
	do{
	
	printf("\n Ingrese el primer número: \n");
	scanf("\n%d",&numero_1);
	
	printf("\n Ingrese el segundo número: \n");
	scanf("\n%d",&numero_2);
	system("cls");
	}while(numero_1>numero_2);
	
	//Fase de proceso
	

		
		do{
			
			system("cls");
			printf("\n Tabla del numero %d\n",numero_1);
			tabla(numero_1);
			numero_1++;
			system("pause");
			
		}while(numero_1<=numero_2);

}
	
	

