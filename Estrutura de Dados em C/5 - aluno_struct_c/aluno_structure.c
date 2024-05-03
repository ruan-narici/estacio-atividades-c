#include <stdio.h>


void main() {
	struct aluno {
		char nome[50];
		int matricula;
		float nota;
	};

	struct aluno primeiro_aluno;

	printf("\n###Cadastro de Aluno###\n");
	printf("\nDigite o nome do aluno: ");
	scanf("%s", primeiro_aluno.nome);
	printf("\nDigite a matricula do aluno: ");
	scanf("%d", &primeiro_aluno.matricula);
	printf("\nDigite a nota da prova: ");
	scanf("%f", &primeiro_aluno.nota);


	printf("\nAluno: %s, matricula: %d, nota: %f", primeiro_aluno.nome, primeiro_aluno.matricula, primeiro_aluno.nota);
}
