#include <stdio.h>


int main() {
    int a[10], b[10], p_valor;

    for (int i = 0; i < 10; i++) {
        printf("Digite um valor: ");
        scanf("%d", &p_valor);

        if (p_valor < 0){
            printf("Valor invalido\n");
            i -= 1;
        }
        else
            a[i] = p_valor;
    }

    for (int i = 0; i < 10; i++) {
        p_valor = a[i];
        b[i] = p_valor - (p_valor * 2);

    }

    for (int i = 0; i < 10; i++) {
        printf("Vetor a[%d] = %d, Vetor b[%d] = %d\n", i, a[i], i, b[i]);
    }



    return 0;
}