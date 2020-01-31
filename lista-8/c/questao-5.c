#include <stdio.h>


int mdc(int a, int b);

int main() {
    int a, b;


    printf("Digite o primeiro numero: ");
    scanf("%d", &a);

    printf("Digite o segundo numero: ");
    scanf("%d", &b);

    printf("O MDC de %d e %d e: %d\n", a, b, mdc(a, b));

    return 0;
}

int mdc(int a, int b) {
    if (b == 0)
        return a;
    else 
        return mdc(b, a % b);
}
