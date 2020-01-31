#include <stdio.h>
int x=0;
int n_maior=0;

int maior(int size, int vetor[]);

int main() {
    int number, vetor[30];


    printf("Insira o numero de elementos: ");
    scanf("%d", &number);

    for (int i = 0; i < number; i++) {
        printf("Digite o elemento %d: ", i+1);
        scanf("%d", &vetor[i]);
    }
    maior(number, vetor);
    
    printf("O maior elemento do vetor e: %d\n", n_maior);

    return 0;
}

int maior(int size, int vetor[]) {
    

    if (x == size)
        return 0;
    if (vetor[x] > n_maior)
        n_maior = vetor[x];

    x++;
    return maior(size, vetor);
}
