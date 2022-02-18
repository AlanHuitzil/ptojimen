//Escriba un programa que reciba un número entero y que diga i es par

#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	//Variables de entrada
	int numero;
	system("cls");

	printf("\n\tEste programa para saber si un n%cmero es par o impar",163);
	
	//Fase de lectura
	printf("\n\tEscriba su n%cmero ",163);
	scanf("\t%d",&numero);
	
	//Fase de proceso
	if((numero %2)== 0){
		
		printf("\n\t El n%cmero %d es par",163,numero);
	}

	if((numero %2)!= 0){
		
		printf("\n\t El n%cmero %d es impar",163,numero);
	}

	/*else{
	printf("\n\t El n%cmero %d es impar",163,numero);
	}
	
	printf("\n\t Termin%c",130);
	*/
}
