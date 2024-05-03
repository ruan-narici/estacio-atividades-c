#include <stdio.h>

void main() {

    char ch1, ch2;

    scanf("%c %c", &ch1, &ch2);

    ch1 = ch2;
    ch2 = ch1;

    printf("ch1 = %c e ch2 = %c\n", ch1, ch2);
}
