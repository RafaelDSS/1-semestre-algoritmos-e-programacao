#include <stdio.h>


int main() {
    char matriz[5][30] = {""};

    for (int i = 0; i < 5; i++) {
        printf("Digite a string %d: ", i+1);
        scanf("%[^\n]", matriz[i]);
        scanf("%c");
    }

    for (int i = 0; i < 5; i++) {
        printf("%d - %s\n", i+1, matriz[i]);
    }
    
    return 0;
}