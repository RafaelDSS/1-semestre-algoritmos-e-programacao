#include <stdio.h>
#include <string.h>

/*
Funções:
    strcpy
    strcat
    strnset
    strupr
    strlwr
    strrev
    strlen
    strtok
*/


int main() {
    char nome[50],
        sobrenome[50],
        nome_completo[70] = "",
        nome_completo2[70] = "",
        *p;

    strcpy(nome, "Rafael");
    printf("Nome: %s\n", nome);

    strcpy(sobrenome, " De Souza Santos");
    printf("Sobrenome: %s\n", sobrenome);

    strcat(nome_completo, nome);
    strcat(nome_completo, sobrenome);
    printf("Nome completo: %s\n", nome_completo);

    strcpy(nome_completo2, nome_completo);
    printf("Sobrenome: %s\n", strnset(nome_completo2, '*', 7));

    printf("Upper: %s\n", strupr(nome_completo));
    printf("Lower: %s\n", strlwr(nome_completo));

    printf("Reverso: %s\n", strrev(nome_completo));
    strrev(nome_completo);

    printf("Nome tamanho: %d\n", strlen(nome));

    p = strtok(nome_completo, " ");
    while (p != NULL) {
        printf("%s\n", p);
        p = strtok(NULL, " ");
    }

    return 0;

}
