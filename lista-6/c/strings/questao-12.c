#include <stdio.h>
#include <string.h>


int main() {
    char string[100] = "";
    int size=0,
        aux=0;


    printf("Digite uma string: ");
    scanf("%s", string);

    size = strlen(string);

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size-1; j++) {
            if (string[j] < string[j+1]) {
                aux = string[j];
                string[j] = string[j+1];
                string[j+1] = aux;
            }
        }
    }

    printf("caracteres do vetor ordenados em ordem decrescente: ");
    for (int i = 0; i < size; i++) {
        printf("%c ", string[i]);
    }

    return 0;
}




