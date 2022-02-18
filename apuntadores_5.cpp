#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>


int main(void){
	
	int *x=NULL;
	
	//x= (int*)malloc(sizeof(int));
	
	int n;
	
	printf("\n\t Ingrese el número de elementos del arreglo:	");
	scanf("%d",&n);
	
	x=(int*)malloc(n*sizeof(int));

	if(x==NULL){
		
		printf("\n\t No se apartó memoria. Y no puedo continuar");
		system("pause");
		exit(1);
	}

	for(int i=0; i<n; i++){
		
		printf("\n\t Ingrese el elemento %d:	",i+1);
		scanf("%d",&x[i]);
	}
	
	system("cls");
	
	for(int i=0; i<n; i++){
		
		printf("\n\t Elemento %d:%d	",i+1,x[i]);
	}
	
	free(x);
	
	printf("\n\n");
	system("pause");
} 
		
	
