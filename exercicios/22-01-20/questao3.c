#include <stdio.h>


void fill_matriz(int size_lin, int size_col, int matriz[][5]);
void show(int size_lin, int size_col, int matriz[][5]);

int main() {
    int matriz[5][5],
        size_lin,
        size_col;


    printf("Digite o tamanho da linha: ");
    scanf("%d", &size_lin);

    printf("Digite o tamanho da coluna: ");
    scanf("%d", &size_col);

    fill_matriz(size_lin, size_col, matriz);
    show(size_lin, size_col, matriz);

    return 0;

}


void fill_matriz(int size_lin, int size_col, int matriz[][5]) {

    for (int lin = 0; lin < size_col; lin++) {
        for (int col = 0; col < size_col; col++) {
            printf("Digite o valor %dX%d: ", lin, col);
            scanf("%d", &matriz[lin][col]);
        }
    }
}


void show(int size_lin, int size_col, int matriz[][5]) {

    for (int lin = 0; lin < size_col; lin++) {
        for (int col = 0; col < size_col; col++) {
            printf("%d ", matriz[lin][col]);
        }
        printf("\n");
    }
}
