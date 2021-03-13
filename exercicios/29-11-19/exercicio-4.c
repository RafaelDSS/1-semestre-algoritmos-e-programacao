#include <stdio.h>


int main() {
    int vetor1[12],
        vetor2[12];


    for (int i = 0; i < 12; i++) {
        printf("Digte o valor %d para o vetor1: ", i+1);
        scanf("%d", &vetor1[i]);
    }

    for (int i = 0; i < 12; i++) {

        if (vetor1[i] == 0) 
            vetor2[i] = 1;
        else
            vetor2[12] = vetor1[i];
    }

    for (int i = 0; i < 12; i++) {
        printf("vetor1[%d] = %d\n", i, vetor1[i]);
        printf("vetor2[%d] = %d\n", i, vetor2[i]);
    }

    return 0;
}