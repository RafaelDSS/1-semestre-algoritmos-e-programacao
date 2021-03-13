#include <stdio.h>


int main() {
    int vetor1[10],
        vetor2[10],
        result[10],
        qt_pares=0;

    for (int i = 0; i < 10; i++) {
        printf("Digte o valor %d para o vetor1: ", i+1);
        scanf("%d", &vetor1[i]);

        printf("Digte o valor %d para o vetor2: ", i+1);
        scanf("%d", &vetor2[i]);
    }

    for (int i = 0; i < 10; i++) {
        result[i] = vetor1[i] * vetor2[i];
    }

    for (int i = 0; i < 10; i++) {
        printf("result[%d] = %d\n", i, result[i]);
    }

    return 0;
}
