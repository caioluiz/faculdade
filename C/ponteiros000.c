#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	int valor, *ptr, **pptr; //Declarando os ponteiros
	
	valor = 0;
	printf("\nValor da varíavel valor: %i", valor);
	printf("\nEndereço da varíavel valor: %x\n", &valor);
	
	ptr = &valor; //ptr aponta para valor
	printf("\nValor da varíavel ptr: %x", ptr);
	printf("\nEndereço do ponteiro ptr: %x", &ptr);
	printf("\nValor apontado pelo ponteiro: %i\n", *ptr);
	
	*ptr = *ptr + 10; //Atribuindo um novo valor para variavel "valor", atraves do ponteiro
	printf("\nNovo valor apontado pelo ponteiro: %i", *ptr);
	printf("\nValor da variavel valor: %i\n", valor);
	
	pptr = &ptr; //pptr aponta para ptr
	printf("\nValor apontado pelo ponteiro de ponteiro: %i", **pptr);
	printf("\nEndereço de pptr: %x\n", pptr);
	
	**pptr = **pptr + 5; //Alterando a variavel "VALOR" atraves do ponteiro de ponteiro
	printf("\nNovo valor da variavel valor: %i", valor);
	printf("\nNovo valor apontado pelo ponteiro ptr: %i", *ptr);
	printf("\nNovo valor apontado pelo ponteiro pptr: %i\n", **pptr);
	
	printf("\nValor da variavel pptr: %x", pptr);
	printf("\nEndereço do ponteiro pptr: %x", &pptr);
	
	return 0;
}
