#include <stdio.h>
#include <string.h>


int main() {
    char frase[50] = "", 
        palavra_menor[50] = "",   
        palavra_maior[50] = "",
        *token;

    int size=0,
        size_maior=0,
        size_menor=999;

    printf("Digite uma frase: ");
    scanf("%[^\n]", frase);

    token = strtok(frase, " ");
   
    while( token != NULL ) {
        size = strlen(token);

        if (size < size_menor) {
            size_menor = size;
            strcpy(palavra_menor, token);
        }

        if (size > size_maior) {
            size_maior = size;
            strcpy(palavra_maior, token);
        }

        token = strtok(NULL, " ");
    }

    printf("A maior palavra e: %s\n", palavra_maior);
    printf("A menor palavra e: %s\n", palavra_menor);
    
    return 0;  
}
