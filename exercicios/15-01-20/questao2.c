#include <stdio.h>


int soma(int x, int y);
int subtracao(int x, int y);
int multiplicacao(int x, int y);
float divisao(float x, float y);


int main() {
    int x, y;
    char op;

    printf("Insira o primeiro valor: ");
    scanf("%d", &x);

    printf("Insira o segundo valor: ");
    scanf("%d", &y);

    scanf("%c", stdin);
    
    printf("Digite uma operacao ex: (+, -, *, /): ");
    scanf("%c", &op);

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

        default:
            printf("Operacao incorreta\n");
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