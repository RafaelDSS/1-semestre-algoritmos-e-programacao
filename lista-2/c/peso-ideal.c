/*
Data: 28/09/2019
Questão 5: Tendo como entrada de dados a altura e o sexo
de uma pessoa, construa um algoritmo que calcule o peso
ideal.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    float altura, peso_ideal;
    int sexo;
    char nome_sexo[2][13] = {"Feminino", "Masculino"};

    printf("Altura: ");
    scanf("%f", &altura);

    printf("Digite:\n[1] para Mulher\n[2] para Homem: \n");
    scanf("%d", &sexo);

    if (sexo == 1) 
        peso_ideal = (62.1 * altura) - 44.7;
    else if (sexo == 2) 
        peso_ideal = (72.7 * altura) - 58;

    printf("Peso ideal para o sexo %s e: %.2f", nome_sexo[sexo - 1], peso_ideal);

    return 0;
    
}
