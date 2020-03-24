#include <stdio.h>


void fill(int *vet, int tam, int value);

int main() {
    int vet[10], *p, value = 18;
    int tam = 10;
    p = &vet[0];

    fill(p, tam, value);

    for (int i = 0; i < tam; i++) {
        printf("vet[%d] = %d\n", i, *(p+i));
    }
}

void fill(int *vet, int tam, int value) {
    for (int i = 0; i < tam; i++) {
        *(vet+i) = value;
    }
}
