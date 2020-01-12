#include <stdio.h>
#include <string.h>


int main() {
    char frase[100] = "", substring[100] = "";
    char *isub;

    printf("Digite uma frase: ");
    scanf("%[^\n]", frase);

    scanf("%c");

    printf("Digite uma substring: ");
    scanf("%[^\n]", substring);

    isub = strstr(frase, substring);


    if (isub != NULL) {
        printf("A substring esta presente na string\n");
    }
    else {
        printf("A substring nao esta presente na string\n");
    }
    
    return 0;
}
