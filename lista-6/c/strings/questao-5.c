#include <stdio.h>


int main() {
    char string[100], caracter=' ';
    int cont=1;

    printf("Digite uma string: ");
    scanf("%[^\n]", &string);

    while (caracter != '\0') {
        caracter = string[cont];
        if (caracter == ' ')
            cont++;
    }

    printf("A quantidade de palavras na string e: %d\n", cont);

    return 0;
}
