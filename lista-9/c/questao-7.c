#include <stdio.h>


void soma(int *a, int *b);

int main() {
    int a, b;


    printf("Insira o primeiro valor: ");
    scanf("%d", &a);

    printf("Insira o segundo valor: ");
    scanf("%d", &b);

    printf("O valor de A e: %d\n", a);
    printf("O valor de B e: %d\n", b);
    
    soma(&a, &b);

    printf("A soma de A + B e: %d\n", a);

    return 0;

}

void soma(int *a, int *b) {
    *a = *a + *b;
}