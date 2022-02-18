
/*
Escriba un programa que dado un n�mero entero, el programa le responda al usuario si es un n�mero primo
o no.
Una funci�n determinar� si el n�mero es primo, o no. Y el proceso se repetir� mientras el usuario lo
decida.

Lo va a imprimir la funci�n principal


Definici�n: Un n�mero es primo cuando es divisible s�lo entre si mismo y entre 1.
*/

#include<stdio.h>
#include<stdlib.h>

int primo(int numero){
	
	int contador;
	
	for(contador=2; contador<numero;contador++){	
		if(numero%contador==0){
			return(0);
		}		
	}
	return(1);
}

int main(void){
	
	//Variables de entrada
	int numero;
	
	char respuesta;
	system("cls");
	
	do{
	
	
	printf("\n\t Programa que indica si un n�mero es primo, o no");
	printf("\n\n\t Ingrese su n�mero	");
	scanf("\t%d",&numero);
	
	if(primo(numero)==0)
	printf("\n\t El n�mero no es primo");
	
	else{
	printf("\n\t El n�mero es primo");
	
		}
		
 	printf("\n\n\n\t Quieres hacerlo otra vez? si=s | no=cualquier cosa");
 	scanf("\t%c",&respuesta);
 	system("cls");	

	}while(respuesta=='s');
	

}
