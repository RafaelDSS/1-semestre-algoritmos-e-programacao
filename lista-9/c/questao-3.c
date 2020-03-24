#include <stdio.h>


int main() {
    int a, b;


    printf("Insira o primeiro valor: ");
    scanf("%d", &a);

    printf("Insira o segundo valor: ");
    scanf("%d", &b);

    if (&a > &b)
        printf("O maior endereço e: %p\n", &a);
    else
        printf("O maior endereço e: %p\n", &b);

    return 0;

}