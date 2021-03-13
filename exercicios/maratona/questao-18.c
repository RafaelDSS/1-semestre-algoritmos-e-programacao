#include <stdio.h>


int main() {
    float metros;

    printf("Digite um valor em metros: ");
    scanf("%f", &metros);

    printf("Decimetros: %f\n", metros / 10);
    printf("Centimetros: %f\n", metros / 100);
    printf("Milimetros: %f\n", metros / 1000);

    return 0;
}