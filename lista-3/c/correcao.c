// Data : 11/10/2019

#include <stdio.h>


int main() {
    int option;

    printf("Escolha a alternativa: \n");
    printf("\t1 - a\n\t2 - b\n\t3 - c\n\t4 - d\n\t5 - e :");
    scanf("%d", &option);

    switch (option) {
        case 1:
            printf("Resposta errada\n");
            break;

        case 2:
            printf("Resposta errada\n");
            break;

        case 3:
            printf("Resposta certa\n");
            break;

        case 4:
            printf("Resposta errada\n");
            break;

        case 5:
            printf("Resposta errada\n");
            break;

        default:
            printf("Valor invalido");
    }
    return 0;

}
