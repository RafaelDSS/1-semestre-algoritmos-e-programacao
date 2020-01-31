#include <stdio.h>
#include <string.h>


int main() {
    char string[100];
    int frequencia[100],
        size=0,
        count=0;


    printf("Digite uma string: ");
    scanf("%s", string);

    size = strlen(string);

    for (int i = 0; i < size; i++) {
        count = 0;

        for (int j = 0; j < size; j++) {
            if (string[i] == string[j]) {
                count++;
                frequencia[j] = -1;
            }
        }
        if (count != 0) {
            frequencia[i] = count;
        }
    }

    for (int i = 0; i < size; i++) {
        if (frequencia[i] != -1)
            printf("O %c ocorreu %d vez(es)\n", string[i], frequencia[i]);
    }
}