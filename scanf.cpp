

/*La función scanf se utiliza para leer datos de la pantalla 
y posteriormente almacenarlos en una variable.
Cuyo formato es int scanf("cadena de control",& variable1,&variable2...);

Dónde int regresa un valor de tipo entero, si regresa 0, indica  que la lectura
estuvo correcta y en cualquier otro caso el número de carácteres leídos.

scanf identificador nombre de la función.
(Todas las funciones de usuario y de C llevan paréntesis)

""Cuando se abren y cierran dobles comillas estamos indicando que dentro de ellas
se escribe un texto un conjunto de caracteres

Texto, nos representa los formatos de las variables que se pretenden leer. 

Entre cada variable se pondra un &
&variable1,&variable2...
El ampersand se utiliza para almacenar el dato leido en una localidad de memoria*/

#include <stdio.h>

int main(void){

//Asignación de valores

	int a;
	long int b;
	float c;
	double d;
	char nombre[10];
	char caracter;
	
//Lectua de valores

printf("\n\tEscribe un entero corto ");
scanf("%d",&a);

printf("\n\tEscribe un entero largo ");
scanf("%ld",&b);

printf("\n\tEscribe un real corto ");
scanf("%f",&c);

printf("\n\tEscribe un real largo ");
scanf("%lf",&d);

printf("\n\tEscribe una cadena de caracteres ");
scanf("%s",nombre);

printf("\n\tEscribe un caracter ");
scanf("%c",&caracter);


//Escritura de valores
	
printf("\n\t Entero corto %d",a);
printf("\n\t Entero largo &ld",b);
printf("\n\t Real corto %f",c);
printf("\n\t Real largo %lf",d);
printf("\n\t Cadena de caracteres %s",nombre);
printf("\n\t Caracter %c",caracter);


}
 
