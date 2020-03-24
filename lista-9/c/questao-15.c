#include <stdio.h>


void imprime(int *vet, int tam);

int main() {
    int vet[10] = {5,3,5,2,8,4,2,6,4,3}, *p;
    int tam = 10;
    p = &vet[0];

    imprime(p, tam);

    return 0;
}

void imprime(int *vet, int tam) {
    for (int i = 0; i < tam; i++) {
         printf("vet[%d] = %d\n", i, *(vet+i));
    }
}
