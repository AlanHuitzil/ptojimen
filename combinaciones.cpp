/*Problema:escriba un programa que calcule la expresión 
	c=n!/(n-r)!r!
	Donde n es mayor que r
*/

#include<stdio.h>
#include<stdlib.h>

double factorial(int numero);

int main(void){
	
	//Variables de entrada
	int n,r;
	
	//Variables de salida
	double c;
	
	system("cls");
	
	printf("\n El programa saca el número de combinaciones posibles sin repetición");
	
	//Fase de lectura
	printf("\n Escriba su n \n");
	scanf("\n%d",&n);
	
	printf("\n Escriba su r \n");
	scanf("\n%d",&r);
	
	//Fase de proceso
	c=(factorial(n)/factorial(n-r)*factorial(r));
	
	//Fase de salida
	printf("\n El total de combinaciones posibles es: %f\n",c);
	
	system("pause");	
	
}

double factorial(int numero){
	
	int contador=1;
	
	double resultado;
	
	if (numero==0||numero==1){
		
		resultado=1;
	}else{
	do{
		
		resultado=resultado*contador;
		contador++;
		
	}while(contador<=numero);
		
		
	}
	return(resultado);
}
