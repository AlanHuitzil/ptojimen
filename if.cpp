
/*Estrutura anidada de ifs
	si(condición1)
		si(condición2)
			instruccion1


*/

//Escriba un programa que pida un número del 1 al 5 y diga si es primo o no

#include <stdio.h>

int main(void){
	
	printf("\n\tPrograma para saber si un n%cmero del 1 al 5 es primo o no",163);
	
	//Variables de entrada
	float numero;
	
	//Fase de lectura
	printf("\n\tEscriba un n%cmero del 1 al 5 ",163);
	scanf("\t%f",&numero);
	
	//Fase de procedimiento
	
	if((numero>=1)&&(numero<=5)){
		
		if((numero!=1)||(numero!=4)){
			
			printf("\n\t El número se encuentra ebtre el 1 y el 5, pero no es primo");
			return (0);
		}
		
		if((numero==1)||(numero==4)){
			
			printf("\n\t El número se encuentra ebtre el 1 y el 5, y síes primo");
			return(0);)
		}
	
	}
	
	else{
		
		printf("\n\t El número no se encuentra entre el 1 y el 5");
	}
	
	
}
