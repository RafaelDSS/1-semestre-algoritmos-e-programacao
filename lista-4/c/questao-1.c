#include <stdio.h>
#include <locale.h>


int main() {
    setlocale(LC_CTYPE, "Portuguese");

    int maior, menor=999999999, valor, value_search, cont=0;
    int valores[100];


    for(int i=0; i < 100; i++) {
        printf("Digite o %d valor: ", i+1);
        scanf("%d", &valor);

        valores[i] = valor;

        if (valor < menor)
            menor = valor;
        
        if (valor > maior)
            maior = valor;

    }
    printf("O maior valor e: %d\n", maior);
    printf("O menor valor e: %d\n", menor);

    printf("Digite um valor a ser procurado  no vetor: ");
    scanf("%d", &value_search);

    for (int i=0; i < 100; i++) {
        if (valores[i] == value_search) {
            cont++;
        }
    }

    if (cont > 0) {
        printf("O valor %d esta no vetor\n", value_search);
        printf("Ele se repete %d vez(es)", cont);
    }
    else 
        printf("Ele nao esta no vetor");

    return 0;

}
