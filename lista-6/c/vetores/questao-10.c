#include <stdio.h>


int main() {
    int vetor[100],
        pares[100],
        pares_index=0,
        imares[100],
        impares_index=0,
        qt_valores=0,
        valor=0;

    printf("Quantos valores voce deseja?: ");
    scanf("%d", &qt_valores);


    for (int i = 0; i < qt_valores; i++) {
        printf("Digite o valor %d: ", i+1);
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < qt_valores; i++) {
        valor = vetor[i];

        if (valor % 2 == 0) {
            pares[pares_index] = valor;
            pares_index++;
        }
        else {
            imares[impares_index] = valor;
            impares_index++;
        }
    }

    printf("Os elementos pares sao: \n");
    for (int i = 0; i < pares_index; i++) {
        printf("%d ", pares[i]);
    }

    printf("\n");
    
    printf("Os elementos impares sao:\n");
    for (int i = 0; i < impares_index; i++) {
        printf("%d ", imares[i]);
    }

    return 0;
}
