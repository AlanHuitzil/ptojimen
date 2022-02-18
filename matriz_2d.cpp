// Desarrolla un programa que lea una matriz y luego la escriba de forma rectangular


#include<stdio.h>
#include<stdlib.h>

int main(void){
	
	
	//Declaración de variables
	int matriz[3][5];
	int i,j;
	
	//Fase de lectura
	printf("\n\tEl programa recibe una matriz y posteriormente la muestra en forma rectangular");
	
	printf("\n\t Lectura de la matriz");
	for(i=0;i<3;i++){
		
		for(j=0;j<5;j++){
			
			printf("\n\tIngrese el elemento  %d,%d:	",i+1,j+1);
			scanf("%d",&matriz[i][j]);
			
		}
		
	}
	//Escritura de la matriz
	printf("\n\tEscritura de la matriz:	");
	for(i=0;i<3;i++){
		
		for(j=0;j<5;j++){
			
			printf("\t%3d",matriz[i][j]);	
		}	
		printf("\n");
	}
	
	
	
	system("pause");
	
}
