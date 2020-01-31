#include <stdio.h>


int main() {
    int vetor[100], 
        frequencia[100],
        size=0,
        count=0;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &size);

    for (int i = 0; i < size; i++) {
        printf("Digite o elemento %d do vetor:", i+1);
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < size; i++) {
        count = 0;

        for (int j = 0; j < size; j++) {
            if (vetor[i] == vetor[j]) {
                count++;
                frequencia[j] = -1;
            }
        }
        if (count != 0) {
            frequencia[i] = count;
        }
    }

    printf("Os elementos exlusivos encontados no vetor sao: ");
    for (int i = 0; i < size; i++) {
        if (frequencia[i] == 1)
            printf("%d ", vetor[i]);
    }

    return 0;
}
