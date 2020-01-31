#include <stdio.h>


int isprime(int number, int begin);

int main() {
    int number;

    printf("Insira qualquer numero decimal: ");
    scanf("%d", &number);

    if (isprime(number, 2))
        printf("%d e primo\n", number);
    else 
        printf("%d nao e primo\n", number);


}

int isprime(int number, int begin) {
    if (number < 2)
        return 0;
    if (begin == number)
        return 1;
    else {
        if ((number % begin) == 0)
            return 0;
        else
            return isprime(number, begin+1);
    }
 }
