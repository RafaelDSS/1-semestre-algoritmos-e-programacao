#include <stdio.h>
#include <stdlib.h>


int main() {
    int x, y, z;
    int a, b, c;

    printf("Digite tres valores: \n");
    scanf("%d%d%d", &x, &y, &z);

    a = x + y + z;
    b = (x + y) - z;
    c = (x * z) - y;

    printf("Operacao 1: %d\n", a);
    printf("Operacao 2: %d\n", b);
    printf("Operacao 3: %d\n", c);

}