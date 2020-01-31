#include <stdio.h>
#include <string.h>


int main() {
    char frase[100] = "", caracter;

    printf("Digite uma frase: ");
    scanf("%[^\n]", &frase);

    for (int i = 0; i < strlen(frase); i++) {
        caracter = frase[i];

        if (caracter >= 97 && caracter <= 122)
            caracter -= 32;
        
        frase[i] = caracter;
    }

    printf("%s\n", frase);

    return 0;
}
