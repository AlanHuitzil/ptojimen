/*
	Existen dos tipos de arreglos de una dimensión
	
	Numéricos y de caracteres, estos últmos llamados cadenas
	
	Sintaxis:
	tipo identificador[número];
	
	Dónde:
	tipo: puede ser cualquier tipo válido en lenguaje C
	
	identificador: es el nombre de la variable tipo arreglo. Sigue las mismas reglas 
	de la declaración de una variable
	
	número: siempre deberemos de poner una constante o una variable definida previamente
	e inicializada.Sólo bajo condiciones especiales, los arreglos no pueden ser definidos
	con corchetes vacíos.
	
	[]: siempre que se desea declarar una variable de tipo arreglo son necesarios los
	corchetes
	
	#Nota: Para tener acceso a los elementos de un arreglo se requiere de una variable de tipo
		   indice que siempre debe de ser de tipo entero.
	
	Ejemplos:
	
	//MAL, porque n no está declarado
	float vector[n];
			
	//MAL, no usa corchetes
	float vector n;
	
	//No tiene nada dentro de los corchetes
	int vector[];
	
	int T; char nombre[T];
			
*/


//Escriba un programa que lea 5 números de tipo reales y poteriormente, escríbalos en pantalla,
//sólo deberán de aparecer en pantalla los número leídos
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
	
	printf("\n\t Números leídos:	");
	for(contador=0;contador<5;contador++){
	
	printf("\n\t%.0f",numeros[contador]);
	
	}
	printf("\n\n\n");
	system("pause");
	
}
