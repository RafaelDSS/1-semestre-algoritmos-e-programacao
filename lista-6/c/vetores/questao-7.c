#include <stdio.h>


int main() {
    int vetor1[100], 
        vetor2[100],
        size1=0,
        size2=0,
        aux=0;


    printf("Digite o tamanho do vetor1: ");
    scanf("%d", &size1);

    for (int i = 0; i < size1; i++) {
        printf("Digite o elemento %d do vetor1:", i+1);
        scanf("%d", &vetor1[i]);
    }

    
    printf("Digite o tamanho do vetor2: ");
    scanf("%d", &size2);

    for (int i = 0; i < size2; i++) {
        printf("Digite o elemento %d do vetor1:", i+1);
        scanf("%d", &vetor2[i]);
    }

    for (int i = 0, c = size1; i < size1 + size2; i++, c++) {
       vetor1[c] = vetor2[i];
    }

    for (int i = 0, c = size1; i < size1 + size2; i++, c++) {
       printf("vet = %d\n", vetor1[i]);
    }

    for (int i = 0; i < size1+size2; i++) {
        for (int j = 0; j < (size1 + size2) - 1; j++) {
            if (vetor1[j] < vetor1[j+1]) {
                aux = vetor1[j];
                vetor1[j] = vetor1[j+1];
                vetor1[j+1] = aux;
            }
        }
    }

    printf("Valores do vetor ordenados em ordem crescente: ");
    for (int i = 0; i < size1+size2; i++) {
        printf("%d ", vetor1[i]);
    }

    return 0;
}
