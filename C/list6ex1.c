#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <locale.h>
#include <ctype.h>

typedef struct {
	int day;
	int mounth;
	int year;
} date;

void inicializate(date *dt, int day, int mounth, int year){
	dt->day = day;
	dt->mounth = mounth;
	dt->year = year;

	return;
}

int validate(date dt){
	int verificador;
	if(dt.day > 31 || dt.day < 1 || dt.mounth > 12 || dt.mounth < 1 || dt.year < 1){ // Verifica dia e mês válidos
		verificador = 1;
	}
	else if(dt.day == 29 && dt.mounth == 2 && dt.year % 4 == 0){ // Verifica ano bissexto
		verificador = 0;
	}
	else if(dt.day >= 29 && dt.mounth == 2){
		verificador = 1;
	}
	else if(dt.day > 30 && (dt.mounth == 4 || dt.mounth == 6 || dt.mounth == 9 || dt.mounth == 11)){
		verificador = 1;
	}
	else {
		verificador = 0;
	}
	return verificador;
}

void print(date dt){
		printf("Data: %d/%d/%d \n", dt.day, dt.mounth , dt.year);
	return;
}


int main(){
	setlocale(LC_ALL, "Portuguese");
	
	// Criando uma data
	int verificador;
	
	date dt;
	int day = 31;
	int mounth = 12;
	int year = 2022;
	
	inicializate(&dt, day, mounth, year);
	
	verificador = validate(dt);
	if(verificador == 1){
		printf("Data Inválida\n");
	} else {
		print(dt);
	  }
	
	
	system("pause");
	return 0;

}

