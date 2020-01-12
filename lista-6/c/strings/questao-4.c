#include <stdio.h>
#include <string.h>


int main() {
    char string[100];

    printf("Digite uma string: ");
    scanf("%[^\n]", &string);

    for (int i = strlen(string); i > 0; i++) {
        printf("%c\n", string[i]);
    }

    return 0;
}
