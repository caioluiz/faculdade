#include <stdio.h>
#include <stdlib.h>

#define text "Insira sua idade, peso e nome"
int main(){
	int age = 0;
	float peso = 0.0;
	char name[50] = "";
	
	printf("%s.\n", text);
	printf("Digite sua idade: ");
	scanf("%d", &age);
	
  	printf("Digite seu peso: ");
	scanf("%f", &peso);
	
	printf("Digite seu nome: ");
	scanf("%s", &name);
	
	system("pause");
  
}
