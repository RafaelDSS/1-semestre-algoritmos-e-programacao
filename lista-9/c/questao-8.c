#include <stdio.h>


int main() {
    float vetor[10] = {0,5,3,3,5,3,5,6,3,2};

    for (int i = 0; i < 10; i++) {
        printf("vetor[%d] = %p\n", i, &vetor[i]);
    }

    return 0;
}