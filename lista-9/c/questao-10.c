#include <stdio.h>


int main() {
    float vetor[5], *p;

    p = &vetor[0];

    for (int i = 0; i < 5; i++) {
        printf("Digite o valor %d do vetor: ", i+1);
        scanf("%f", p+i);
    }

    for (int i = 0; i < 5; i++) {
        printf("vetor[%d] = %.2f\n", i, (*(p+i)) * 2);
    }

    return 0;
}