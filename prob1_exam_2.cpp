
#include<stdio.h>
#include<stdlib.h>

int verifica_hora(int hora, int minutos, int segundos){
	int r;
	r=0;
	
	if(hora>=0&&hora<=23)
		if(minutos>=0&&minutos<=59)
			if(segundos>=0&&segundos<=59)
				r=1;
	return(r);
}

int main(void){
	
	int hora,minutos,segundos;
	system("cls");
	
	printf("\n\t Programa que indica si la hora es correcta");
	
	printf("\n\t Ingrese la hora");
	scanf("\t%d",&hora);
	
	printf("\n\t Ingrese los minutos");
	scanf("\t%d",&minutos);
	
	printf("\n\t Ingrese los segundos");
	scanf("\t%d",&segundos);
	
	if(verifica_hora(hora,minutos,segundos)==1){
		if(segundos==59)
			if(minutos==59)
				if(hora==23)
					printf("\n\t La hora es 00:00:00");
				else
					printf("\n\t La hora es %d:00:00",hora+1);
			else
				printf("\n\t La hora es %d:%d:00",hora,minutos+1);
		else
			printf("\n\t La hora es %d:%d:%d",hora,minutos,segundos+1);
	}else
		printf("\n\t La hora es incorrecta");

}
