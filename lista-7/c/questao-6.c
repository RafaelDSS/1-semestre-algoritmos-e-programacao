#include <stdio.h>


int fatorial(int number);

int main() {
    int number;


    printf("Digite um numero: ");
    scanf("%d", &number);

    printf("O fatorial de %d e: %d\n", number, fatorial(number));

    return 0;

}


int fatorial(int number) {
    int fat=1;

    for (int i = 1; i <= number; i++) {
        fat *= i;
    }

    return fat;
}   
