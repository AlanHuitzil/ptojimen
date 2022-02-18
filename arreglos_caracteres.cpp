// Escriba un programa que lea los nombres de los alumnos y posteriormente 
// los escriba.

#include<stdio.h>
#include<stdlib.h>

int main(void){
	
	char nombres[30][40];
	int i,j;
	int n;
	
	system("cls");
	printf("\n\t Programa que lee nombres de alumnos y los escribe");
	
	printf("\n\t Ingese el numero de alumnos. Max 30:	");
	scanf("%d",&n);
	
	system("cls");

	for(i=0;i<n;i++){
		
		printf("\n\t Ingrese el nombre del alumno %d	", i+1);
		fflush(stdin);
		gets(nombres[i]);	
	}
	
	system("cls");
	
	for(i=0;i<2;i++){
		
		printf("%2d. %40s",i+1,nombres[i]);
		printf("\n");
		
	}
	
	printf("\n\n");
	system("pause");
	
}
