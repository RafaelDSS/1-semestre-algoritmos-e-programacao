// Data : 11/10/2019

#include <stdio.h>


int main() {
    int input;

    printf("Digite um valor: ");
    scanf("%d", &input);

    if (input % 2 == 0)
        printf("O valor e par\n");

    else
        printf("O valor e impar\n");
    
    if (input < 0)
        printf("Valor negativo\n");

    else 
        printf("Valor positivo\n");

    return 0;

}
