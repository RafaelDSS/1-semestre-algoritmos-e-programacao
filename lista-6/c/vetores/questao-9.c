#include <stdio.h>


int main() {
    int vetor[100], 
        size=0,
        menor=0,
        maior=0,
        valor=0;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &size);

    for (int i = 0; i < size; i++) {
        printf("Digite o elemento %d do vetor:", i+1);
        scanf("%d", &vetor[i]);
    }

    menor = vetor[0];

    for (int i = 0; i < size; i++) {
        valor = vetor[i];

        if (valor < menor)
            menor = valor;

        if (valor > maior)
            maior = valor;
    }

    printf("O maximo elemento e: %d\n", maior);
    printf("O minimo elemento e: %d\n", menor);

    return 0;
}
