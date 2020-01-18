#include <stdio.h>


int n1, n2;

void troca();

int main() {

    printf("Insira o primeiro numero: ");
    scanf("%d", &n1);

    printf("Insira o segundo numero: ");
    scanf("%d", &n2);

    printf("Antes de trocar: n1=%d, n2=%d\n", n1, n2);
    troca();
    printf("Apos a troca: n1=%d, n2=%d\n", n1, n2);

    return 0;

}

void troca() {
    int aux;

    aux = n1;
    n1 = n2;
    n2 = aux;
}
