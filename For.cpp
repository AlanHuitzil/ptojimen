/*
	 Analisis de los argumtnos del For
	 ninguno es indispensable 
	 
	 Problema. Esciba un programa que muestre en pantalla los números del uno al diez
	 
*/

//Uso de todos los campos del For

/*
#include<stdio.h>
#include<stdlib.h>

int main(void){
	
	//Variables
	int contador;
	
	system("cls");
	
	printf("\n El programa muestra los números del uno al diez\n");
	
	for(contador=1;contador<=10;contador++){
		
	printf("\n%d",contador);
	printf("\n\n");
}
	system("pause");
}
*/

//Uso del for sin el campo inicio

/*
#include<stdio.h>
#include<stdlib.h>

int main(void){
	
	//Variables
	int contador;
	
	system("cls");
	
	printf("\n El programa muestra los números del uno al diez\n");
	
	for(;contador<=10;contador++){
		
	printf("\n%d",contador);
}
	system("pause");
}
*/

//Sin utilizar la condición del For
/*
#include<stdio.h>
#include<stdlib.h>

int main(void){
	
	//Variables
	int contador=1;
	
	system("cls");
	
	printf("\n El programa muestra los números del uno al diez\n");
	
	for(;;contador++){
	
	if(contador==11)
		break;
			
	printf("\n%d",contador);

}
	printf("\n\n");
	system("pause");
}
*/

#include<stdio.h>
#include<stdlib.h>

int main(void){
	
	//Variables
	int contador=1;
	
	system("cls");
	
	printf("\n El programa muestra los números del uno al diez\n");
	
	for(;;){
	
	if(contador==11)
		break;	
	printf("\n%d",contador);
	contador++;

}
	printf("\n\n");
	system("pause");
}
