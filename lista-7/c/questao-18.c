#include <stdio.h>
#include <string.h>


int e_anagrama(char string1[], char string2[]);

int main() {
    char string1[40],
        string2[40],
        str1[40],
        str2[40];

    printf("Insira a primeira string: ");
    scanf("%s", string1);

    printf("Insira a segunda string: ");
    scanf("%s", string2);

    strcpy(str1, string1);
    strcpy(str2, string2);

    if (e_anagrama(string1, string2))
        printf("%s e %s sao anagramas\n", str1, str2);
    else 
        printf("%s e %s nao sao anagramas\n", str1, str2);

    
}

int e_anagrama(char string1[], char string2[]) {
    int size1=0,
        size2=0;

     size1 = strlen(string1);
     size2 = strlen(string2);

    if (size1 != size2)
        return 0;

    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size1-1; j++) {
            if (string1[j] > string1[j+1]) {
                int aux;

                aux = string1[j];
                string1[j] = string1[j+1];
                string1[j+1] = aux;
            }
            if (string2[j] > string2[j+1]) {
                int aux;
                
                aux = string2[j];
                string2[j] = string2[j+1];
                string2[j+1] = aux;
            }
        }
    }

    if (!strcmp(string1, string2))
        return 1;
    
    return 0;
}
