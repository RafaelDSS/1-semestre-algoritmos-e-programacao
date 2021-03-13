#include <stdio.h>


int main() {
    float lado1, lado2, lado3, lado4, lado5, lado6;
    int lados;

    printf("Digite o numero de lados: ");
    scanf("%d", &lados);

    switch (lados) {
    case 3:
        printf("Lado 1: ");
        scanf("%f", &lado1);

        printf("Lado 2: ");
        scanf("%f", &lado2);

        printf("Lado 3: ");
        scanf("%f", &lado3);

        printf("A area e: %f\n", (lado1 * lado2 * 1.73) / 4);

        break;
    case 4:
        printf("Lado 1: ");
        scanf("%f", &lado1);

        printf("Lado 2: ");
        scanf("%f", &lado2);

        printf("A area e: %f\n", lado1 * lado2);

        break;

    case 6:
        printf("Lado 1: ");
        scanf("%f", &lado1);

        printf("Lado 2: ");
        scanf("%f", &lado2);

        printf("Lado 3: ");
        scanf("%f", &lado3);
        printf("Lado 4: ");
        scanf("%f", &lado4);
        printf("Lado 5: ");
        scanf("%f", &lado5);

        printf("Lado 6: ");
        scanf("%f", &lado6);


        printf("A area e: %d\n", (lado1 * lado2 * 1.73) / 4);

        break;
        
    
    default:
        printf("Valor invalido");
        break;
    }

    return 0;
}