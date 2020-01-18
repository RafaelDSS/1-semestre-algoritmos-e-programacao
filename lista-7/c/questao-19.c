#include <stdio.h>


int *maior_matriz(int matriz[][10], int size);

int main() {
    int matriz[10][10],
        size=0,
        maior=0,
        *p;

    printf("Digite o tamanho da matriz: ");  
    scanf("%d", &size);

    for (int lin = 0; lin < size; lin++) {
        for (int col = 0; col < size; col++) {
            printf("Digite o valor %dx%d da matriz: ", lin, col);
            scanf("%d", &matriz[lin][col]);
        }
    }

    p = maior_matriz(matriz, size);

    printf("O menor elemento da matriz e: %d\n", p[0]);
    printf("O maior elemento da matriz e: %d\n", p[1]);

    return 0;
}

int *maior_matriz(int matriz[10][10], int size) {
    static int valores[2];
    int maior=0,
        menor=0,
        valor=0;

    menor = matriz[0][0];

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            valor = matriz[i][j];

            if (valor > maior)
                maior = valor;

            if (valor < menor)
                menor = valor;
        }
    }
    valores[0] = menor;
    valores[1] = maior;

    return valores;
}
