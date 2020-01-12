#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main() {
    char frase[100] = "";
    int cont=0;

    printf("Digite uma frase: ");
    scanf("%[^\n]", frase);

    for (int i = 0; i < strlen(frase); i++) {
        if (ispunct(frase[i])) {
            cont++;
            
        }
    }

    printf("A frase possui %d caracteres de pontuacao\n");

    return 0;
}
