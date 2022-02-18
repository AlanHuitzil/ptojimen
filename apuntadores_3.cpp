#include<stdio.h>
#include<stdlib.h>

void intercambio(int *a, int *b){
	
	int t;
	
	t=*a;
	
	*a=*b;
	
	*b=t;
	
}


int main(void){
	
	int a=20,b=-3;
	
	int *x,*y;
	
	x=&a;
	y=&b;

	printf("\n\tValores de las variables antes del intercambio\n\t");
	
	printf("\n\t X=%d Y=%d",*x,*y);
	
	intercambio(x,y);
	
	printf("\n\tValores de las variables después del intercambio\n\t");
	
	printf("\n\t X=%d Y=%d",*x,*y);
	
} 

