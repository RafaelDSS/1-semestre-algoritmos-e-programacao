#include <stdio.h>
#include <math.h>
#include <locale.h>


int main() {
    setlocale(LC_CTYPE, "portuguese");
    float num1, num2, imc, peso, altura;
    int option, num3, exp;

    printf("Menu 1\n\t1 - IMC\n\t2 - calculadora\n\t0 - sair: ");
    scanf("%d", &option);

    if (option == 1) {
        printf("Menu 2\n\t1 - Para Homem\n\t2 - Para Mulher: ");
        scanf("%d", &option);
        
        if (option == 1) {
            printf("Digite sua altura: \n");
            scanf("%f", &altura);

            printf("Digite seu peso: \n");
            scanf("%f", &peso);

            imc = peso / (altura * altura);

            if (imc > 0 && imc <= 20)
                printf("Abaixo do normal.");

            else if (imc <= 24.9)
                printf("Normal");

            else if (imc <= 29.9)
                printf("Obesidade leve");

            else if (imc <= 39.9)
                printf("Obesidade Moderada");

            else if (imc >= 43)
                printf("Obesidade morbida");

            else 
                printf("Valores invalidos");
        }
        else if (option == 2){
            printf("Digite sua altura: \n");
            scanf("%f", &altura);

            printf("Digite seu peso: \n");
            scanf("%f", &peso);

            imc = peso / (altura * altura);

            if (imc > 0 && imc <= 19)
                printf("Abaixo do normal.");

            else if (imc <= 23.9)
                printf("Normal");

            else if (imc <= 28.9)
                printf("Obesidade leve");

            else if (imc <= 38.9)
                printf("Obesidade Moderada");

            else if (imc >= 39)
                printf("Obesidade morbida");

            else 
                printf("Valores invalidos");
        }
        else if (option == 0)
            return 0;

    }
    else if (option == 2) {
        printf("Menu 2\n\t1 - Soma\n\t2 - Subtração\n\t3 - Multiplicação\n\t4 - Divisão\n\t5 - Raiz Quadrada\n\t6 - Log\n\t7 - Log10\n\t8 - Potenciação:\n\t0 - Sair: ");
        scanf("%d", &option);

        switch (option) {
            case 0:
                return 0;

            case 1:
                printf("Digite dois valores: ");
                scanf("%f%f", &num1, &num2);
                
                printf("O resultado é: %.2f", num1 + num2);
                break;

            case 2:
                printf("Digite dois valores: ");
                scanf("%f%f", &num1, &num2);
                
                printf("O resultado é: %.2f", num1 - num2);
                break;
            
            case 3:
                printf("Digite dois valores: ");
                scanf("%f%f", &num1, &num2);
                
                printf("O resultado é: %.2f", num1 * num2);
                break;

            case 4:
                printf("Digite dois valores: ");
                scanf("%f%f", &num1, &num2);
                
                if (num2 > 0) 
                    printf("O resultado é: %.2f", num1 / num2);
                else
                    printf("Divisão por zero é inválida.");
                break;

            case 5:
                printf("Digite um valor: ");
                scanf("%d", &num3);

                printf("O resultado é: %.2f", sqrt(num3));
                break;

            case 6:
                printf("Digite um valor: ");
                scanf("%d", &num3);

                printf("O resultado é: %.2f", log(num3));
                break;

            case 7:
                printf("Digite um valor: ");
                scanf("%d", &num3);

                printf("O resultado é: %.2f", log10(num3));
                break;

            case 8:
                printf("Menu 3\n\t1 - Quadrado\n\t2 - Cubo\n\t3 - Escolha do expoente\n\t0 - sair: ");
                scanf("%d", &option);

                if (option == 1) {
                    printf("Digite um valor: ");
                    scanf("%d", &num3);

                    printf("O resultado é: %.2f", pow(num3, 2));
                }
                else if (option == 2) {
                    printf("Digite um valor: ");
                    scanf("%d", &num3);

                    printf("O resultado é: %.2f", pow(num3, 3));
                }
                else if (option == 3) {
                    printf("Digite um valor: ");
                    scanf("%d", &num3);
                    printf("Digite o expoente: ");
                    scanf("%d", &exp);

                    printf("O resultado é: %.2f", pow(num3, exp));
                }
                else if (option == 0)
                    return 0;

                else
                    printf("Valores inválidos.");
                break;
            
            default:
                printf("Valores Inválidos.");
                break;
        }

    }
    else if (option == 0)
        return 0;
    else 
        printf("Valor Inválido");
}
