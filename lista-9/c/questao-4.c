#include <stdio.h>


void troca(int *a, int *b);

int main() {
    int a, b;


    printf("Insira o primeiro valor: ");
    scanf("%d", &a);

    printf("Insira o segundo valor: ");
    scanf("%d", &b);

    printf("O valor de A e: %d\n", a);
    printf("O valor de B e: %d\n", b);

    printf("\n");
    
    troca(&a, &b);

    printf("O valor de A e: %d\n", a);
    printf("O valor de B e: %d\n", b);

    return 0;

}

void troca(int *a, int *b) {
    int aux;

    aux = *a;
    *a = *b;
    *b = aux;
}
