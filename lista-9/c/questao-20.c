#include <stdio.h>


int negativos(float *vet, int N);

int main() {
    float vet[10] = {5.5,-3.3,5.2,-2.9,8.3,4.2,2.5,-6.6,4.7,3.3}, *p;
    int tam = 10, qt;
    p = &vet[0];

    qt = negativos(p, tam);

    printf("Existe %d numeros negativos no array\n", qt);

    return 0;
}

int negativos(float *vet, int N) {
    int qt=0;

    for (int i = 0; i < N; i++) {
        if ((*(vet+i)) < 0)
            qt++;
    }
    return qt;
}
