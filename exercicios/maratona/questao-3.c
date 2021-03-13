#include <stdio.h>


int main() {
    float a[20], b[20], p_valor;
    int i;

    for (i = 0; i < 20; i++) {
        printf("Digite um valor: ");
        scanf("%f", &p_valor);
        a[i] = p_valor;
    }

    for (i = 0; i < 20; i++) {
        p_valor = a[i];
        b[i] = p_valor / 2;

    }

    for (i = 0; i < 20; i++) {
        printf("Vetor a[%d] = %.2f, Vetor b[%d] = %.2f\n", i, a[i], i, b[i]);
    }

    return 0;
}