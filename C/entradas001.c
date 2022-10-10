#include <stdio.h>
#include <locale.h>
#include <string.h>

#define N 20

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char origem[N] = "Ol�, Mundo!";
	char destino[N];
	char s1[N] = "L�gica de ";
	char s2[N] = "Programa��o.";
	char c[N];
	char hardText[N]= {"/exit"};
	char senhaUsr[N];
	int i, ok;
	
	// STRCPY
	printf("Testes de entrada e sa�da.\n");
	puts(origem);
	puts(destino);
	
	strcpy(destino, origem); // a fun��o strcpy copia a origem e cola no destino.
	printf("\n");
	puts(origem);
	puts(destino);
	
	// STECAT
	strcat(s1, s2); // a fun��o strcat junta o s1 e s2 no vetor s1.
	puts(s1);
	
	// STRLEN
	printf("\nDigite um texto: ");
	gets(c);
	i = strlen(c);
	
	printf("Tamanho do texto: %i", i);
	printf("\nPosi��o a Posi��o: \n");
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
