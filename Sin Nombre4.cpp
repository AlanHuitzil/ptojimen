/*
	Escriba un programa que lea las calificaciones de n alumnos y posteriormente se puedan
	consultar mientras el usuario lo decida.
	
	La identificaci�n del alumno ser� mediante el n�mero de lista
	
*/

#include<stdio.h>
#include<stdlib.h>

int main(void){
	
	int numero, contador=0,numero_lista;
	int calificaciones[100];
	char respuesta;
	
	system("cls");
	printf("\n\t Programa que lee calificaciones y permite consultarlas");
	
	printf("\n\t Cu�ntas calificaciones va a ingresar?		");
	scanf("%d",&numero);
	
	for(contador=0;contador<numero;contador++){
		
		printf("\n\tIngrese calificacion %d ",contador+1);
		scanf("%d",&calificaciones[contador]);
		
	}
	do{
	
	printf("\n\tQu� calificaci�n desea conocer?");
	scanf("%d",&numero_lista);
	
	printf("\n\t La calificaci�n del alumno %d es: %d",numero_lista,calificaciones[numero_lista-1]);
	
	printf("\n\t Quiere saber otra? la reconcha de la lora 		");
	scanf("%c",&respuesta);
	}while(respuesta=='s');
}
