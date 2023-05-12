#include <stdio.h>

void main() {

    int numero;
    printf("Digite um numero: \n");
    scanf("%d", &numero);
    for (int i = 0; i < 20; i++) {
        printf("%d: %d\n", i, numero);
    }
}
