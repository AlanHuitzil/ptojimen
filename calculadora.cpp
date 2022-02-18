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
	printf("Escriba su primer número ");
	scanf("\n%f",&num1);
	
	printf("Escriba su segudo número ");
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
			printf("\n\t El resultado de la división es %f",r);
			break;
		case'*':
			r=num1*num2;
			printf("\n\t El resultado de la multiplicación es %f",r);
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
	printf("\n\t [/] División");
	printf("\n\t [*] Multiplicación");
	scanf("\n%c",&opcion);
	return(opcion);
}

