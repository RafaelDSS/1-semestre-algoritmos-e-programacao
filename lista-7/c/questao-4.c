#include <stdio.h>


char conceito(float media);

int main() {
    float media;


    printf("Digite a media: ");
    scanf("%f", &media);

    printf("O conceito da media e: %c\n", conceito(media));

    return 0;

}

char conceito(float media) {
    if (media > 0.0 && media <= 4.9)
        return 'D';
    else if (media <= 6.9)
        return 'C';
    else if (media <= 8.9)
        return 'B';
    else if (media <= 10.0)
        return 'A';
    
    return '0';
}