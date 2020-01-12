#include <stdio.h>


int main() {
    int vetor[10];

    printf("Digite 10 valores\n");

    for (int i = 0; i < 10; i++) {
        printf("Digite o valor %d: ", i+1);
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < 10; i++) {
        printf("vetor[%d] = %d\n", i, vetor[i]);
    }

    return 0;
}
