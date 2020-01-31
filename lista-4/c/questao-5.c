#include <stdio.h>
#include <locale.h>


int main() {
    setlocale(LC_CTYPE, "Portuguese");

    int qt_negativos=0, soma_positivos=0, valor, value_search, cont=0;
    int valores[50];

    for(int i=0; i < 50; i++) {
        printf("Digite o %d valor: ", i+1);
        scanf("%d", &valor);

        valores[i] = valor;
    }

    for (int i=0; i < 50; i++) {
        valor = valores[i];

        if (valor > 0)
            soma_positivos += valor;
        else 
            qt_negativos++;
    }

    printf("A soma dos numeros inteiros positivos e: %d\n", soma_positivos);
    printf("A quantidade de valores negativos e: %d", qt_negativos);

    return 0;

}