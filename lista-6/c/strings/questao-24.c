#include <stdio.h>


int main() {
    char caracter;

    printf("Digite uma letra: ");
    scanf("%c", &caracter);

    if (caracter >= 65 && caracter <= 90) 
        printf("E maiuscula\n");
    else 
        printf("Nao e maiuscula\n");

    return 0;
}
