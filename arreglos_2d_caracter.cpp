/*
	Arreglos de dos dimensiones de tipo car�ter
	
	
	Sintaxis:
		char nombre_arreglo[r][f];
		
		d�nde r y f son constantes de tipo entero
			
	En cada una de las localidades del arreglo se almacena 
	un car�cter, esto es los elementos Aij son un caracter.
	
	Una caracter�stica que se puede realizar con este tipo
	de arreglos es de que cada uno de los renglones se puede
	manejar c�mo si fuera una cadena(un arreglo de una dimensi�n.
	
	C�mo se inicia un arreglo bidiensional de carcateres
	
	char frases[2][2] = { {"Buenos dias"},{"Buenas tardes"}};		
*/

#include<stdio.h>
#include<stdlib.h>

int main(void){

	char frases[2][100] = {{"Buenos dias"},{"Buenas tardes"}};	
	system("cls");
	
	for (int i=0;i<2;i++){
		
		printf("%s",frases[i]);
		printf("\n");
	}
	
	
	for(int i=0;i<2;i++){
		for(int j=0;frases[i][j]!='\0';j++){
			
			printf("%c",frases[i][j]);
			
		}
		printf("\n");
	}
	printf("\n\n");
	system("pause");
}	
