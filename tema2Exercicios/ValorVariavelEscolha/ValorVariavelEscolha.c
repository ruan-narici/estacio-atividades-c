#include <stdio.h>
int main(){

char escolha;
escolha = 'D';
escolha = escolha - 2;

printf("A variavel escolha possui o valor: %c ", escolha);
//B

return 0;
}

/*
O valor da variável é ‘B’. Por se tratar de um caractere, ao realizar a operação aritmética
para diminuir duas unidades da variável escolha, ficará aquele que estiver duas posições antes
na tabela ASCII (nesse caso, no alfabeto). Vale lembrar que a linguagem C é case sensitive, ou seja,
diferencia letras maiúsculas de minúsculas.
*/
