

// Arreglo de tamaño "variable"

#include<stdio.h>
#include<stdlib.h>

void lectura(int arreglo[100][100],int n, int m);

void escritura(int arreglo[][100], int renglones, int columnas);

int main(void){
	
	int matriz[100][100];
	int n,m;
	
	
	
	system("cls");
	
	printf("\n\t El programa lee e imprime una matriz");
	
	printf("\n\t Ingrese el numero de renglones");
	scanf("%d",&n);
	
	printf("\n\t Ingrese el numero de filas");
	scanf("%d",&m);
	
	printf("\n\t Lectura de la matriz: \n");
	
	lectura(matriz,n,m);
	
	printf("\n\t Matriz leida correctamente\n");
	
	escritura(matriz,n,m);
	
	printf("\n\n");
	system("pause");
}

void lectura(int arreglo[100][100],int n, int m){
	
	int i,j;
	
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
		
		printf("\n\t Inrese el elemento [%d][%d]",i+1,j+1);
		scanf("%d",&arreglo[i][j]);
	}
	}
	
}

void escritura(int arreglo[][100], int renglones, int columnas){
	
	int i,j;
	
	for(i=0;i<renglones;i++){
		for(j=0;j<columnas;j++){
			printf("%d\t",arreglo[i][j]);
		}
		printf("\n");
	}
	
}
