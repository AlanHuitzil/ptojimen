
/*
Escriba un programa que dado un número entero, el programa le responda al usuario si es un número primo
o no.
Una función determinará si el número es primo, o no. Y el proceso se repetirá mientras el usuario lo
decida.

Lo va a imprimir la función principal


Definición: Un número es primo cuando es divisible sólo entre si mismo y entre 1.
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
	
	
	printf("\n\t Programa que indica si un número es primo, o no");
	printf("\n\n\t Ingrese su número	");
	scanf("\t%d",&numero);
	
	if(primo(numero)==0)
	printf("\n\t El número no es primo");
	
	else{
	printf("\n\t El número es primo");
	
		}
		
 	printf("\n\n\n\t Quieres hacerlo otra vez? si=s | no=cualquier cosa");
 	scanf("\t%c",&respuesta);
 	system("cls");	

	}while(respuesta=='s');
	

}
