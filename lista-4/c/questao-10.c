#include <stdio.h>


int main() {
    int valores[10];
    int valor, 
        menor[2] = {0, 0}, 
        maior[2] = {0, 0}, 
        value;

    for (int i = 0; i < 10; i++) {
        printf("Digite o %d valor: ");
        scanf("%d", &valor);

        valores[i] = valor;
    }
    menor[1] = valores[0];

    for (int i = 0; i < 10; i++) {
        value = valores[i];

        if (value < menor[1]) {
            menor[1] = value;
            menor[0] = i;
        }

        if (value > maior[1]) {
            maior[1] = value;
            maior[0] = i;
        }
    }
    printf("O maior valor e: %d e esta na posicao: %d\n", maior[1], maior[0]);
    printf("O menor valor e: %d e esta na posicao: %d\n", menor[1], menor[0]);

}