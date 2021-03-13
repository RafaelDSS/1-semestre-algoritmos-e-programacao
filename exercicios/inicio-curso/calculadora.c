#include <stdio.h>
#include <stdlib.h>


int main() {
    float n, n2, result;
    char c;

    printf("Digite uma expressao matematica. Ex: 2 - 7: ");
    scanf("%f%c%f", &n, &c, &n2);

    switch (c) {
        case '+':
            result = n + n2;
            break;
        case '-':
            result = n - n2;
            break;
        case '/':
            result = n / n2;
            break;
        case '*':
            result = n * n2;
            break;
        
        default:
            break;
    }
    printf("%.2f %c %.2f = %.2f", n, c, n2, result);
}