#include <stdio.h>
#include <stdlib.h>

char menu(void);

int main (void){
	
	//Variables de entrada
	float num1;
	float num2;
	float r;
	char operacion;
	
	system("cls");
	
	printf("Programa con las cuatro operaciones fundamentales de la calculadora");
	
	operacion=menu();
	
	//Fase de lectura
	printf("Escriba su primer n�mero ");
	scanf("\n%f",&num1);
	
	printf("Escriba su segudo n�mero ");
	scanf("\n%f",&num2);
	
	//Fase de procedimiento
	switch(operacion){
		
		case'+':
			r=num1+num2;
			printf("\n\t El resultado de la suma es %f",r);
			break;
		case'-':
			r=num1-num2;
			printf("\n\t El resultado de la suma es %f",r);
			break;
		case'/':
			r=num1/num2;
			printf("\n\t El resultado de la divisi�n es %f",r);
			break;
		case'*':
			r=num1*num2;
			printf("\n\t El resultado de la multiplicaci�n es %f",r);
			break;
		default:
			printf("ERROR");
	}
	system("pause");
}

char menu(void){
	char opcion;
	
	printf("\n\t [+] Suma");
	printf("\n\t [-] Resta");
	printf("\n\t [/] Divisi�n");
	printf("\n\t [*] Multiplicaci�n");
	scanf("\n%c",&opcion);
	return(opcion);
}

