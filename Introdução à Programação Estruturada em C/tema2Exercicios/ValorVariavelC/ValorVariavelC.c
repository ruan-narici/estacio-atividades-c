#include <stdio.h>
int main(){

int a, b, c, d;
a = 10;
b = a + 1;
c = b + 1;
d = c + 1;
a = b = c = d = 20;


printf("A variável c possui o valor: %d ", c);
//20

return 0;
}
