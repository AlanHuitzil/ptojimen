/*
 Escriba un programa que dada una calificación, responda "Excelente" si es mayor o igual a 9,
 "Bien" si es igual a 8, "Ahí la lleva si es mayor o igual" a 6 y deficiente si es menor que 6.
 
 El proceso se repetirá hasta que el usuario lo decida
 
 */
 
 #include<stdio.h>
 #include<stdlib.h>
 
 int main(void){
 	
 	//Variables de entrada
 	float calificacion;
 	
 	char respuesta;
 	
 	system("cls");
 	
 	do{
 		
 		printf("\n\t Programa que da una frase con respecto al rednimiento de un alumno");
 		
 		printf("Ingrese su calificación	");
 		scanf("\t%f",&calificacion);
 		
 	if(calificacion>=0&&calificacion<=10){
	 
	 	if(calificacion>=9&&calificacion<=10)
 			printf("\n\t Excelente chavo");
 		if(calificacion>=8&&calificacion<9)
 			printf("\n\t Bien chavo");
 		if(calificacion>=6&&calificacion<8)
 			printf("\n\tAhí la llevas chavo");
 		if(calificacion>=0&&calificacion<6)
 			printf("\n\t Muy mal chavo");
 		}
		 else
 		printf("\n\t Ingrese una calificaión válida chavo");

 		
 		printf("\n\t Quieres hacerlo otra vez? si/n=no");
 		scanf("\t%c",&respuesta);
 		system("cls");
 		
	 }while(respuesta!='n');
 	
 	
 	
 	printf("\n\n");
 	system("pause");
 	
 }
