#include <stdio.h>


int main() {

    int vetor1[10], vetor2[10], vetor3[10], i;


    for (i = 0; i < 10; i++) {
        printf("Digite o valor %d para o vetor1: ", i+1);
        scanf("%d", &vetor1[i]);

        printf("Digite o valor %d para o vetor2: ", i+1);
        scanf("%d", &vetor2[i]);
    }

    for (i = 0; i < 10; i++) {
        vetor3[i] = (vetor1[i] + vetor2[i]) * (vetor1[i] + vetor2[i]);
        printf("Vetor3[%d] = %d\n", i, vetor3[i]);

    }
    return 0;
}