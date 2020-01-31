#include <stdio.h>


int main() {
    int vetor1[10] = {123, 544, 543, 543, 553, 774, 767, 685, 243, 724},
        vetor2[10] = {14, 84, 43, 53, 55, 77, 67, 85, 23, 72},
        vetor3[20],
        index=0;

    for (int i = 0; i < 20; i += 2) {
        vetor3[i] = vetor1[index];
        vetor3[i+1] = vetor2[index];
        index++;
    }
    
    for (int i = 0; i < 20; i++) {
        printf("Vetor3[%d] == %d\n", i, vetor3[i]);
    }

    return 0;
}
