/*
	Escriba un programa que lea una fecha y que le diga al usuario si está bien, o mal, la fecha.
	El prgorama le permitirá al usuario repetir el proceso
	El programa mostrará si es correcta la fecha del dia siguiente.
	
	año bisiesto cuando:
	- año es divisible entre 4, y que sea divisible entre 100 y 400
	
	12 meses
	
	dias del mes:
	-31 dias: Enero, Marzo, Mayo, Julio, Agosto, Octubre, Diciembre
	-30: Abril, Junio, Septiembre, Noviembre.
	-28 o 29: Febrero
*/

	#include<stdio.h>
	#include<stdlib.h>

int bisiesto(int anio){
	
	if ((anio%4==0)&&(anio%100!=0)||(anio%400==0))
		return(1);//El año es bisiesto 
	return(0);//El año no es bisiesto
	
	
}

int diasDelMes(int mes, int anio){
	
	switch(mes){
	case 1:	
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		return(31);
	case 4:
	case 6:
	case 9:
	case 11:
		return(30);
	
	case 2:
		if(bisiesto(anio)==1)
			return(29);
		else
			return(28);
	
	default:
		return(0);
		
	}	
}


int main(void){
	

	int dia,mes,anio;
	system("cls");
	
	printf("\n\t Programa que indica si una fecha es correcta o no\n");
	
	printf("\n\t Ingrese el año\n	");
	scanf("\t%d",&anio);
	
	printf("\n\t Ingrese el mes\n	");
	scanf("\t%d",&mes);
	
	printf("\n\t Ingrese el día\n	");
	scanf("\t%d",&dia);
	
	
	if((mes>12||mes<1)||(dia<1||dia>diasDelMes(mes,anio))||(anio<1000||anio>9999))
		printf("\n\t La fecha está mal");
	else{
		printf("\n\tLa fecha está bien");
		
	dia++;
	
	if(dia>diasDelMes(mes,anio)){
	
		mes++;
		dia=1;
	}
		if(mes>12){
			mes=1;
			anio++;			
}
}
	printf("\n\t La fecha del día siguiente es: %2d/%2d/%4d",dia,mes,anio);
		
			
	printf("\n\n");
	system("pause");

}



