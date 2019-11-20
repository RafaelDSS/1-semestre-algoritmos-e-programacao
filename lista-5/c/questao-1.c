#include <stdio.h>


int main() {

    int soma_idade=0,
        idade,
        qt_pessoas=0,
        menor=999,
        maior=0;

    while (1) {
        printf("Digite a %d idade ou 0 para sair: ", qt_pessoas+1);
        scanf("%d", &idade);

        if(idade == 0)
            break;

        qt_pessoas++;
        soma_idade += idade;

        if (idade < menor) 
            menor = idade;

        if (idade > maior)
            maior = idade;

    }

    printf("O numero de pessoas e: %d\n", qt_pessoas);
    printf("A idade media e: %d\n", soma_idade / qt_pessoas);
    printf("A menor idade e: %d\n", menor);
    printf("A maior idade e: %d", maior);

    return 0;
}
