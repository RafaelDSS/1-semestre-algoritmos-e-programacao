#include <stdio.h>


int maior_matriz(int matriz[][10], int size);

int main() {
    int matriz[10][10],
        size=0,
        maior=0;

    printf("Digite o tamanho da matriz: ");  
    scanf("%d", &size);

    for (int lin = 0; lin < size; lin++) {
        for (int col = 0; col < size; col++) {
            printf("Digite o valor %dx%d da matriz: ", lin, col);
            scanf("%d", &matriz[lin][col]);
        }
    }

    maior = maior_matriz(matriz, size);

    printf("O maior elemento da matriz e: %d\n", maior);

    return 0;
}

int maior_matriz(int matriz[10][10], int size) {
    int maior=0,
        valor=0;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            valor = matriz[i][j];

            if (valor > maior)
                maior = valor;
        }
    }

    return maior;
}
