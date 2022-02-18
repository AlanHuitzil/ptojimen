/*

	Inicialización de arreglos de una dimensión
	
	Arreglos numéricos:
	
		float arreglo[]={1.5,3.6,9.7,12}; El compilador le pone el número de elementos de que constara el arreglo
	
	Arreglos alfanuméricos o cadenas:
	
		char nombre []= "ESIME";
	
	Otra manera de representar las cadenas es la siguiente:
	
		char[]={'E','S','I','M','E','\0'};	
	

*/
	
/*

	Paso de parametros de tipo arreglo de una función
	Se tienen dos formas de pasar arreglos a una función
		1) Siguiendo la sintaxis
			tipo nombre_de_la_función(tipo arreglo[t]);
			
		En esta forma le estamos idicando a la función que el areglo es de tamaño t,
		dónde t debe de ser una constante o una variable global definida previamente
		e inicializada
		
		2) Siguiendo la sintaxis
			tipo nombre_función(tipo arreglo[], int t);
			
		En esta forma le estamos diciendo al compilador que le vamos a pasar un arreglo de
		tamaño indefinido. Mediante la variable t controlamos o determinamos el tamaño del
		arreglo 

	NOTA: los cambios que se producen dentro una función se reflejan fuera de ella.
	NOTA: cuando se utiliza una función que requiere en sus parámetros un arreglo 
	sólo se utiliza el nombre del arreglo.
*/

//Escriba un programa que mediante una función lea 5 números enteros y mediante otra función los escriba.
//Escriba la función principal que las utilice.

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void lectura(int numeros[]/*,int n*/){
	
	for(int i=0;i<5;i++){
	
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
	
	lectura(vector/*,5*/);
	escritura(vector);
	
	
	printf("\n\n\n");
	system("pause");
	
	
}
