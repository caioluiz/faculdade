#include <stdio.h>
#include <string.h>
#include <locale.h>

#define TAM 50

struct tipo_pessoa{
	int idade;
	float peso;
	char nome[TAM];
};

typedef struct tipo_pessoa tipo_pessoa;

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	//Criando e Inicializando
	tipo_pessoa pessoa = {0, 0.0, "Caio"};
	
	printf("Registros armazenados: \n");
	printf("idade: %i\n", pessoa.idade);
	printf("peso: %.2f\n", pessoa.peso);
	printf("nome: %s\n\n", pessoa.nome);
	
	//Atribuindo Valores
	pessoa.idade = 19;
	pessoa.peso = 70.6;
	strcpy(pessoa.nome, "Caio Luiz");
	
	printf("Nova idade: %i\n", pessoa.idade);
	printf("Novo peso: %.2f\n", pessoa.peso);
	printf("Novo nome: %s\n", pessoa.nome);
	
	//Sobrescrevendo Valores
	printf("Insira suas informações: \n");
	printf("Sua idade: ");
	scanf("%i", &pessoa.idade);
	printf("Seu peso: ");
	scanf("%.2f", &pessoa.peso);
	fflush(stdin);
	printf("Seu nome: ");
	scanf("%49[^\n]s", pessoa.nome);
}
