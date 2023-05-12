#include <stdio.h>

int main (void)
{
	float nota;
	printf ("Digite a nota: ");
	scanf("%f", &nota);
	printf("%.1f\n",nota);
	if (nota >= 5)
		printf("Parabens voce foi aprovado\n");
	if (nota < 5)
		printf("Nao deu desta vez, mas nao desista!");
	return 0;
}
