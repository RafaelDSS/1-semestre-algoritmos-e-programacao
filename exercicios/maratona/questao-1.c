#include <stdio.h>


int main() {
    int valor;

    printf("Digite um valor: ");
    scanf("%d", &valor);

    for (int i = 1; i <= 10; i++) {
        printf("%d X %d = %d\n", i, valor, i * valor);
    }

    return 0;
}