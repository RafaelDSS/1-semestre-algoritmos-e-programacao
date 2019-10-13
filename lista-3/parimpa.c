// Data : 11/10/2019

#include <stdio.h>


int main() {
    int input;

    printf("Digite um valor inteiro positivo: ");
    scanf("%d", &input);

    if (input % 2 == 0 && input != 0)
        printf("O valor e par");

    else if (input % 2 != 0 && input != 0) 
        printf("O valor e impar");
    
    else if (input == 0)
        printf("O valor e nulo");
    
    else 
        printf("Valor invalido");
    
    return 0;

}
