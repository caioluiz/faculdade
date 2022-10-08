#include <stdio.h>
#define mensagem "Entre com dois valores."

int main(void){
	int A, B, soma, sub, div, multi;
	
	printf("%s\n", mensagem);
	
	printf("Valor 1: ");
	scanf("%d", &A);
	printf("Valor 2: ");
	scanf("%d", &B);
	
	soma = A + B;
	sub = A - B;
	div = A / B;
	multi = A * B;
	
	printf("%d\n", soma);
	printf("%d\n", sub);
	printf("%d\n", div);
	printf("%d\n", multi);
	return 0;
}



