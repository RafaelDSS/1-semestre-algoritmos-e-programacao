/*
Data: 28/09/2019
Questão 1: Faça um algoritmo que receba 3 notas digitadas
pelo usuário. Retorne a média dessas notas. 
*/

#include <stdio.h>

int main() {
    float n1, n2, n3, media;

    printf("Digite tres notas: \n");
    scanf("%f%f%f", &n1, &n2, &n3);
    
    media = (n1 + n2 + n3) / 3;

    printf("Sua media e: %.1f", media);

}
