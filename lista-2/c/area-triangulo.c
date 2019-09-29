/*
Questão 3: Faça um algoritmo em que o usuário entre com a
base e a altura de um triângulo. Retorne a área do mesmo.
*/

#include <stdio.h>

int main() {
    float base, altura, area;

    printf("Digite a base do triangulo: \n");
    scanf("%f", &base);

    printf("Digite a altura do triangulo: \n");
    scanf("%f", &altura);
    
    area = (base * altura) / 2;

    printf("A area do triangulo e: %.2f", area);

}
