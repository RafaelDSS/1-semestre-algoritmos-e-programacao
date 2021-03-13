#include <stdio.h>

int intcmp(int x, int y);
int produto(int x, int y);

int main() {
    int x, y;

    printf("Digite o valor de x: ");
    scanf("%d", &x);

    printf("Digite o valor de y: ");
    scanf("%d", &y);

    if (intcmp(x, y))
        printf("x e y sao iguais\n");
    else
        printf("x e y sao diferentes\n");

    printf("O produto e %d\n");

}

int intcmp(int x, int y) {
    if (x == y)
        return 1;
    return 0;
}

int produto(int x, int y) {
    return x * y;
}