#include <stdio.h>

int main() {
    float alunos[45][2], 
        idade, 
        altura, 
        media_altura, 
        media_idade,
        cont_altura,
        cont_idade;

    for(int i=0; i < 45; i++) {
        printf("Digite a idade do aluno %d: ", i+1);
        scanf("%f", &idade);

        printf("Digite a altura do aluno %d: ", i+1);
        scanf("%f", &altura);

        alunos[i][0] = idade;
        alunos[i][1] = altura;
    }

    for(int i=0; i < 10; i++) {
        idade = alunos[i][0];
        altura = alunos[i][1];

        if (idade < 1.70) {
            media_idade += idade;
            cont_idade++;
        }

        if (altura == 15.0) {
            media_altura += altura;
            cont_altura++;
        }
    }
    printf("Idade media dos alunos com menos de 1.70 de altura: %.2f\n", media_altura / cont_altura);
    printf("Altura media dos alunos com altura igual a 15 anos: %.2f\n", media_idade / cont_idade);
    
}