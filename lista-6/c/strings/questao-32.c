#include <stdio.h>
#include <string.h>


int main() {
    char frase[100] = "", caracter;
    int count=0;

    printf("Digite uma frase: ");
    scanf("%[^\n]", frase);

    scanf("%c");

    printf("Digite um caracter: ");
    scanf("%c", &caracter);

    for (int i = 0; i < strlen(frase); i++) {
        if (frase[i] == caracter)
            count++;
    }

    printf("O caracter [%c] esta presente %d vez(es) na frase\n", caracter, count);

    return 0;
}
