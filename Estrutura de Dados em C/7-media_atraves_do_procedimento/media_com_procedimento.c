#include <stdio.h>

void media() {
	float nota1, nota2, nota3, media = 0;
	printf("\nDigite a nota 1: ");
	scanf("%f", &nota1);
	printf("\nDigite a nota2: ");
	scanf("%f", &nota2);
	printf("\nDigite a nota3: ");
	scanf("%f", &nota3);
	media = (nota1 + nota2 + nota3) / 3;
	printf("\n### A media do aluno foi: %f ###", media);
}

void main() {
	media();
}
