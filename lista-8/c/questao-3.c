#include <stdio.h>

int fib(int n);

int main() {
    int number;

    printf("Numero de entrada de termos para a serie (<20): ");
    scanf("%d", &number);

    printf("As series sao: ");
    for (int i = 1; i <= number; i++) {
        printf("%d ", fib(i+1));
    }

    return 0;
    
}

int fib(int n) {

    if (n == 1)
        return 0;
    else if (n == 2 || n == 3)
        return 1;
    else
        return fib(n-1) + fib(n-2);
}
