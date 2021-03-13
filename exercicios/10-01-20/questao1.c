#include <stdio.h>


int soma(int x, int y);
int subtracao(int x, int y);
int multiplicacao(int x, int y);
float divisao(float x, float y);
int modulo(int x, int y);


int main() {
    int x, y;

    printf("Digite o valor de x: ");
    scanf("%d", &x);

    printf("Digite o valor de y: ");
    scanf("%d", &y);

    printf("%d + %d = %d\n", x, y, soma(x, y));
    printf("%d - %d = %d\n", x, y, subtracao(x, y));
    printf("%d * %d = %d\n", x, y, multiplicacao(x, y));
    printf("%d / %d = %f\n", x, y, divisao(x, y));
    printf("%d %% %d = %d\n", x, y, modulo(x, y));
}

int soma(int x, int y) {
    return x + y;
}

int subtracao(int x, int y) {
    return x - y;
}

int multiplicacao(int x, int y) {
    return x * y;
}

float divisao(float x, float y) {
    return x / y;
}

int modulo(int x, int y) {
    return x % y;
}
