#include <stdio.h>

void main(void) {
	int x = 10;
	int *ponteiro;

	ponteiro = &x;
	printf("O valor do ponteiro e:\n");
	printf("%d", *ponteiro);
}

