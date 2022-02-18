/*
	Lea un número n de enteros y calcule la media de los que esten en posición impar
	
*/




#include<stdio.h>
#include<stdlib.h>

int main(void){
	
	int numeros[100];
	int contador,n,suma=0,impar=0;
	float media;
	
	
	system("cls");
	printf("\n\t El programa lee una cantidad de numeros e indica la media de los que estén en posición impar");
	
	printf("\n\t Ingrese la cantidad de elementos a ingresar(Máx. 100)		");
	scanf("%d",&n);
	
	for(contador=0;contador<n;contador++){
		
		printf("\n\tIngrese su número %d pinche zorra	",contador+1);
		scanf("%d",&numeros[contador]);
		
	}


		
	for(contador=0;contador<n;contador++){
		
		if((contador+1)%2!=0){	
			suma=suma+numeros[contador];
			impar++;
		}
	}
	
	media=(float)suma/impar;
//	printf("%d",impar);
	
	printf("\n\t La media aritmetica de los numeros en posicion impar es: %.3f",media);

	printf("\n\n\n");
	
	system("pause");
	
}

