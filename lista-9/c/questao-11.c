#include <stdio.h>


int main() {
    int vetor[5], *p;

    p = &vetor[0];

    for (int i = 0; i < 5; i++) {
        printf("Digite o valor %d do vetor: ", i+1);
        scanf("%d", p+i);
    }

    for (int i = 0; i < 5; i++) {
        if ((*(p+i)) % 2 == 0) {
            printf("Posicao[%d] = &%p\n", i, p+i);
        }
    }

    return 0;
}