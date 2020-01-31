#include <stdio.h>


int potencia(int base, int exp);

int main() {
    int base, exp;


    printf("Insira o valor base: ");
    scanf("%d", &base);

    printf("Insira o valor da potência: ");
    scanf("%d", &exp);

    printf("O valor da potencia e: %d\n", potencia(base, exp));

    return 0;
}

int potencia(int base, int exp) {
    if (exp == 0)
		return 1;
	return base * potencia(base, exp-1);
}
