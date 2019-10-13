// Data : 11/10/2019

#include <stdio.h>


int main() {
    long long int cpf1, cpf2, cpf3, cpf4;
    int option;
    int existe = 0;

    printf("Digite o numero de tres CPFs: \n");
    scanf("%lld%lld%lld", &cpf1, &cpf2, &cpf3);

    printf("Digite um CPF para verificar se ja foi informado: \n");
    scanf("%lld", &cpf4);

    if (cpf4 == cpf1 || cpf4 == cpf2 || cpf4 == cpf3) {
        printf("Este CPF ja consta nos ja digitados!\n");
        existe = 1;
    }
    else {
        printf("Deseja incluir este novo CPF?:\n\t1 - Sim\n\t2 - Nao: ");
        scanf("%d", &option);

        if (option == 1) {
            existe = 1;
        }
    }

    printf("CPF 1: %lld\n", cpf1);
    printf("CPF 2: %lld\n", cpf2);
    printf("CPF 3: %lld\n", cpf3);

    if (existe) {
        printf("CPF 4: %lld\n", cpf4);
    }
    return 0;

}
