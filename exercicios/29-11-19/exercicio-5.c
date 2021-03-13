#include <stdio.h>


int main() {
    int vetor[15], valor;


    for (int i = 0; i < 15; i++) {
        printf("Digite o valor %d: ", i+1);
        scanf("%d", &vetor[i]);
    }

    printf("Digite o valor a ser procurado no vetor: ");
    scanf("%d", &valor);

    for (int i = 0; i < 15; i++) {
        if (vetor[i] == valor)
            printf("vetor[%d] = %d\n", i, vetor[i]);
    }
    
    return 0;

}