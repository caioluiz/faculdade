#include <stdio.h>
#include <locale.h>
#include <string.h>

#define N 20

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char origem[N] = "Olá, Mundo!";
	char destino[N];
	char s1[N] = "Lógica de ";
	char s2[N] = "Programação.";
	char c[N];
	char hardText[N]= {"/exit"};
	char senhaUsr[N];
	int i, ok;
	
	// STRCPY
	printf("Testes de entrada e saída.\n");
	puts(origem);
	puts(destino);
	
	strcpy(destino, origem); // a função strcpy copia a origem e cola no destino.
	printf("\n");
	puts(origem);
	puts(destino);
	
	// STECAT
	strcat(s1, s2); // a função strcat junta o s1 e s2 no vetor s1.
	puts(s1);
	
	// STRLEN
	printf("\nDigite um texto: ");
	gets(c);
	i = strlen(c);
	
	printf("Tamanho do texto: %i", i);
	printf("\nPosição a Posição: \n");
	puts(c);
	
	// STRCMP
	printf("Senha: ");
	gets(senhaUsr);
	
	ok = strcmp(hardText, senhaUsr);
	
	if(ok == 0){
		printf("Bem vindo!");
	} else {
		printf("Senha Incorreta!");
	}
	
}
