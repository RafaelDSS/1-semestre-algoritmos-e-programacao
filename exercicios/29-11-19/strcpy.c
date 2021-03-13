#include <stdio.h>
#include <string.h>


int main() {
    char nome[15];;
    char sobrenome[15] = "Dourado";

    strcpy(nome, "Fulano de Tal");
    strcpy(nome, sobrenome);

    printf("Nome = %s\n", nome);

    return 0;
}