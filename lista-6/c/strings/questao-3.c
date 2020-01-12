#include <stdio.h>
#include <string.h>


int main() {
    char string[100], caracter=' ';
    int cont=0;

    printf("Digite uma string: ");
    scanf("%[^\n]", &string);

    for (int i = 0; i < strlen(string); i++) {
        printf("%c\n", string[i]);
    }

    return 0;
}
