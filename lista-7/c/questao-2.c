#include <stdio.h>


int perfect_number(int number);

int main() {
    int number;
    

    printf("Digite um numero: ");
    scanf("%d", &number);

    if (perfect_number(number))
        printf("O numero %d e perfeito\n", number);
    else 
        printf("O numero %d e nao perfeito\n", number);

}

int perfect_number(int number) {
    int sum=0;

    for (int i = 1; i < number; i++) {
        if (number % i == 0)
            sum += i;
    }

    if (sum == number)
        return 1;
    
    return 0;
}
