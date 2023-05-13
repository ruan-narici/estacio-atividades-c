#include <stdio.h>

void main() {

    int a= 0, e=0, i=0, o=0, u=0;
    char letra;

    printf("Digite uma letra entre a..z e PRESSIONE ENTER:\n");
    scanf("%c", &letra);

    while(letra != '.') {
        switch (letra) {

            case 'a': {
                a++;
                break;
            }
            case 'e': {
                e++;
                break;
            }
            case 'i': {
                i++;
                break;
            }
            case 'o': {
                o++;
                break;
            }
            case 'u': {
                u++;
                break;
            }
        }

        printf("Digite uma letra entre a..z e PRESSIONE ENTER:\n");
        scanf("%c", &letra);
    }
    printf("#-> DADOS\n");
    printf("Letra 'a': %d\n", a);
    printf("Letra 'e': %d\n", e);
    printf("Letra 'i': %d\n", i);
    printf("Letra 'o': %d\n", o);
    printf("Letra 'u': %d\n", u);
}
