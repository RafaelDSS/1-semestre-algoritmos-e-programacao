#include <stdio.h>


int main() {
    int values[50];
    int soma_positivos=0,
        qt_negativos=0;


    for (int i = 0; i < 50; i++) {
        printf("Digite o %d valor: ", i+1);
        scanf("%d", &values[i]);
    }

    for (int i = 0; i < 50; i++) {
        if (values[i] < 0) 
            qt_negativos++;
        else
            soma_positivos += values[i];
    }

    printf("A soma dos numeros positivos e: %d\n", soma_positivos);
    printf("A quantidade de valores negativos e: %d\n", qt_negativos);

    return 0;
}
