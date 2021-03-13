#include <stdio.h>


int main() {
    int vetor1[10],
        impares[5],
        pares[5],
        qt_pares=0;

    for (int i = 0; i < 10; i++) {
        printf("Digte o valor %d para o vetor1: ", i+1);
        scanf("%d", &vetor1[i]);
    }

    for (int i = 0; i < 10; i+=2) {
        pares[i / 2] = vetor1[i];
        impares[i / 2] = vetor1[i+1];
    }

    for (int i = 0; i < 5; i++) {
        printf("impares[%d] = %d\n", i, impares[i]);
        printf("pares[%d] = %d\n", i, pares[i]);
    }

    return 0;
}
