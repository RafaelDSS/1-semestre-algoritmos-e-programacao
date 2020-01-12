#include <stdio.h>


int main() {
    int vetor[100],
        qt_valores=0,
        soma=0;

    printf("Quantos valores voce deseja?: ");
    scanf("%d", &qt_valores);


    for (int i = 0; i < qt_valores; i++) {
        printf("Digite o valor %d: ", i+1);
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < qt_valores; i++) {
        soma += vetor[i];
    }

    printf("A soma dos elementos armazenados no vetor e: %d", soma);

    return 0;
}
