/*
Faça um algoritmo que leia 50 números inteiros e armazene-os em um vetor.
Copie para um segundo vetor de 50 números inteiros cada elemento do primeiro, observando as seguintes regras:

Se o número for par, preencha a mesma posição do segundo vetor com o número sucessor do contido na mesma posição do primeiro vetor;
Se o número for ímpar, preencha a mesma posição do segundo vetor com o número antecessor do contido na mesma posição do primeiro vetor.
Ao final, mostre o conteúdo dos dois vetores simultaneamente.

Estrutura de dados: Dois vetores de 50 posições de números inteiros.
*/

#include <stdio.h>

void main(){

    int qtd = 5;
    int primeiroVetor[qtd];
    int segundoVetor[qtd];

    for (int i = 0; i < qtd; i++) {

        printf("Digite um numero: " );
        scanf(" %d", &primeiroVetor[i]);

        if (primeiroVetor[i] %2 == 0) {
            segundoVetor[i] = primeiroVetor[i] + 1;
        } else if (primeiroVetor[i] %2 == 1){
            segundoVetor[i] = primeiroVetor[i] - 1;
        } else {
            segundoVetor[i] = primeiroVetor[i];
        }
    }
    printf("\n#-> DADOS");
    for (int i = 0; i < qtd; i++) {
        printf("\nprimeiroVetor[%d] = %d", i, primeiroVetor[i]);
        printf("\nsegundoVetor[%d] = %d", i, segundoVetor[i]);
    }
}
