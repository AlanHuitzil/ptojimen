/*
	Los arreglos de una dimensión de tipo crácter en cuanto a su uso es similar a los arreglos 
	de una dimensión de tipo numérico con las siguintes diferencias:
	Los arreglos de tipo caracter sólo pueden almacenar caracteres y para indicar el fin de la
	cadena, se escribe el caracter '\0'
	
	Nota: Es responsabilidad del programador cuidar el acceso a los elementos del arreglo no
	sobrepasen su diemnsión.
	
	char escuela={'E','S','I','M','E','\0'};
	
	Las operaciones que se realizan con las cadenas de caracteres se hacen mediante funciones
	que se encuentran en la libreria <string.h> entre otras funciones se tienen:
		
		strcpy(cadena_1, cadena_2);
		
		strcmp(cadena_1,cadena_2);
			Devuelve 0 si cadena_1==cadena_2
			Devuelve menor que 0 si cadena_1<cadena_2
			Devuelve mayor que 0 si cadena_1>cadena_2
			NOTA: la compraración es lexicográfica 
			
	strlen(cadena);
	Devuele el número de caracteres de la cadena(longitud de la cadena)
	
	strcat(cadena_1,cadena_2);
	Añade la cadena_2 al final de la cadena_1
	
	strstr(cadena_2,cadena_2);
	Busca la cadena_2 dentro de cadena _!
	
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void){
	
	char cadena_1[10];
	char cadena_2[10];
	
	system("cls");
	
	printf("\n\t Ingrese la cadena 1		");
	scanf("%s",cadena_1);

	printf("\n\t Ingrese la cadena 2		");
	scanf("%s",cadena_2);
	
	if(strcmp(cadena_1,cadena_2)==0){
	printf("\n\t Las cadenas son iguales");
	}	
	if(strcmp(cadena_1,cadena_2)<0){
		
		printf("\n\t Cadena 1 es menor que cadena 2");
	}
	else{
		
		printf("\n\t Cdena 1 es mayor que cadena 2");
	}
	
//	strcat(cadena_1," ");
//	strcat(cadena_1,cadena_2);
	printf("\n\t%s",cadena_1);
	
	printf("\n\t El numero de caracteres de la cadena es:  %d",strlen(cadena_1));
	
	if(strstr(cadena_1,cadena_2)==NULL){
		printf("\n\t La cadena 2 no se encuentra en la cadena 1");
	}
	else
	printf("\n\t La cadena 2 se encuentra en la cadena 1");
	
	
	
}
