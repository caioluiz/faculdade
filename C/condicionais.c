#include <stdio.h>
#define mensagemNota "Insira a nota do aluno: "

int main(){
	float nota = 0;
	int s;
	
	printf("%s\n", mensagemNota);
	scanf("%f", &nota);
	
	if (nota >= 7.0){
		printf("Aluno Aprovado!\n");
	}  
	else {
		printf("Aluno Reprovado!\n");
	}
	
	printf("Digite: 1- para Aprovado, 2- para Reprovado\n");
	scanf("%d", &s);
	
	switch(s){
		case 1:
			printf("Parabens! Voce passou de ano com sucesso!");
			break;
		case 2:
			printf("Oh Oh! Voce ficou reprovado e precisa fazer a disciplina novamente :(");
			break;
		default:
			printf("Algo deu errado, tente novamente mais tarde.");
			break;
	}
}
