#include <stdio.h>

void main() {

    int numero;

    do {
        printf("Digite um numero: ");
        scanf("%d", &numero);
        if (numero != 0) {
            printf("O numero digitado foi: %d\n", numero);
        }
    } while(numero != 0);


}
