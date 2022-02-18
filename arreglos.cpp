/*
	Existen dos tipos de arreglos de una dimensi�n
	
	Num�ricos y de caracteres, estos �ltmos llamados cadenas
	
	Sintaxis:
	tipo identificador[n�mero];
	
	D�nde:
	tipo: puede ser cualquier tipo v�lido en lenguaje C
	
	identificador: es el nombre de la variable tipo arreglo. Sigue las mismas reglas 
	de la declaraci�n de una variable
	
	n�mero: siempre deberemos de poner una constante o una variable definida previamente
	e inicializada.S�lo bajo condiciones especiales, los arreglos no pueden ser definidos
	con corchetes vac�os.
	
	[]: siempre que se desea declarar una variable de tipo arreglo son necesarios los
	corchetes
	
	#Nota: Para tener acceso a los elementos de un arreglo se requiere de una variable de tipo
		   indice que siempre debe de ser de tipo entero.
	
	Ejemplos:
	
	//MAL, porque n no est� declarado
	float vector[n];
			
	//MAL, no usa corchetes
	float vector n;
	
	//No tiene nada dentro de los corchetes
	int vector[];
	
	int T; char nombre[T];
			
*/


//Escriba un programa que lea 5 n�meros de tipo reales y poteriormente, escr�balos en pantalla,
//s�lo deber�n de aparecer en pantalla los n�mero le�dos
#include<stdio.h>
#include<stdlib.h>

int main(void){
	
	float numeros[5];
	int contador;
	
	system("cls");
	
	//Fase de lectura
	
	printf("\n\t Programa que lee 5 datos y los escribe posteriormente");
	
	for(contador=0;contador<5;contador++){
	
		printf("\n\t Ingrese el elemento %d		",contador+1);
		scanf("%f",&numeros[contador]);
	}
	system("cls");
	
	printf("\n\t N�meros le�dos:	");
	for(contador=0;contador<5;contador++){
	
	printf("\n\t%.0f",numeros[contador]);
	
	}
	printf("\n\n\n");
	system("pause");
	
}
