#include <stdio.h>


int main() {
    int valor_inicial, razao;
    int valores_pg[20];

    printf("Digite o valor inicial da PG: ");
    scanf("%d", &valor_inicial);

    printf("Digite a razao da PG: ");
    scanf("%d", &razao);

    for (int i = 0; i < 20; i++) {
        valores_pg[i] = valor_inicial;
        valor_inicial += razao;
    }
}