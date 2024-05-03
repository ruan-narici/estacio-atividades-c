#include <stdio.h>

void main() {

    int numero;
    int maiorNumero;
    int contador = 0;
    int verificador = 1;

    while (contador < 15) {

        printf("Digite um numero positivo: ");
        scanf("%d", &numero);

        if (numero > 0) {
            if (numero > maiorNumero) {
                maiorNumero = numero;
            }
        } else {
            verificador = 0;
            break;
        }
        contador ++;
    }
    if (verificador == 1) {
        printf("O maior numero digitado foi: %d", maiorNumero);
    } else {
        printf("O numero digitado nao e positivo");
    }
}
