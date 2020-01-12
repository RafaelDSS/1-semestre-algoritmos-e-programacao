#include <stdio.h>


int main() {
    char string[100], caracter=' ';
    int cont=0;

    printf("Digite uma string: ");
    scanf("%[^\n]", &string);

    while (caracter != '\0') {
        caracter = string[cont];
        cont++;
    }

    printf("O comprimento da string de %d\n", cont);

    return 0;
}
