#include <stdio.h>


int main() {
    int matriz[10][4],
        size=0;

    printf("Digite o tamanho da matriz: ");  
    scanf("%d", &size);

    for (int lin = 0; lin < size; lin++) {
        for (int col = 0; col < size; col++) {
            printf("Digite o valor %dx%d da matriz: ", lin, col);
            scanf("%d", &matriz[lin][col]);
        }
    }

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            for (int l = 0; l < size; l++) {
                for (int c = 0; c < size; c++) {
                    if (matriz[i][j] > matriz[l][c]) {
                        int aux;
                        aux = matriz[l][c];
                        matriz[l][c] = matriz[i][j];
                        matriz[i][j] = aux;
                    }
                }
            } 
        }
    }

    printf("Matriz ordenado\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("Matriz[%d][%d] = %d\n", i, j, matriz[i][j]);
        }
    }

    return 0;
}
