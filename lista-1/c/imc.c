// Data: 23/09/2019

#include <stdio.h>
#include <math.h>


int main() {
    float peso, altura, imc;

    printf("Peso: ");
    scanf("%f", &peso);

    printf("Altura: ");
    scanf("%f", &altura);

    imc = pow(peso / altura, 2);
    printf("IMC: %f", imc);

    return 0;
    
}
