/*

	Inicializaci�n de arreglos de una dimensi�n
	
	Arreglos num�ricos:
	
		float arreglo[]={1.5,3.6,9.7,12}; El compilador le pone el n�mero de elementos de que constara el arreglo
	
	Arreglos alfanum�ricos o cadenas:
	
		char nombre []= "ESIME";
	
	Otra manera de representar las cadenas es la siguiente:
	
		char[]={'E','S','I','M','E','\0'};	
	

*/
	
/*

	Paso de parametros de tipo arreglo de una funci�n
	Se tienen dos formas de pasar arreglos a una funci�n
		1) Siguiendo la sintaxis
			tipo nombre_de_la_funci�n(tipo arreglo[t]);
			
		En esta forma le estamos idicando a la funci�n que el areglo es de tama�o t,
		d�nde t debe de ser una constante o una variable global definida previamente
		e inicializada
		
		2) Siguiendo la sintaxis
			tipo nombre_funci�n(tipo arreglo[], int t);
			
		En esta forma le estamos diciendo al compilador que le vamos a pasar un arreglo de
		tama�o indefinido. Mediante la variable t controlamos o determinamos el tama�o del
		arreglo 

	NOTA: los cambios que se producen dentro una funci�n se reflejan fuera de ella.
	NOTA: cuando se utiliza una funci�n que requiere en sus par�metros un arreglo 
	s�lo se utiliza el nombre del arreglo.
*/

//Escriba un programa que mediante una funci�n lea 5 n�meros enteros y mediante otra funci�n los escriba.
//Escriba la funci�n principal que las utilice.

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
	
	printf("\n\t Programa que lee y escribe 5 n�meros");
	
	lectura(vector/*,5*/);
	escritura(vector);
	
	
	printf("\n\n\n");
	system("pause");
	
	
}
