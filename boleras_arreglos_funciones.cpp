/*
	Problema. Escriba una función que reciba como parámetros un conjunto de boletas y regrese el
	posición de la boleta a buscar si se encuetra en el arreglo o -1 si no se encuentra.
	Y esciba una función principal que la utilice de tal manera que el usuario pueda realizar las
	consultas que desee
	
*/

#include<stdio.h>
#include<stdlib.h>

int posicion(double boleta[],int n,double boleta){
	
	int posicion;
	
	for(posicion=0;posicion<n;posicion++){
		
		if(boleta[posicion]=boleta)
		return(posicion);
	}
	
	return(-1);
}



int main(void){
	
	double boletas[10];
	double boleta;
	char respuesta;
	int pos;
	
	system("cls");
	printf("\n\tEl programa recibe una boleta y busca su posición dentro de un conjunto de boletas e indica si se encuentra ");
	
	for(int i=0;i<10;i++){
		
		printf("\n\t Ingrese la bolta del alumno %d",i+1);
		scanf("%lf"&boletas[i]);
	}
	
	do{
		
		printf("\n\t Ingrese la boleta que desea consultar:		");
		scanf("%lf",&boleta);
		
		pos=posicion(boletas,10,boleta);
		
		if(posicion!=-1)
			printf("\n\t Se encontró la boleta");
		else{
			printf("\n\t La boleta no se encontró");
		}
		
		
		printf("\n\t Desea consultar otra boleta?");
		scanf("%c",&respuesta);
		
	}while(respuesta=='s'||respuesta=='S');
	
	
	
	system("pause");
	
}
