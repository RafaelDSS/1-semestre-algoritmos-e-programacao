#include <stdio.h>
int x=0;

int imprime(int size, int vetor[]);

int main() {
    int number, vetor[30];


    printf("Insira o numero de elementos: ");
    scanf("%d", &number);

    for (int i = 0; i < number; i++) {
        printf("Digite o elemento %d: ", i+1);
        scanf("%d", &vetor[i]);
    }
    printf("Os elementos do vetor sao: ");
    imprime(number, vetor);


}

int imprime(int size, int vetor[]) {
    

    if (x == size)
        return 0;
    printf("%d ", vetor[x]);
    x++;
    return imprime(size, vetor);
}
