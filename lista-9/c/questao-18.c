#include <stdio.h>


void calc_esfera(float R, float *area, float *volume);

int main() {
    float area, volume;

    calc_esfera(10, &area, &volume);

    printf("A area e: %.4f\n", area);
    printf("O volume e: %.4f\n", volume);

    return 0;

}

void calc_esfera(float R, float *area, float *volume) {
    *area = 4 * 3.14 * (R*R);
    *volume = (4/3) * 3.14 * (R*R*R);
}
