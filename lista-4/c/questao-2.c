#include <stdio.h>


int main() {
    int valor_inicial, razao;
    int valores_pa[20];

    printf("Digite o valor inicial da PA: ");
    scanf("%d", &valor_inicial);

    printf("Digite a razao da PA: ");
    scanf("%d", &razao);

    for (int i = 0; i < 20; i++) {
        valores_pa[i] = valor_inicial;
        valor_inicial += razao;
    }
}