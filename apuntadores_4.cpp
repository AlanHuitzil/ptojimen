
/*Memoria din�mica
	Una de las aplicaciones de uso de apuntadores es 
	la de crear arreglos del tama�o de la necesidad
	de la aplicaci�n (Programa).
	
	Para ello se utilizan las funciones:
	
	malloc() Esta funci�n se utiliza para apartar memoria
			 din�mica a la hora de ejecutar un programa.
			 
	free()	 Esta funci�n libera la memoria que se apart�
			 mediante la funci�n Malloc.

	Se utilizar� tambi�n la funci�n sizeof() para poder
	saber cu�ntos bytes se requieren para almacenar
	un tipo de dato determinado. 
	
	Sintaxis de sizeof:
	
		int sizeof(objeto); //Esta funci�n regresa el n�mero
		de bytes que se requieren para almacenar datos de la
		variable tipo objeto.
		
		sizeof(float);// Esta instrucci�n regresa "4" ya que
		para representar un float se requieren 4 bytes
		
	Sintaxis de malloc:
		
		void* malloc(tama�o);//Esta funci�n aparta en la 
		memoria el n�mero "tama�o" de bytes.
		
		La funci�n regresa una direcci�n si logr� apartar la 
		memoria, en caso contrario regresa NULL.
		
		El void* nos indica que la funci�n nos regresa una
		direcci�n que apunta a un objeto indeterminado y 
		nosotros obligamos a que sea de un tipo determinado
		
		int *x;
		
		x= malloc(sizeof(int));//Esta instrucci�n aparta 2 bytes
		para almacenar un entero.
	
	Sintaxis de free:
	
		void free(ap);// Esta funci�n libera la memoria a la
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
		
		printf("\n\t No se apart� memoria. Y no puedo continuar");
		system("pause");
		exit(1);	
	}

	*x=40;
	*y=20;

	printf("\n\tValores de las variables antes del intercambio\n\t");
	
	printf("\n\t X=%d Y=%d",*x,*y);
	
	intercambio(x,y);
	
	printf("\n\tValores de las variables despu�s del intercambio\n\t");
	
	printf("\n\t X=%d Y=%d",*x,*y);
	
} 
		
	
