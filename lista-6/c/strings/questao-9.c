#include <stdio.h>
#include <string.h>


int main() {
    char frase[100] = "", caracter;
    int total_consoantes=0,
        total_vogais=0;

    printf("Digite uma frase: ");
    scanf("%[^\n]", &frase);

    for (int i = 0; i < strlen(frase); i++) {
        caracter = frase[i];

        if (caracter >= 65 && caracter <= 90 || caracter >= 97 && caracter <= 122)
            caracter = tolower(caracter);

            if (caracter == "a" || caracter == "e" || caracter == "i" || caracter == "o" || caracter == "u")
                total_vogais++;
            else 
                total_consoantes++;

    
    }

    printf("Total vogais: %d\n", total_vogais);
    printf("Total consoantes: %d\n", total_consoantes);

    return 0;
}
