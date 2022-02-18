/*
	Escriba una función que muestre la tabla que relaciona los grados ceintigrados con los grados Farenheit.
	Los limites de la tabla serán proporcionados por el usuario, que representarán los grados Farenheit.
	Escriba una función principal que la utilice. El usuario determinará si desea o no, una nueva tabla.
	
	Los grados F=(9*C)/5+32
	C=(F-32)*5/9
*/

#include<stdlib.h>
#include<stdio.h>

void grados(int GI, int GF){
	
	//Variables de salida
	int farenheit;
	float centigrados;
	
	//Fase de proceso y salida
	printf("\n\tFarenheit | Celsius\n");
	for(farenheit=GI;farenheit<=GF,farenheit++;)
	{
	
	centigrados=(farenheit-32)*5/9;
	printf("\n\t    %d |    %f",farenheit, centigrados);
	
	}
}

int main(void){
	
	//Variables de entrada
	int t1,t2;
	char r;
	do{
	
	system("cls");
	
	printf("\n\tPrograma que hace una conersión de Farenheir a Celsius en un intervallo determiando ");
	
	//Fase de lectura 
	
	
	
	
	printf("\n\tIngrese la primer temperatura, en Farenheit	");
	scanf("%d",&t1);
	
	printf("\n\tIngrese la segunda temperatura, en Farenheit	");
	scanf("%d",&t2);

	//Fase de proceso
	grados(t1,t2);

	printf("\n\t LO QUIERES SENTIR OTRA VEZ???	s=sí");
	scanf("%c",&r);

	}while(r=='s');

	printf("\n\nFIN DEL PROGRAMA");

	printf("\n\n\n");
	system("pause");
	
}
