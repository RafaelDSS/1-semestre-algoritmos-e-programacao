#include <stdio.h>
#include <math.h>


int main() {
    int v1[10];
    int v2[10];

    for (int i = 0; i < 10; i++) {
        printf("Digite o %d valor: ", i+1);
        scanf("%d", &v1[i]);
    }
    for (int i = 0; i < 10; i++) {
        v2[i] = pow(v1[i], 2);
    }

    for (int i = 0; i < 10; i++) {
       printf("Vetor1 posicao %d = %d\n", i, v1[i]);
       printf("Vetor2 posicao %d = %d\n", i, v2[i]);

    }
    
}