#include <stdio.h>


void maior_menor(int *a, int *b);

int main() {
    int a=3,
        b=6;

    maior_menor(&a, &b);

    printf("O menor valor e: %d\n", a);
    printf("O maior valor e: %d\n", b);

    return 0;
}

void maior_menor(int *a, int *b) {
    int temp;

    temp = *b;

    if (*a > *b)
        *b = *a;
        *a = temp;
}
