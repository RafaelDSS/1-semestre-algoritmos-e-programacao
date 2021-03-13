#include <stdio.h>
#include <string.h>


int main() {
    char cpf[3][15];
    char cpf_search[15];

    for(int i=0; i < 3; i++) {
        printf("Digite o CPF %d: ", i+1);
        scanf("%s", &cpf[i]);
    }

    printf("Digite um CPF a ser consultado no vetor: ");
    scanf("%s", &cpf_search);

    for(int i=0; i < 3; i++) {
        if (strcmp(cpf[i], cpf_search) == 0) {
            printf("O CPF %s esta no vetor\n", cpf_search);
            break;
        }
    }
}