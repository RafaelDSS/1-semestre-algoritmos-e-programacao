// Data : 11/10/2019

#include <stdio.h>


int main (){
    int idade;

    printf("Digite a idade:/n");
    scanf("%d", idade);

    if (idade >= 5 && idade <= 7)
        printf("Infantil A:\n");
    
    else if (idade <=10)
        printf("Infantil B:\n");
    
    else if (idade <= 13)
        printf("Juvenil A:\n");

    else if (idade <= 17)
        printf("Juvenil B:\n");
    
    else if (idade > 18)
        printf("Adulto:\n");
    
    return 0;

}
