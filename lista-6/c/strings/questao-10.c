#include <stdio.h>
#include <string.h>


int main() {
    char frase[100] = "", caracter;

    printf("Digite uma frase: ");
    scanf("%[^\n]", &frase);

    printf("O maximo de caracteres e: %d\n", strlen(frase));

    return 0;
}
