#include <stdio.h>

int age_to_days(int years, int months, int days);

int main() {
    int years,
        months,
        days;

    printf("Digite sua idade: ");
    scanf("%d", &years);

    printf("Digite os meses: ");
    scanf("%d", &months);

    printf("Digite os dias: ");
    scanf("%d", &days);

    printf("Sua idade em dias e: %d\n", age_to_days(years, months, days));
}

int age_to_days(int years, int months, int days) {
    int total_days=0;

    total_days = total_days + (years * 365);
    total_days = total_days + (months * 30);

    return  total_days + days;
}
