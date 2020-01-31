#include <stdio.h>


int soma(int number);

int main() {
    int number;


    printf("Insira o ultimo numero do intervalo a partir de 1: ");
    scanf("%d", &number);

    printf("A soma dos numeros de 1 a %d: %d\n", number, soma(number));

    return 0;
    
}

int soma(int number) {
    if (number == 0)
        return 0;

    return number + soma(number-1);
}
