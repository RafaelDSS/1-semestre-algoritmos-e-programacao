#include <stdio.h>


int soma(int n);

int main() {
    int number;
    

    printf("Digite um numero: ");
    scanf("%d", &number);

    printf("%d = ", number);
    printf("%d\n", soma(number));

}

int soma(int n) {
    if (n == 0) {
        printf("0 = ");
        return 0;
    }
    else
        printf("%d + ", n);
        return n+soma(n-1);
}

