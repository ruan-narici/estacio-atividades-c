#include <stdio.h>
#include <stdlib.h>

void main() {
	int *ptr, x;
	ptr = malloc(10*sizeof(int));
	
	for (int i = 0;  i < 10; i++) {
		ptr[i] = i + 10;
		printf("Posicao %d, valor %d\n", i, ptr[i]);
	}
	
	ptr = realloc(ptr, 20*sizeof(int));

	for (int i = 10; i < 20; i++) {
		ptr[i] = i + 10;
		printf("Posicao %d, valor %d\n", i, ptr[i]);
	}

	free(ptr);
	printf("Fim\n");
	printf("Tamanho do ponteiro %ld", sizeof(ptr));
}
