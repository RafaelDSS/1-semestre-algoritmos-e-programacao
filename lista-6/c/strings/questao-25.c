#include <stdio.h>
#include <string.h>


int main() {
    char frase[100] = "", caracter;

    printf("Digite uma frase: ");
    scanf("%[^\n]", &frase);

    scanf("%c");

    printf("Digite um caracter que vai subistituir os espacos: ");
    scanf("%c", &caracter);

    for (int i = 0; i < strlen(frase); i++) {
        if (frase[i] == ' ')
            frase[i] = caracter;
    }

    printf("%s\n", frase);

    return 0;
}
