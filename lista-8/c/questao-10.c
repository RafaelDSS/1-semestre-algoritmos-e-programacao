#include <stdio.h>


int mmc(int a, int b);
int mdc(int a, int b);

int main() {
    int a, b;

    printf("Insiar o primeiro numero: ");
    scanf("%d", &a);

    printf("Insiar o primeiro numero: ");
    scanf("%d", &b);

    printf("O MMC de %d e %d e: %d\n", a, b, mmc(a, b));

    return 0;
}

int mmc(int a, int b) {
    return a * (b / mdc(a, b));
}

int mdc(int a, int b) {
    if (b == 0)
        return a;
    else 
        return mdc(b, a % b);
}   
