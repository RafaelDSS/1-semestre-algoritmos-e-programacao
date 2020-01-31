#include <stdio.h>


int main() {
    int soma_pares=0;

    for (int i = 85; i < 907; i++) {
        if (i % 2 == 0) {
            printf("%d e par\n", i);
            soma_pares += i;
        }
    }

    printf("A soma dos numeros pares e: %d\n", soma_pares);

    return 0;
}
