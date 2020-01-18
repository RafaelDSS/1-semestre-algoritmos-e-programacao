#include <stdio.h>


int perfect_number(int number);

int main() {
    int begin=0,
        end=0;
    
    
    printf("Digite o inicio da sequencia: ");
    scanf("%d", &begin);

    printf("Digite o fim da sequencia: ");
    scanf("%d", &end);

    printf("Os numeros perfeitos entre %d e %d sao: ", begin, end);
    for (int i = begin; i < end; i++) {
        if (perfect_number(i))
            printf("%d ", i);
    }

    return 0;

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