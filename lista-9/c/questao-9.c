#include <stdio.h>


int main() {
    float matriz[3][3] = {{0,3,3}, {4,4,6}, {7,5,0}};

    for (int i = 0; i < 3; i++) {
        for (int c = 0; c < 3; c++) {
            printf("vetor[%d][%d] = %p\n", i, c, &matriz[i][c]);
        }
    }

    return 0;
}