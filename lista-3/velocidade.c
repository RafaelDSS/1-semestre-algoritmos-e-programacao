// Data : 11/10/2019

#include <stdio.h>


int main() {
    int velocidade;

    printf("Digite a velocidade: ");
    scanf("%d", &velocidade);

    if (velocidade > 60)
        printf("Voce receberar uma multa de 200 reais");

    else if (velocidade > 0)
        printf("Motorista esta dentro da faixa de velocidade permitida");

    else
        printf("valor invalido");

    return 0;

}
