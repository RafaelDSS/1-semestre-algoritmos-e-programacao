#include <stdio.h>

int main() {
    int valores[20],value, qt_pares=0, qt_impares=0;

    for(int i=0; i < 20; i++) {
        printf("Digite o %d valor: ", i+1);
        scanf("%d", &value);

        valores[i] = value;

        if (value % 2 == 0)
            qt_pares++;
        else 
            qt_impares++;
    }

    printf("Existe %d pares\n", qt_pares);
    printf("Existe %d impares\n", qt_impares);
}