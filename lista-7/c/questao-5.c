#include <stdio.h>
#include <ctype.h>


float peso_ideal(float altura, char sexo);

int main() {
    char sexo;
    float altura;

    printf("Digite sua altura: ");
    scanf("%f", &altura);

    scanf("%c", stdin);

    printf("Digite seu sexo (H ou M): ");
    scanf("%c", &sexo);

    printf("O seu peso ideal e: %.2f\n", peso_ideal(altura, sexo));

    return 0;

}


float peso_ideal(float altura, char sexo) {
    
    switch (tolower(sexo)) {
        case 'h':
            return (72.7 * altura) - 58;
        case 'm':
            return (62.1 * altura) - 44.7;
    }
}