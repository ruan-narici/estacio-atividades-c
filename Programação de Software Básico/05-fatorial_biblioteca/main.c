#include "biblioteca_fatorial.h"
#include <stdio.h>

void main() {
	int input_num;

	printf("Digite o numero para calcular o fatorial: ");
	scanf("%d", &input_num);

	float fatorial = fact(input_num);

	printf("O fatorial de %d eh: %f.\n", input_num, fatorial);
}
