#include <stdio.h>

void main() {

    float salario;
    int contador = 0;

    do{
        printf("Digite o salario bruto do funcionario: ");
        scanf("%f", &salario);
        if (salario <= 999) {
            salario = salario - salario * 0.10;
            printf("O salario liquido do funcionario e R$%.2f\n", salario);
        } else if (salario >= 999.01 && salario <= 1999) {
            salario = salario - salario * 0.15;
            printf("O salario liquido do funcionario e R$%.2f\n", salario);
        } else if (salario >= 1999.01 && salario <= 9999.01) {
            salario = salario - salario * 0.20;
            printf("O salario liquido do funcionario e R$%.2f\n", salario);
        } else if (salario >= 9999.01 && salario <= 99999) {
            salario = salario - salario * 0.25;
            printf("O salario liquido do funcionario e R$%.2f\n", salario);
        } else {
            salario = salario - salario * 0.30;
            printf("O salario liquido do funcionario e R$%.2f\n", salario);
        }
        contador ++;
    } while(contador < 15);
}
