#include <stdio.h>


int binario(int number);

int main() {
    int number;

    printf("Insira qualquer numero decimal: ");
    scanf("%d", &number);

    printf("%d em binario e: %d\n", number, binario(number));

    return 0;

}

int binario(int number) {
    if (number < 2)
        return number;
 
    return (10 * binario(number / 2)) + number % 2;
}
