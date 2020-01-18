#include <stdio.h>


int ispositive(int number);

int main() {
    int number;


    printf("Digite um numero: ");
    scanf("%d", &number);

    if (ispositive(number)) 
        printf("O numero %d e positivo\n", number);
    else 
        printf("O numero %d e negativo\n", number);

    return 0;
    
}

int ispositive(int number) {
    if (number < 0)
        return 0;
    
    return 1;
}
