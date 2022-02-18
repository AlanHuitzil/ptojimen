

//	Escriba un programa que calcule el fatcorial de un n�mero y le regrese a la funci�n que la utiliza el resultado
//  Escriba una funci�n que la utilice 
//	Factorial n!=1 si n=0 o n=1
//	n!=1*2*3...*n; si n es mayor que uno


#include <stdio.h>
#include <stdlib.h>

double factorial(int n);

int main(void){
	
	//Variables de entrada
	int entero;
	
	//variables de salida
	double resultado;
	
	printf("\nPrograma conocer el valor factorial de un n�mero \n");
	
	//Fase de lectura
	printf("\nIngrese su n�mero\n");
	scanf("\n%d",&entero);
	
	//fase de proceso
	resultado=factorial(entero);
	
	//Fase de salida
	printf("\n El factorial de %d es %lf\n",entero,resultado);
	
	system("pause");
	
		
}

double factorial(int n){
	
	//Variables temporales
	int contador=1;
	
	//Variables de salida
	double fact=1;
	
	//Fase de proceso
	if(n==0||n==1){
		return fact;
	}
	
	do {
		
		fact=fact*contador;
		contador++;
		
	}while(contador<=n);
	return(fact);
}
