#include <stdio.h>
#include <string.h>


int main() {
    char books[3][3][30],
        search[30];

    int found_value=0;

    for (int i = 0; i < 3; i++) {
        printf("Dados do livro %d\n", i+1);

        printf("Digite o titulo do livro: ");
        scanf("%s", &books[i][1]);

        printf("Digite a editora do livro: ");
        scanf("%s", &books[i][2]);

        printf("Digite o autor do livro: ");
        scanf("%s", &books[i][2]);
    }

    printf("Escreva o titulo ou o nome do autor: ");
    scanf("%s", &search);

    for (int i = 0; i < 3; i++) {
        if(strcmp(search, books[i][1]) == 0 || strcmp(search, books[i][3]) == 0) {
            found_value = 1;
            break;
        }
    }
    
    if (found_value)
        printf("O livro ja esta no vetor\n");
    
    else
        printf("O livro nao foi encontrado\n");

    return 0;
}
