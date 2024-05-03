#include <stdio.h>

void main() {

    int mat[3][4],contpar=0,contimpar=0;
    printf ("\nDigite valor para os elementos da matriz\n\n");
    for (int lin=0; lin<3; lin++ )
       for (int col=0; col<4; col++ )
       {
           printf ("\nElemento[%d][%d] = ", lin, col);
           scanf ("%d", &mat[lin][col]);
       }
    printf("\n\n********* Saida de Dados ********* \n\n");
    for (int lin=0; lin<3; lin++ )
       for (int col=0; col<4; col++ )
       {
           if (mat[lin][col] % 2==0)
               contpar++;
           else
               contimpar++;
       }
    printf ("\nPares: %d ",contpar);
    printf ("\nImpares: %d ",contimpar);
}
