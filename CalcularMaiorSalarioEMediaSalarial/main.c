#include <stdio.h>

void main() {

    int repeticao = 10;
    float entradaUsuario;
    float maiorSalario = 1;
    float somaSalario;
    float mediaSalario;
    int verificador = 1;

    for (int i = 1; i <= repeticao; i++) {
        printf("Digite o salario numero %d: ", i);
        scanf("%f", &entradaUsuario);
        if (entradaUsuario > 0) {
            somaSalario += entradaUsuario;
            if (entradaUsuario > maiorSalario) {
                maiorSalario = entradaUsuario;
            }
        } else {
            printf("\nNao e permitido a entrada de numeros negativos.\n");
            verificador = 0;
            break;
        }
    }
    if (verificador == 1) {
        mediaSalario = somaSalario/repeticao;
        printf("O maior salario digitado foi o de valor R$%.2f.\n", maiorSalario);
        printf("A media dos salarios informados e de R$%.2f\n", mediaSalario);
    } else {
        printf("Programa sendo finalizado.\n");
    }


}
