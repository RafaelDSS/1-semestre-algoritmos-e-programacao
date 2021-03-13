#include <stdio.h>


int main() {
    int vetor[100],
        size=0;

    printf("Digite o tamanho do vetor: ");  
    scanf("%d", &size);

    for (int i = 0; i < size; i++) {
        printf("Digite o valor %d: ", i+1);
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size-1; j++) {
            if (vetor[j] > vetor[j+1]) {
                int aux;
                aux = vetor[j+1];
                vetor[j+1] = vetor[j];
                vetor[j] = aux;
            }
        }
    }

    printf("Vetor ordenado\n");
    for (int i = 0; i < size; i++) {
        printf("Vetor[%d] = %d\n", i, vetor[i]);
    }

    return 0;
}