/*
Data: 28/09/2019
Questão 6: Dado um sistema linear:
ax + by = c;
dx + ey = f;
Pode ser resolvido seguindo indicado abaixo:
x = ce – bf / ae – bd
y = af – cd / ae – bd
Faça um algoritmo que receba os valores para a, b, c, d, e e f, calcule e mostre os valores de x e y.
*/

#include <stdio.h>

int main() {
    float a, b, c, d, e, f, x, y;

    printf("Digite os valores para a, b, c, d, e, f respectivamente: \n");
    scanf("%f%f%f%f%f%f", &a,&b, &c, &d, &e, &f);
    
    x = ((c * e) - (b * f)) / ((a * e) - (b * d));
    y = ((a * f) - (c * d)) / ((a * e) - (b * d));

    printf("x = %.2f\n", x);
    printf("y = %.2f", y);

    return 0;

}
