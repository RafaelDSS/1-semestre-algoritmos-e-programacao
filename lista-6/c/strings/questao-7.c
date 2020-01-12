#include <stdio.h>
#include <string.h>


int main() {
    char frase[100] = "", caracter;
    int total_digitos=0,
        total_letras=0,
        total_caracters_especiais=0;

    printf("Digite uma frase: ");
    scanf("%[^\n]", &frase);

    for (int i = 0; i < strlen(frase); i++) {
        caracter = frase[i];

        if (caracter >= 65 && caracter <= 90 || caracter >= 97 && caracter <= 122)
            total_letras++;
        else if (caracter >= 48 && caracter <= 57)
            total_digitos++;
        else 
            total_caracters_especiais++;
    }

    printf("Total digitos: %d\n", total_digitos);
    printf("Total letras: %d\n", total_letras);
    printf("Total caracters especiais: %d\n", total_caracters_especiais);

    return 0;
}
