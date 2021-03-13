#include <stdio.h>


int main() {
    int matriz1[2][2],
        valor,
        menor,
        segundo_menor,
        lin=0,
        col=0;

    matriz1[0][0] = 0;
    matriz1[0][1] = 9;
    matriz1[1][0] = 4;
    matriz1[1][1] = 6;

    menor = matriz1[0][1];

    for (lin = 0; lin < 2; lin++) {
        for (col = 0; col < 2; col++) {
            valor = matriz1[lin][col];
            if (valor < menor) {
                menor = valor;
            }
        }
    }

    segundo_menor = matriz1[0][1];
    
    for (lin = 0; lin < 2; lin++) {
        for (col = 0; col < 2; col++) {
            valor = matriz1[lin][col];
            if (valor > menor && valor < segundo_menor) {
                segundo_menor = valor;
            }
        }
    }
    printf("%d\n", segundo_menor);
}