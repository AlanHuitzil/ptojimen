
/* Una de las aplicaciones de los apuntadores es que 
	las modificaciones a las variables dadas como
	argumento se reflejen fuera de ella.
	
	Los parámetros que hemos utilizado hasta ahora
	se les llama, paso por valor, como esto es que
	se pasa una copia a la función y por lo mismo
	los cambios que se den dentro de ella no se 
	reflejen afuera.
*/

#include<stdio.h>
#include<stdlib.h>

void intercambio_chafa(int a, int b){
	
	int t;
	
	t=a;
	
	a=b;
	
	b=t;
	
}

void intercambio(int *a, int *b){
	
	int t;
	
	t=*a;
	
	*a=*b;
	
	*b=t;
	
}


int main(void){
	
	int x=20,y=-3;

	printf("\n\tValores de las variables antes del intercambio\n\t");
	
	printf("\n\t X= %d Y=%d",x,y);
	
	intercambio_chafa(x,y);
	
	printf("\n\tValores de las variables después del intercambio\n\t");
	
	printf("\n\t X= %d Y=%d",x,y);
	
	intercambio(&x,&y);
	
	printf("\n\tValores de las variables después del intercambio\n\t");
	
	printf("\n\t X= %d Y=%d",x,y);
	
} 



