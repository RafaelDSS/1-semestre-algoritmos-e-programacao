#include <stdio.h>


int main() {
    int inteiro = 5, *a;
    float real = 3.6, *b;
    char caracter = 'W', *c;

    a = &inteiro;
    b = &real;
    c = &caracter;

    printf("Inteiro = %d\n", inteiro);
    printf("Float = %f\n", real);
    printf("Char = %c\n", caracter);

    *a = 47;
    *b = 83.64;
    *c = 'A';

    printf("Inteiro = %d\n", inteiro);
    printf("Float = %f\n", real);
    printf("Char = %c\n", caracter);

    return 0;
}