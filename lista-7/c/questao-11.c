#include <stdio.h>


int ispar(int number);

int main() {
    int number;


    printf("Digite qualquer numero: ");
    scanf("%d", &number);

    if (ispar(number))
        printf("O numero digitado e par\n");
    else 
        printf("O numero digitado e impar\n");

    return 0;

}

int ispar(int number) {
    if (number % 2 == 0)
        return 1;
    
    return 0;
}