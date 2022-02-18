/*
	Las variables de tipo arreglo de dos dimensione también se pueden inicializar, por ejemplo:
	
	int matriz[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	
*/

#include<stdio.h>
#include<stdlib.h>


int main(void){
	
	int matriz[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	
	int i,j;
	
	system("cls");
	
	for(i=0;i<3;i++){
		
		for(j=0;j<3;j++){
			
			printf("%d\t",matriz[i][j]);
			
		}
		
		printf("\n");
	}
	
	printf("\n\n");
	
	
}
