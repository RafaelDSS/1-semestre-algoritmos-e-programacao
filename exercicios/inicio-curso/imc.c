#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {
    float imc, peso, altura;

    printf("Digite sua altura: \n");
    scanf("%f", &altura);

    printf("Digite seu peso: \n");
    scanf("%f", &peso);

    imc = peso / (altura * altura);

    if (imc > 0 && imc <= 18.5)
        printf("Abaixo do peso.");

    else if (imc <= 24.9)
        printf("Peso ideal (Parabens)");

    else if (imc <= 29.9)
        printf("Levemente acima do peso");

    else if (imc <= 34.9)
        printf("Obesidade grau I");

    else if (imc <= 39.9)
        printf("Obesidade grau II (severa)");
    
    else if (imc >= 40)
        printf("Obesidade grau III (morbida)");
    
    else 
        printf("Valores invalidos");
}