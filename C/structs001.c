#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define TAMA 3

struct lista_pessoa{
	int idade;
	float peso;
	char nome[50];
};

typedef struct lista_pessoa lista_pessoa;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	lista_pessoa lista[TAMA];
	int i;
	
	for(i = 0; i < TAMA; i++){
		printf("Insira os dados: (%i):\n", i+1);
		puts("Nome: ");
		scanf("%50[^\n]s", &lista[i].nome);
		fflush(stdin);
		
		puts("Idade: ");
		scanf("%i", &lista[i].idade);
		
		puts("Peso: "); 
		scanf("%f", &lista[i].peso);
		fflush(stdin);
	}
	system("cls");
}
