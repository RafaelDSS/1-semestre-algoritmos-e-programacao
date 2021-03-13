#include <stdio.h>


int main() {
    int matriz1[2][2],
        matriz2[2][2],
        lin=0,
        col=0;

    matriz1[0][0] = 5;
    matriz1[0][1] = 6;
    matriz1[1][0] = 7;
    matriz1[1][1] = 8;

    matriz2[0][0] = 1;
    matriz2[0][1] = 2;
    matriz2[1][0] = 3;
    matriz2[1][1] = 4;

    for (lin = 0; lin < 2; lin++) {
        for (col = 0; col < 2; col++) {
            printf("%d ", matriz1[lin][col]);
        }
        printf("\n");
    }
    printf("\n");

    for (lin = 0; lin < 2; lin++) {
        for (col = 0; col < 2; col++) {
            printf("%d ", matriz2[lin][col]);
        }
        printf("\n");
    }

    printf("\n");
    
    for (lin = 0; lin < 2; lin++) {
        for (col = 0; col < 2; col++) {
            printf("%d ", matriz1[lin][col] - matriz2[lin][col]);
        }
        printf("\n");
    }
}