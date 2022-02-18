
/*Memoria dinámica
	Una de las aplicaciones de uso de apuntadores es 
	la de crear arreglos del tamaño de la necesidad
	de la aplicación (Programa).
	
	Para ello se utilizan las funciones:
	
	malloc() Esta función se utiliza para apartar memoria
			 dinámica a la hora de ejecutar un programa.
			 
	free()	 Esta función libera la memoria que se apartó
			 mediante la función Malloc.

	Se utilizará también la función sizeof() para poder
	saber cuántos bytes se requieren para almacenar
	un tipo de dato determinado. 
	
	Sintaxis de sizeof:
	
		int sizeof(objeto); //Esta función regresa el número
		de bytes que se requieren para almacenar datos de la
		variable tipo objeto.
		
		sizeof(float);// Esta instrucción regresa "4" ya que
		para representar un float se requieren 4 bytes
		
	Sintaxis de malloc:
		
		void* malloc(tamaño);//Esta función aparta en la 
		memoria el número "tamaño" de bytes.
		
		La función regresa una dirección si logró apartar la 
		memoria, en caso contrario regresa NULL.
		
		El void* nos indica que la función nos regresa una
		dirección que apunta a un objeto indeterminado y 
		nosotros obligamos a que sea de un tipo determinado
		
		int *x;
		
		x= malloc(sizeof(int));//Esta instrucción aparta 2 bytes
		para almacenar un entero.
	
	Sintaxis de free:
	
		void free(ap);// Esta función libera la memoria a la
		que apunta la variable de tipo apuntador ap.
		
		free(x);
*/		


#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

void intercambio(int *a, int *b){
	
	int t;
	
	t=*a;
	
	*a=*b;
	
	*b=t;
	
}


int main(void){
	
	int *x=NULL,*y=NULL;
	
	x= (int*)malloc(sizeof(int));
	
	y= (int*)malloc(sizeof(int));

	if(x==NULL||y==NULL){
		
		printf("\n\t No se apartó memoria. Y no puedo continuar");
		system("pause");
		exit(1);	
	}

	*x=40;
	*y=20;

	printf("\n\tValores de las variables antes del intercambio\n\t");
	
	printf("\n\t X=%d Y=%d",*x,*y);
	
	intercambio(x,y);
	
	printf("\n\tValores de las variables después del intercambio\n\t");
	
	printf("\n\t X=%d Y=%d",*x,*y);
	
} 
		
	
