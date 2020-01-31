#include <stdio.h>


int main() {
    int vetor[100], 
        size=0,
        aux=0;


    printf("Digite o tamanho do vetor: ");
    scanf("%d", &size);

    for (int i = 0; i < size; i++) {
        printf("Digite o elemento %d do vetor:", i+1);
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size-1; j++) {
            if (vetor[j] > vetor[j+1]) {
                aux = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = aux;
            }
        }
    }

    printf("Valores do vetor ordenados em ordem crescente: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", vetor[i]);
    }

    return 0;
}
