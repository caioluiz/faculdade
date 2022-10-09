#include <stdio.h>
#define mensagemNota "Insira a nota do aluno: "

int main(){
	float nota = 0;
	int s;
	int i;
	int j;
	
	// estrutura if e else
	printf("%s\n", mensagemNota);
	scanf("%f", &nota);
	
	if (nota >= 7.0){
		printf("Aluno Aprovado!\n");
	}  
	else {
		printf("Aluno Reprovado!\n");
	}
	
	// estrutura switch-case
	printf("Digite: 1- para Aprovado, 2- para Reprovado\n");
	scanf("%d", &s);
	
	switch(s){
		case 1:
			printf("Parabens! Voce passou de ano com sucesso!\n");
			break;
		case 2:
			printf("Oh Oh! Voce ficou reprovado e precisa fazer a disciplina novamente :(\n");
			break;
		default:
			printf("Algo deu errado, tente novamente mais tarde.\n");
			break;
	}
	
	//estrutura while
	printf("Informe um numero inteiro menor que 10: ");
	scanf("%i", &i);
	
	while(i<=10){
		printf("%i\n", i);
		i++;
	}
	
	//estrutura for
	for(j = 1; j <= 10; j++){
		printf("Valor da variavel: %i\n", j);
		
		if(j == 5){
			break; // aborta a missão, usar para testes. o "continue" ele pula a interação seguinte
		}
	}
}
