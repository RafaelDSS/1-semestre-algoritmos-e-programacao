#include <stdio.h>


int main() {
    int mat[2][2] = {{2, 5}, {7, 3}};
    int *p = &mat[0][0];


    for (int i = 0; i < 4; i++)
        printf("%d\n", *(p+i));

    return 0;
}