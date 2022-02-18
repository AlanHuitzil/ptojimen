/* Escriba un programa que determine el capital a invertir en una microempresa de celulares que quiere
	iniciar Osbaldo Gomez Ortiz.
	Quiere empezar el negocio con 3 tipos de celulares
	con 3 diferentes modelos, el precio de cada uno de los tipos de modelos cuestan lo mismo escriba 
	el monto que se requiere para echarla a andar.
*/

#include<stdio.h>
#include<stdlib.h>

int main(void){
	
	int unidades[3][3];
	float precios[3][3];
	int i,j;
	float monto;
	
	system("cls");
	printf("\n\t Progrma que calcula el monto de los celulares");
	
	//Fase de lectura
	
	printf("\n\t Lectura del numero de modelos de cada tipo de celular");
	for(i=0;i<3;i++){
		
		for(j=0;i<3;i++){
			
			printf("\n\t Ingrese el numero de celulares para el modelo %d del tipo %d:	",i+1,j+1);
			scanf("%d",&unidades[i][j]);
			
		}
		
	}
	printf("\n\t Lectura de precios de cada modelo:	");
	for(i=0;i<3;i++){
		
	printf("\n\t Ingrese el precio del modelo del celular %d:	",i+1);
	scanf("%f",&precios[i]);
		
	}
	
	for(i=0;i<3;i++){
		
		for(j=0;i<3;i++){
			
			monto+=unidades[i][j]*precios[i];
			
		}
		
	}
	
	printf("\n\t Se requiere %f",monto);
	
	printf("\n\n\n");
	system("pause");
	
}
