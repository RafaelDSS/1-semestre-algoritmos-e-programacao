/*
Data: 28/09/2019
Questão 4: Faça um algoritmo que leia três notas de um
aluno, calcule e escreva a média final deste aluno.
Considerar que a média é ponderada e que o peso das
notas é 2, 3 e 5. 
*/

#include <stdio.h>

int main() {
    float n1, n2, n3, media;

    printf("Digite tres notas: \n");
    scanf("%f%f%f", &n1, &n2, &n3);
    
    media = ((n1 * 2) + (n2 * 3) + (n3 * 5)) / 10;

    printf("A media final e: %.1f", media);

    return 0;

}
