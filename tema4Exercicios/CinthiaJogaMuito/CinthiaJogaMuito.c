#include <stdio.h>

void main() {

    int dia;
    char mes[30];
    int ano;
    char nome[30];

    printf("Digite o seu nome: ");
    scanf("%s", &nome);
    printf("Digite o dia mes e ano em que voce vai brilhar muito separados por espaco: ");
    scanf("%d %s %d", &dia, &mes, &ano);
    printf("%s voce vai brilhar infininamente no dia %d de %s de %d.\n\n", nome, dia, mes, ano);
}
