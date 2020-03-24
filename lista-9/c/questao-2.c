#include <stdio.h>


int main() {
    int a, b;


    if (&a > &b)
        printf("O maior endereço e: %p\n", &a);
    else
        printf("O maior endereço e: %p\n", &b);

    return 0;

}