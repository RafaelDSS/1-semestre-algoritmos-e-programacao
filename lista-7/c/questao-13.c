#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int binary(int number);

int main() {
    int number;


    printf("Digite qualquer valor decimal: ");
    scanf("%d", &number);

    printf("O valor binario e: %d", binary(number));

}


int binary(int number) {
    int size=0;
    char numbers[10];
    int num=number,
        mod=0,
        index=0;

    while (num != 0) {
        mod = num % 2;
        num /= 2;
        numbers[index] = mod + 48;
        index++;

    }
    size = strlen(numbers);
    for (int i=0, c=size - 1; i < size/2; i++, c--) {
        char aux;

        aux = numbers[i];
        numbers[i] = numbers[c];
        numbers[c] = aux;
        printf("%d", size/2);
    }
    numbers[size] = '\0';
    return atoi(numbers);
}
