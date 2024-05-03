#include <stdio.h>

void main() {

    char letra;

    scanf("%c", &letra);
    letra = letra + ('A' - 'a');

    printf("%c\n", letra);

}
