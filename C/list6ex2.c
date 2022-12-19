#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <locale.h>
#include <ctype.h>

typedef struct {
	char nome[50];
	int idade;
	char curso[50];
	int coeficienteRendimento;
	int matricula;
} aluno;

typedef struct {
	aluno discente;
	int notas;
	int faltas;
} alunosmat;

typedef struct {
	int codigo;
	char nome[51];
	alunosmat turma[40];
} disciplina;

void criarDisciplina(disciplina *disc){
	int i;
	
	fflush(stdin);
	printf("Nome da disciplina: ");
	fgets(disc->nome, 51, stdin);
	fflush(stdin);
	printf("Código da turma: ");
	scanf("%d", &disc->codigo);
	for(i=0; i<40; i++){
		disc->turma[i].discente.matricula = 0;
	}
	return;
}

void incluirAluno(disciplina *disc){
	int i;
	int contador = 0;
	
	for(i=0; i<40; i++){
		if(disc->turma[i].discente.matricula = 0){
			printf("Nome do Aluno: ");
			fgets(disc->turma[i].discente.nome, 50, stdin);
			printf("Idade do Aluno: ");
			scanf("%d", &disc->turma[i].discente.idade);
			printf("Curso do aluno: ");
			fgets(disc->turma[i].discente.curso, 50, stdin);
			printf("Coeficiente do Aluno: ");
			scanf("%d", &disc->turma[i].discente.coeficienteRendimento);
			printf("Matrícula do Aluno: ");
			scanf("%d", &disc->turma[i].discente.matricula);
			break;
		} else {
			contador++;
		}
	}
	
	if(contador == 40){
		printf("Não há vagas.");
	}
	return;
}

void excluirAluno(disciplina *disc){
	int i;
	int leitorMatricula;
	int contador = 0;
	
	scanf("%d", &leitorMatricula);
	
	for(i=0; i<40; i++){
		if(leitorMatricula == disc->turma[i].discente.matricula){
			disc->turma[i].discente.matricula = 0;
		} else {
			contador++;
		}
	}	if(contador == 40){
			printf("Não Existe aluno com esta matricula na turma.");
	}
	return;
}

void listarAlunos(disciplina *disc){
	int i;
	
	for(i=0; i<40; i++){
		printf("\nNome do Aluno: %s\n", disc->turma[i].discente.nome);
		printf("Idade do Aluno: %d\n", disc->turma[i].discente.idade);
		printf("Curso do Aluno: %s\n", disc->turma[i].discente.curso[50]);
		printf("CR do Aluno: %d\n", disc->turma[i].discente.coeficienteRendimento);
		printf("Matricula do Aluno: %d\n", disc->turma[i].discente.matricula);

	}
	return;
}

void fecharDisciplina(disciplina *disc){
	int i;
	
	strcpy(disc->nome, "");
	disc->codigo = ' ';
	
	for(i=0; i<40; i++){
		disc->turma[i].discente.matricula = 0;
	}
	
	return;
}


int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int opcao;
	disciplina disc;
	scanf("%d", &opcao);
	
	switch(opcao){
		case 1: {
			printf("Criar Disciplina: \n");
			criarDisciplina(&disc);
			break;
		}
		case 2: {
			printf("Incluir Aluno: \n");
			incluirAluno(&disc);
			break;
		}
		case 3: {
			printf("Excluir Aluno: \n");
			excluirAluno(&disc);
			break;
		}
		case 4: {
			printf("Listar Alunos: \n");
			listarAlunos(&disc);
			break;
		}
		case 5: {
			printf("Fechar Disciplina: \n");
			fecharDisciplina(&disc);
			break;
		}
		case 6: {
			
			break;
		}
		case 7: {
			
			break;
		}
		case 8: {
			
			break;
		}
		default: {
			printf("Error");
			break;
		}
	}
	
	system("pause");
	return 0;

}

