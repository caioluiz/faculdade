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
	
	printf("Insira a op��o escolhida: ");
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
			printf("Subtra��o: %f.\n", res);
			break;
		case 3:
			res = variavel1 * variavel2;
			printf("Multiplica��o: %f.\n", res);
			break;
		case 4:
			if(variavel2 != 0){
				res = variavel1 / variavel2;
				printf("Divis�o: %f.", res);
			} else printf("Divis�o por zero");
	}
	return 0;
}
