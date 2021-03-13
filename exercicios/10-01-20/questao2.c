#include <stdio.h>


int soma(int x, int y);
int subtracao(int x, int y);
int multiplicacao(int x, int y);
float divisao(float x, float y);
int modulo(int x, int y);


int main() {
    int x, y;
    char op;

    printf("Digite uma expressao ex: (3 * 5): ");
    scanf("%d%c%d", &x, &op, &y);

    switch (op) {
        case '-':
            printf("%d - %d = %d\n", x, y, subtracao(x, y));
            break;
        
        case '+':
            printf("%d + %d = %d\n", x, y, soma(x, y));
            break;

        case '*':
            printf("%d * %d = %d\n", x, y, multiplicacao(x, y));
            break;

        case '/':
            printf("%d / %d = %f\n", x, y, divisao(x, y));
            break;

        case '%':
            printf("%d %% %d = %d\n", x, y, modulo(x, y));
            break;

        default:
            printf("Valores invalidos\n");
    }
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
