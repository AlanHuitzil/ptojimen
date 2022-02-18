/*

Paso de parámetros de dos dimensiones
Se tienen dos formar de pasar arreglos a una función

La primera es poiendo el tipo y el nombre del arreglo con las dimensiones del arreglo. Mediante esta
forma se le pasan arreglos de tamaño fijo y su sintaxis es:

tipo nombre_de_la_función(tipo nombre_arreglo[r][c]);

donde r y c son constantes 

Ejemplo:

	int arreglo(int arreglo_2[5][4]); 
	
Una segunda forma de pasar arreglos de dos dimensiones a una función es la siguiente:

	tipo nombre_función(tipo nombre_arreglo[][columnas], int filas);
	
	En esta forma, queda abierto el tamaño de las filas(renglones) y solamente ponemos el tamaño de
	las columnas
	*La variable "columnas" debe de ser una constante 
	
Ejemplo:

	float numeros(float arreglo[][3], int f);
*/

// Escriba una función que lea una matriz; otra función que la escriba y la función principal que las utilice


#include<stdio.h>
#include<stdlib.h>

void lectura(int arreglo[5][5]);

void escritura(int arreglo[][5], int filas);

int main(void){
	
	int matriz[5][5];
	
	system("cls");
	
	printf("\n\t El programa lee e imprime una matriz");
	
	printf("\n\t Lectura de la matri: \n");
	
	lectura(matriz);
	
	printf("\n\t Matriz leida correctamente");
	
	escritura(matriz,5);
	
	printf("\n\n");
	system("pause");
}

void lectura(int arreglo[5][5]){
	
	int i,j;
	
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
		
		printf("\n\t Inrese el elemento [%d][%d]",i+1,j+1);
		scanf("%d",&arreglo[i][j]);
	}
	}
	
}

void escritura(int arreglo[][5], int filas){
	
	int i,j;
	
	for(i=0;i<filas;i++){
		for(j=0;j<5;j++){
			printf("%d\t",arreglo[i][j]);
		}
		printf("\n");
	}
	
}
