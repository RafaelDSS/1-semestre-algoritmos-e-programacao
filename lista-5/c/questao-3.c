#include <stdio.h>


int main() {
    int soma=0,
        numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    for(int i = 1; i <= numero; i++) {
        soma += i;
    }
    printf("A soma e: %d", soma);

    return 0;
}
