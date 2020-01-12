#include <stdio.h>


int main() {
    int vetor[100],
        qt_valores=0;

    printf("Quantos valores voce deseja?: ");
    scanf("%d", &qt_valores);


    for (int i = 0; i < qt_valores; i++) {
        printf("Digite o valor %d: ", i+1);
        scanf("%d", &vetor[i]);
    }

    for (int i = qt_valores-1; i >= 0; i--) {
        printf("vetor[%d] = %d\n", i, vetor[i]);
    }

    return 0;
}
