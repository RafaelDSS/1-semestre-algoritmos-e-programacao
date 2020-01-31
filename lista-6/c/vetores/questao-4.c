#include <stdio.h>


int main() {
    int vetor[100],
        vetor_cp[100],
        qt_valores=0;

    printf("Quantos valores voce deseja?: ");
    scanf("%d", &qt_valores);


    for (int i = 0; i < qt_valores; i++) {
        printf("Digite o valor %d: ", i+1);
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < qt_valores; i++) {
        vetor_cp[i] = vetor[i];
    }

    printf("Elementos do vetor original\n");
    for (int i = 0; i < qt_valores; i++) {
        printf("vetor[%d] = %d\n", i, vetor[i]);
    }

    printf("Elementos copiados\n");
    for (int i = 0; i < qt_valores; i++) {
        printf("vetor_cp[%d] = %d\n", i, vetor_cp[i]);
    }

    return 0;
}
