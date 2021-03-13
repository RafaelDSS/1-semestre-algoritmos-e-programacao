#include <stdio.h>


int main() {
    int valores[20],
        qt_pares=0;

    for (int i = 0; i < 20; i++) {
        printf("Digite o valor %d: ", i+1);
        scanf("%d", &valores[i]);
    }

    for (int i = 0; i < 20; i++) {
        printf("valores[%d] = %d\n", i, valores[i]);
    }

    for (int i = 0; i < 20; i++) {
        if (valores[i] % 2 == 0) {
            qt_pares++;
        }
    }

    printf("Exite %d valores pares\n", qt_pares);

    return 0;
}