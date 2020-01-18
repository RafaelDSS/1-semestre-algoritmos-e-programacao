#include <stdio.h>


int isprime(int number);

int main() {
    int number;
    

    printf("Insira um numero positivo: ");
    scanf("%d", &number);

    if (isprime(number))
        printf("O numero %d e primo\n", number);
    else 
        printf("O numero %d nao e primo\n", number);

    return 0;

}

int isprime(int number) {
    int flag = 1;

    for (int i = 2; i < number; i++) {
        flag = 0;
        if (number % i == 0)
            return 0;
    }
    if (flag)
        return 0;

    return 1;
}