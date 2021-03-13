#include <stdio.h>


int main() {

    int vetor1[10], valor, encontrado=1;


    for (int i = 0; i < 10; i++) {
        printf("Digite o valor %d para o vetor1: ", i+1);
        scanf("%d", &valor);

        for (int n = 0; n < 10; n++) { 
            if (valor == vetor1[n]) {
                encontrado = 0;
                break;
            }
        }
        if (encontrado) {
            vetor1[i] = valor;
        }
        else {
            encontrado = 1;
            i -= 1;
        }
    }

    for (int i = 0; i < 10; i++) {
        printf("Vetor1[%d] = %d\n", i, vetor1[i]);

    }
    return 0;
}