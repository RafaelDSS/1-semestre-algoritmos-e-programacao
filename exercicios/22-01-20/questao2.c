#include <stdio.h>


int menor(int tamanho, int *vetor);

int main() {
    int vetor[50],
        tamanho;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    for (int i = 0; i < tamanho; i++) {
        printf("Digite o valor %d: ", i+1);
        scanf("%d", &vetor[i]);
    }

    printf("O menor valor do vetor e: %d\n", menor(tamanho, vetor));

    return 0;

}

int menor(int tamanho, int *vetor) {
    int valor, menor=0;

    menor = vetor[0];
    for (int i = 0; i < tamanho; i++) {
        valor = vetor[i];

        if (valor < menor)
            menor = valor;
    }
    return menor;
}
