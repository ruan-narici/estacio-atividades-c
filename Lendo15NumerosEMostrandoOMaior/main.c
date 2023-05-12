#include <stdio.h>

void main() {

    int entradaUsuario;
    int maiorNumeroRegistrado = 1;
    int verificador = 1;

    for (int i = 0; i < 15; i++) {
        printf("Digite um numero POSITIVO: ");
        scanf("%d", &entradaUsuario);
        if (entradaUsuario > 0) {
            if (entradaUsuario > maiorNumeroRegistrado) {
                maiorNumeroRegistrado = entradaUsuario;
            }
        } else {
            printf("O numero %d nao e POSITIVO.\n", entradaUsuario);
            verificador = 0;
            break;
        }
    }
    if (verificador == 1) {
        printf("O maior numero digitado entre os 15 foi o %d.\n", maiorNumeroRegistrado);
    } else {
        printf("Programa finalizado.\n");
    }

}
