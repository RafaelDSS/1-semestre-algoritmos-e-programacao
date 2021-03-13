#include <stdio.h>


void funcao_soma(int a, int b, int *soma);

int main() { 
    int a = 12,
        b = 5;
    int soma_num;

    funcao_soma(a, b, &soma_num);

    printf("Soma de %d e %d = %d\n", a, b, soma_num);

}

void funcao_soma(int a, int b, int *soma) {
    *soma = a + b;
}
