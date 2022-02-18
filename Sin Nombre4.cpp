/*
	Escriba un programa que lea las calificaciones de n alumnos y posteriormente se puedan
	consultar mientras el usuario lo decida.
	
	La identificación del alumno será mediante el número de lista
	
*/

#include<stdio.h>
#include<stdlib.h>

int main(void){
	
	int numero, contador=0,numero_lista;
	int calificaciones[100];
	char respuesta;
	
	system("cls");
	printf("\n\t Programa que lee calificaciones y permite consultarlas");
	
	printf("\n\t Cuántas calificaciones va a ingresar?		");
	scanf("%d",&numero);
	
	for(contador=0;contador<numero;contador++){
		
		printf("\n\tIngrese calificacion %d ",contador+1);
		scanf("%d",&calificaciones[contador]);
		
	}
	do{
	
	printf("\n\tQué calificación desea conocer?");
	scanf("%d",&numero_lista);
	
	printf("\n\t La calificación del alumno %d es: %d",numero_lista,calificaciones[numero_lista-1]);
	
	printf("\n\t Quiere saber otra? la reconcha de la lora 		");
	scanf("%c",&respuesta);
	}while(respuesta=='s');
}
