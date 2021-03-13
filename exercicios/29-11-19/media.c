#include <stdio.h>


int main() {
    float notas[10], soma=0;
    

    for (int i = 0; i < 10; i++) {
        printf("Digite a nota %d: ", i+1);
        scanf("%f", &notas[i]);
    }

    for (int i = 0; i < 10; i++) {
        soma += notas[i];
    }

    for (int i = 10; i > 0; i--) {
        printf("notas[%d] = %.2f\n", i, notas[i]);
    }

    printf("A media e: %.2f\n", soma / 5);
    printf("Soma: %.2f\n", soma);

    for (int i = 0; i < 10; i++) {
        printf("notas[%d] = %.2f\n", i, notas[i]);
    }

    return 0;
}
