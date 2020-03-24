#include <stdio.h>


void mn(int *a, int *b);

int main() {
    int a, b;


    printf("Insira o primeiro valor: ");
    scanf("%d", &a);

    printf("Insira o segundo valor: ");
    scanf("%d", &b);

    printf("O valor de A e: %d\n", a);
    printf("O valor de B e: %d\n", b);

    printf("\n");
    
    mn(&a, &b);

    printf("O maior e: %d\n", a);
    printf("O menor e: %d\n", b);

    return 0;

}

void mn(int *a, int *b) {
    int aux;

    aux = *a;

    if (*a < *b) {
        *a = *b;
        *b = aux;
    }
}