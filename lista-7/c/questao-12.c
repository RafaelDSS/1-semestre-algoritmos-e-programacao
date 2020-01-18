#include <stdio.h>


int fatorial(int number);

int main() {
    int result=0;


    for (int i = 1; i <= 5; i++) {
        result += fatorial(i) / i;
    }

    printf("A soma da serie e: %d\n", result);

    return 0;

}


int fatorial(int number) {
    int fat=1;

    for (int i = 1; i <= number; i++) {
        fat *= i;
    }

    return fat;
} 
