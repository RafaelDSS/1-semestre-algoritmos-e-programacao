#include <stdio.h>


int main() {
    int a=5,
        b=15,
        *pa, 
        *da;

    pa = &a;
    da = &b;

    *pa = *da;
    

    printf("a = %d\n", a);
    printf("&a = %p\n", &a);
    printf("&pa = %p\n", pa);
    printf("*pa = %d\n", *pa);
    printf("*da = %d\n", *da);

    return 0;
}