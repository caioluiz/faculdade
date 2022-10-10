#include <stdio.h>

int main(){
	char s[50];
	char s50[50];
	
	// scanf aprimorado.
	printf("Insira seu nome: ");
	scanf("%49[^\n]s", s); // scanf aprimorado para leitura de strings 
	fflush(stdin); // boa prática
	
	printf("%s\n", s);
	
	// gets, puts e fgets
	printf("Teste! Digite algo (gets): ");
	gets(s50);
	puts("Resultado: ");
	puts(s50);
	puts("");
	
	printf("Teste! Digite algo (fgets): ");
	fgets(s, 50, stdin); // mais recomendado
	fflush(stdin);
	
	puts("Resultado: ");
	puts(s50);
}
