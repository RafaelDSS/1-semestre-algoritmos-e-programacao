// Data : 11/10/2019

#include <stdio.h>
#include <ctype.h>


int main() {
    float salario;
    char cargo;

    printf("Digite o cargo\n\tC - Coronel\n\tM - Major\n\tT - Tenente: ");
    scanf("%c", &cargo);

    printf("Digite o valor do salario: ");
    scanf("%f", &salario);

    cargo = tolower(cargo);

    switch (cargo) {
        case 'c':
            printf("O aumento foi de: %.2f", salario * 0.6);
            break;

        case 'm':
            printf("O aumento foi de: %.2f", salario * 0.4);
            break;

        case 't':
            printf("O aumento foi de: %.2f", salario * 0.2);
            break;

        default:
            printf("Valor invalido");
    }
    return 0;

}
