#include <stdio.h>


int main() {
    char string1[100], string2[100], caracter=' ';
    int flag=1, i;

    printf("Digite a primeira string: ");
    scanf("%[^\n]", &string1);

    printf("Digite a segunda string: ");
    scanf("%[^\n]", &string2);

    while (1) {
        if (string1[i] != string2[i]) {
            flag=0;
            break;
        }
    }

    if (flag) 
        printf("As duas strings sao iguais\n");
    else 
        printf("As duas strings sao diferentes\n");

    return 0;
}
