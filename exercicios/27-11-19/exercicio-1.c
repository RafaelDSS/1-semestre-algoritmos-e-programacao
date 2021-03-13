#include <stdio.h>
#include <string.h>


int main() {
    char frase[30];
    char caracter;
    int cont = 0;

    printf("Digite uma frase: ");
    fflush(stdin);
    gets(frase);

    printf("Digite um caracter a ser procurado: ");
    scanf("%c", &caracter);

    for (int i = 0; i < 30; i++) {
        if (frase[i] == caracter)
            cont++;
    }

    if (cont > 0)
        printf("O caracter consta no vetor %d\n", cont);
    else
        printf("O caracter nao conta no vetor\n");

    return 0;
}
