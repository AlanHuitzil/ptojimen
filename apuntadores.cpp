
/* Escriba un programa que calcule la media de un
	conjunto de n datos
	
	Mediante una función que regrese la media como
	parámetro
*/

#include<stdio.h>
#include<stdlib.h>

void media(int datos[],int n, float *m){
	
	int suma=0;
	
	for(int i=0;i<n;i++){
		
		suma+= datos[i];
		
	}
	
	*m=(float)suma/n;
	
}

int main(void){
	
	int x[]={4,20,5,13,55,30,100,40};
	
	int *xp=x;
	
	float m;;
	
	system("cls");
	
	for(int i=0;i<8;i++){
		
		printf("\n\t%d",xp[i]);
		
	}
	
	media(x,8,&m);
	
	printf("\n\tLa media es =	%f",m);
	
	
	printf("\n\n");
	system("pause");
	
	
	
}
