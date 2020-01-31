#include <stdio.h>

int main() {
    int valores[6] = {1, 0, 5, -2, -5, 7};
    int soma;

    soma = valores[0] + valores[2] + valores[5];

    printf("A soma das posicoes 0, 2 e 5 do vetor e: %d\n", soma);

    valores[3] = 100;

    for (int i = 0; i < 6; i++) {
        printf("%d\n", valores[i]);
    }
}