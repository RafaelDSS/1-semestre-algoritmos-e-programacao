#include <stdio.h>


int main() {
    char caracter;

    printf("Digite um caracter: ");
    scanf("%c", &caracter);

    if (caracter >= 48 && caracter <= 57)
        printf("E um digito\n");
    else 
        printf("Nao e um digito");

    return 0;
}
