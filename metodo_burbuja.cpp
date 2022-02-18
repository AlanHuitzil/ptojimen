/* 
	Escriba una función que ordene los elementos de un arreglo y con el ejemplo
	anterior complemente las operaciones de entrada y salida.
	
	Se utiliza para el ordenamiento el método de la burbuja:
	


*/

#include<stdio.h>
#include<stdlib.h>

void ordena(int arreglo[],int t){
	
	int i,j;
	
	int temp;
	
	for(1=0;i<(t-1);i++){
		for(j=i+1;j<t;j++){
		
		if(arreglo[i]<arreglo[j])
		temp=arreglo[i];
		arreglo[i]=arreglo[j];
		//AQUÍ FALTA ALGO	
		}
	}
}

void lectura(int numeros[],int n){
	
	for(int i=0;i<n;i++){
	
	printf("\n\t Ingrese el elemento %d:	",(i+1));
	scanf("%d",&numeros[i]);
	
	}
}

void escritura(int arreglo[5]){
	
	printf("\n\t Numeros leidos\n\n\t");
	int i;
	
	for(i=0;i<5;i++){
		
		printf("\n\t Elemento %d= %d",(i+1),arreglo[i]);
	}
	
}


int main(void){
	
	int vector[2];
	
	system("cls");
	
	printf("\n\t Programa que lee y escribe 5 números");
	
	lectura(vector,5);
	
	ordena(vector,5);
	
	escritura(vector);
	
	
	
	
	printf("\n\n\n");
	system("pause");
	
	
}

