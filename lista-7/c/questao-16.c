#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int isperfect(int number);
int armstrong(int number);
int intpow(int base, int exp);

int main() {
   int number;


   printf("Digite qualquer numero: ");
   scanf("%d", &number);

    if (armstrong(number))
        printf("O %d e um numero de Armstrong\n", number);
    else 
        printf("O %d nao e um numero de Armstrong\n", number);


    if (isperfect(number))
        printf("O %d e um numero perfeito\n", number);
    else 
        printf("O %d nao e um numero perfeito\n", number);
    
    return 0;

}

int isperfect(int number) {
    int sum=0;

    for (int i = 1; i < number; i++) {
        if (number % i == 0)
            sum += i;
    }

    if (sum == number)
        return 1;
    
    return 0;

}

int armstrong(int number) {
    char string[20] = " ";
    int size=0,
        sum_pow=0,
        num=0;


    sprintf(string, "%d", number);
    size = strlen(string);

    for (int i = 0; i < size; i++) {
        num = string[i] - '0';
        sum_pow += intpow(num, size);
    }

    if (sum_pow == number)
        return 1;
    
    return 0;

}

int intpow(int base, int exp) {
    int result=base;

    for (int i = 1; i < exp; i++) {
        result *= base;
    }

    return result;

}
