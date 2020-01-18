#include <stdio.h>


int quadrado(int number);

int main() {
    int number;


    printf("Digite um numero: ");
    scanf("%d", &number);

    printf("O quadrado de %d e: %d\n", number, quadrado(number));

    return 0;

}


int quadrado(int number) {
    return number * number;
}   
