#include <stdio.h>


void dobro(int *a, int *b);

int main() {
    int a, b;


    printf("Insira o primeiro valor: ");
    scanf("%d", &a);

    printf("Insira o segundo valor: ");
    scanf("%d", &b);

    printf("O valor de A e: %d\n", a);
    printf("O valor de B e: %d\n", b);

    printf("\n");
    
    dobro(&a, &b);

    printf("O valor de A e: %d\n", a);
    printf("O valor de B e: %d\n", b);

    printf("A soma do drobo de A + B e: %d\n", a+b);

    return 0;

}

void dobro(int *a, int *b) {
    *a = *a * 2;
    *b = *b * 2;
}