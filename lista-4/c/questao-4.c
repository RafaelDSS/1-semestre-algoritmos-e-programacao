#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>


int main() {
    srand(time(NULL));
    
    int random_values[50];
    int value;

    for (int i = 0; i < 50; i++) {
        random_values[i] = rand() % 200;
    }

    printf("Digite um valor a ser procurado no vetor: ");
    scanf("%d", &value);

    for (int i = 0; i < 50; i++) {
        if (random_values[i] == value) {
            printf("O valor esta no vetor\n");
            printf("Ele esta na posicao %d\n", i);
            break;
        }
        else 
            printf("Ele nao esta no vetor");
            break;
    }
}