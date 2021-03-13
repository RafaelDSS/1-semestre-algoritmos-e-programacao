// Data: 23/09/2019

#include <stdio.h>


int main() {
    float celsius[25], farenheit[25];
    int i;

    for (i = 0; i < 25; i++) {
        printf("Digite uma temperatura em Celsius: ");
        scanf("%f", &celsius[i]);
    }

    for (i = 0; i < 25; i++) {
        farenheit[i] = ((9 * celsius[i]) / 5) + 32;
        printf("Farenheit: %.2f\nCelsius: %.2f\n", farenheit[i], celsius[i]);

    }

    return 0;
    
}
