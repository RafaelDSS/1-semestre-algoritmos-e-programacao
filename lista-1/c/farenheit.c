// Data: 23/09/2019

#include <stdio.h>


int main() {
    float celsius, farenheit;

    printf("Celsius: ");
    scanf("%f", &celsius);

    farenheit = ((9 * celsius) / 5) + 32;
    printf("Farenheit: %.2f", farenheit);

    return 0;
    
}
