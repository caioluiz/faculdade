#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
	
	int calculadora;
	
	float variavel1, variavel2, res;
	
	printf("\tDigite 1 para Somar.\n");
	printf("\tDigite 2 para Subtrair.\n");
	printf("\tDigite 3 para Multiplicar.\n");
	printf("\tDigite 4 para Dividir.\n");
	printf("\n\n");
	
	printf("Insira a opção escolhida: ");
	scanf("%i", &calculadora);
	
	puts("Valor 1: ");
	scanf("%f", &variavel1);
	puts("Valor 2: ");
	scanf("%f", &variavel2);
	
	switch(calculadora){
		case 1: 
			res = variavel1 + variavel2;
			printf("Soma: %f.", res);
			break;
		case 2:
			res = variavel1 - variavel2;
			printf("Subtração: %f.\n", res);
			break;
		case 3:
			res = variavel1 * variavel2;
			printf("Multiplicação: %f.\n", res);
			break;
		case 4:
			if(variavel2 != 0){
				res = variavel1 / variavel2;
				printf("Divisão: %f.", res);
			} else printf("Divisão por zero");
	}
	return 0;
}
