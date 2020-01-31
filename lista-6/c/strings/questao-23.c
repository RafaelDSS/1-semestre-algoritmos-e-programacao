#include <stdio.h>


int main() {
    char caracter;

    printf("Digite um caracter: ");
    scanf("%c", caracter);

    if ((caracter >= 65 && caracter <= 70) || (caracter >= 97 && caracter <= 102) || (caracter >= 30 && caracter <= 39)) 
        printf("E Hexadecimal\n");
    else
        printf("Nao e Hexadecimal\n");

    return 0;
}
