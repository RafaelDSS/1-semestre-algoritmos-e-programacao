#include <stdio.h>


int main() {

    int qt_numeros=0;

    float numero,
        soma_numeros=0;


    while (1) {
        printf("Digite o %d numero ou 0 para sair: ", qt_numeros+1);
        scanf("%f", &numero);

        if(numero == 0)
            break;

        qt_numeros++;
        soma_numeros += numero;
    }

    printf("Foram digitados: %d\n", qt_numeros);
    printf("A idade media e: %.2f\n", soma_numeros / qt_numeros);
   
    return 0;
}
