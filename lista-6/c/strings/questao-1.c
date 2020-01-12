#include <stdio.h>


int main() {
    char sequencia[100];

    printf("Digite uma sequencia de caracteres: ");
    scanf("%[^\n]", &sequencia);

    printf("%s\n", sequencia);

    return 0;
}
