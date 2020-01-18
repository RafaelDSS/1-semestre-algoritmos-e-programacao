#include <stdio.h>


int conta_divisores(int number);

int main() {
    int number;


    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &number);

    printf("A quantidade de divisores do %d e: %d\n", number, conta_divisores(number));

    return 0;

}


int conta_divisores(int number) {
    int divisores=0;

    for (int i = 1; i < number; i++) {
        if (number % i == 0)
            divisores++;
    }

    return divisores;
}   
