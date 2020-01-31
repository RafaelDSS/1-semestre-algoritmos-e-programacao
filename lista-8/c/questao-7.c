#include <stdio.h>
#include <string.h>


int reverse(int size, char frase[]);

int main() {
    char frase[30];

    printf("Digite uma frase: ");
    scanf("%s", frase);

    reverse(strlen(frase)-1, frase);
    printf("\n");

    return 0;
}

int reverse(int size, char frase[]) {

    if (size == -1)
        return 0;
    printf("%c", frase[size]);
    return reverse(size-1, frase);
}
