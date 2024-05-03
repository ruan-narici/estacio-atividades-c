#include <stdio.h>

void main() {

    int num;

    scanf("%d", &num);

    num = num + num%3;

    printf("%d\n", num);
}
