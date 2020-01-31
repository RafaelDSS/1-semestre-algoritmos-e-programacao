#include <stdio.h>
#include <string.h>


int main() {
    char frase1[100] = "", frase2[100] = "", caracter=' ';
    int max_frase1=0,
        i=0;

    printf("Digite a primeira frase: ");
    scanf("%[^\n]", &frase1);

    scanf("%c");

    printf("Digite a segunda frase: ");
    scanf("%[^\n]", &frase2);

    max_frase1 = strlen(frase1);
    i = 0;

    while (caracter != '\0') {
        caracter = frase2[i];
        frase1[max_frase1] = caracter;

        max_frase1++;
        i++;
    }
    frase1[max_frase1] = '\0';

    printf("%s", frase1);

    return 0;
}
