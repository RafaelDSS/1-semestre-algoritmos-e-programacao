#include <stdio.h>
#include <string.h>


int main() {
    int option, valor1, valor2;
    float salario;
    char frase[30];
    char caracter;
    int cont = 0;

    printf("Digite uma opcao \
        \n\t1 - Calculadora \
        \n\t2 - Conversao de salario \
        \n\t3 - Descobrir palavras \
        \n\t0 - Sair: ");

    scanf("%d", &option);

    switch (option) {
        case 1:
            printf("Digite uma opcao \
                \n\t1 - Soma \
                \n\t2 - Subtracao \
                \n\t3 - Divisao \
                \n\t4 - Multiplicacao: ");
            scanf("%d", &option);

            printf("Digite o primeiro valor: ");
            scanf("%d", &valor1);

            printf("Digite o segundo valor: ");
            scanf("%d", &valor2);

            switch (option) {
                case 1:
                    printf("%d + %d = %d\n", valor1, valor2, valor1 + valor2);
                    break;

                case 2:
                    printf("%d - %d = %d\n", valor1, valor2, valor1 - valor2);
                    break;

                case 3:
                    printf("%d / %d = %d\n", valor1, valor2, valor1 / valor2);
                    break;

                case 4:
                    printf("%d * %d = %d\n", valor1, valor2, valor1 * valor2);
                    break;

                default:
                    printf("Opcao invalida\n");
            }
            break;

        case 2:

            printf("Digite seu salario: ");
            scanf("%f", &salario);

            printf("Deseja um aumento de \
                \n\t1 - Tenete 15%% \
                \n\t2 - Major 25%% \
                \n\t3 - Coronel 45%%: ");

            scanf("%d", &option);

            if (option == 1) 
                printf("A conversao do salario e: %.2f\n", salario + (salario * 0.15));
            else if (option == 2)
                printf("A conversao do salario e: %.2f\n", salario + (salario * 0.25));
            else if (option == 3)
                printf("A conversao do salario e: %.2f\n", salario + (salario * 0.45));
            else 
                printf("Opcao inavlida\n");
            
            break;

        case 3:
            printf("Digite uma frase: ");
            fflush(stdin);
            gets(frase);

            printf("Digite um caracter a ser procurado: ");
            scanf("%c", &caracter);

            for (int i = 0; i < 30; i++) {
                if (frase[i] == caracter)
                    cont++;
            }

            if (cont > 0)
                printf("O caracter consta no vetor %d\n", cont);
            else
                printf("O caracter nao conta no vetor\n");
                    break;

                case 0:
                    return 0;
                    break;

                default:
                    printf("Opcao invalida\n");
    }
    return 0;
}
