#include <stdio.h>


int order(int *a, int *b,  int *c);

int main() {
    int a, b, c, ret;
    
    printf("Digite o primeiro valor: ");
    scanf("%d", &a);

    printf("Digite o segundo valor: ");
    scanf("%d", &b);

    printf("Digite o terceiro valor: ");
    scanf("%d", &c);

    ret = order(&a, &b, &c);

    if (!ret)
        printf("Os valores sao distintos\n");
    else if (ret == 1)
        printf("Os valores sao todos iguais\n");
    
    printf("Os valores de A, B, C sao: %d, %d, %d\n", a, b, c);


}

int order(int *a, int *b,  int *c) {
    int vet[3] = {*a, *b, *c};

    for (int i = 0; i < 3; i++) {
        for (int c = 0; c < 3-1; c++) {
            if (vet[c] > vet[c+1]) {
                int aux;

                aux = vet[c];
                vet[c] = vet[c+1];
                vet[c+1] = aux;
            }
        }
    }
    
    *a = vet[0];
    *b = vet[1];
    *c = vet[2];

    if (*a == *b && *b == *c)
        return 1;
    else if (*a != *b && *b != *c)
        return 0;
}
