#include <stdio.h>
#include <string.h>


int main() {
    char frase[50] = "", palavra[50] = "";
    int size=0,
        count=0;

    printf("Digite uma frase: ");
    scanf("%[^\n]", frase);

    scanf("%c");

    printf("Digite uma palavra: ");
    scanf("%[^\n]", palavra);

    size = strlen(palavra);

    for (int i = 0; i < strlen(frase); i++) {
        int qt=0;
        for (int j = i, c=0; j < size+i; j++, c++) {
            if (frase[j] == palavra[c] && j < strlen(frase)) {
                qt++;
            }
        }
        if (qt == size) {
            count++;
        }
    }

    printf("Quantidades de vezes que [%s] ocorre na string: %d\n", palavra, count);
    
    return 0;  
}
