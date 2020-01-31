#include <stdio.h>
#include <string.h>


int main() {
    char frase[50] = "", substring[50] = "";
    int inicio=0,
        fim=0,
        size=0;

    printf("Digite uma frase: ");
    scanf("%[^\n]", frase);

    scanf("%c");

    printf("Digite o indice onde a substring inicia: ");
    scanf("%d", &inicio);

    printf("Digite o indice onde a substring termina: ");
    scanf("%d", &fim);

    size = (fim - inicio) + 1;

    for (int i = 0; i < size; i++) {
        substring[i] = frase[inicio];
        inicio++;
    }

    printf("Subtring: %s\n", substring);
    
    return 0;  
}
