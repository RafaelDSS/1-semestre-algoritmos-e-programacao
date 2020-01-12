#include <stdio.h>

int main() {
    char caracter;

    printf("Digite um caracter: ");
    scanf("%c", &caracter);

    if (caracter >= 97 && caracter <= 122)
        printf("E minuscula\n");
    else 
        printf("Nao e minuscula");

    return 0;
}
