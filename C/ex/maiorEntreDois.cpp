#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(int argc, char *argv[]){
	
	setlocale(LC_ALL, "Portuguese");
	
	int primeiroValor, segundoValor;
	
	printf("Entre com dois Valores: \n");
	puts("Valor 1: ");
	scanf("%i", &primeiroValor);
	puts("Valor 2: ");
	scanf("%i", &segundoValor);
	
	if(primeiroValor > segundoValor){
		printf("O maior é %i", primeiroValor);
	} else {
		if(primeiroValor < segundoValor){
			printf("O maior é %i", segundoValor);
		}else{
			printf("Os dois valores são iguais.");
		}
	}
	
	return 0;
}
