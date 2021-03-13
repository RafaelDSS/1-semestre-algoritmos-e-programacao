#include <stdio.h>


int func_inverte(int *a, int *b);

int main() {
    int a=5, 
        b=8;

    printf("A antes de executar a funcao: %d\n", a);
    printf("B antes de executar a funcao: %d\n", b);

    func_inverte(&a, &b);

    printf("A depois de executar a funcao: %d\n", a);
    printf("B depois de executar a funcao: %d\n", b);

    return 0;

}

int func_inverte(int *a, int *b) {
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;

    printf("A dentro da func: %d\n", *a);
    printf("B dentro da func: %d\n", *b);
}
