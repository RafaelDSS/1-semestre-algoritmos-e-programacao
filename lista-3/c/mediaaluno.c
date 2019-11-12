// Data : 11/10/2019

#include <stdio.h>


int main() {
    float n1, n2, n3, media;

    printf("Digite tres notas: \n");
    scanf("%f%f%f", &n1, &n2, &n3);
    
    media = (n1 + n2 + n3) / 3;

    if (media > 0 && media < 7.0) {
        printf("Sua media e: %.1f\n", media);
        printf("Voce foi reprovado");
    }
    else if (media < 9.9) {
        printf("Sua media e: %.1f\n", media);
        printf("Voce foi aprovado");
    }
    else if (media == 10.0) {
        printf("Sua media e: %.1f\n", media);
        printf("Parabens voce foi aprovado");
    }
    else 
        printf("Voce pode ter digitado alguma nota errada");
        
    return 0;

}
