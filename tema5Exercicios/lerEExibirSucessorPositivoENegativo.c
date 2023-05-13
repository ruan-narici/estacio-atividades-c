#include <stdio.h>

void main() {

    int numero;

    do {
        printf("Digite um numero: ");
        scanf("%d", &numero);

        if (numero != 0 && numero != 9) {
            if (numero % 2 == 0) {
                printf("O numero %d e positivo e seu sucessor e %d\n", numero, numero + 1);
            } else {
                printf("O numero %d e negativo e seu antecessor e %d\n", numero, numero - 1);
            }
        }

    } while (numero != 0 && numero != 9);
}
