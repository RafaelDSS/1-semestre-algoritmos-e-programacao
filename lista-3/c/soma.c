// Data : 11/10/2019

#include <stdio.h>


int main() {
    float x, y, soma;

    printf("Digite o primeiro valor: ");
    scanf("%f", &x);

    printf("Digite o segundo valor: ");
    scanf("%f", &y);

    soma = x + y;

    if (soma > 20) {
        soma += 8;
    }
    else if (soma <= 20) {
        soma -= 5;
    }

    printf("O resultado e: %.2f", soma);

    return 0;

}
