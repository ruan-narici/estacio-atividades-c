#include <stdio.h>

void main() {
	int numero_de_pessoas = 0;
	printf("Informe o numero de pessoas: \n");
	scanf("%d", &numero_de_pessoas);
	double vetor_de_altura[numero_de_pessoas];

	for (int i = 0; i < numero_de_pessoas; i++) {
		printf("Informe a altura da pessoa %d: \n", i);
		scanf("%lf", &vetor_de_altura[i]);
	}

	double menor_altura = 0;
	double maior_altura = 0;

	for (int i = 0; i < numero_de_pessoas; i++) {
		if (vetor_de_altura[i] > maior_altura) {
			maior_altura = vetor_de_altura[i];
		}
		if (vetor_de_altura[i] < menor_altura) {
			menor_altura = vetor_de_altura[i];
		} else if (menor_altura == 0) {
			menor_altura = vetor_de_altura[i];
		}
	}

	printf("A menor altura e: %lf \n", menor_altura);
	printf("A maior altura e: %lf \n", maior_altura);
}
