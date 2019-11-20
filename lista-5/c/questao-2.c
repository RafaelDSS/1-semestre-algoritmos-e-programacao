#include <stdio.h>


int main() {
    float celsius;

    for (int i = 50; i <= 150; i++) {
        celsius = ((i-32) * 5) / 9;
        printf("Fahrenheit = %d para Celsius = %.2f\n", i, celsius);
    }

    return 0;
}
