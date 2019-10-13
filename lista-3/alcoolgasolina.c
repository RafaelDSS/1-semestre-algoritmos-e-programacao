// Data : 11/10/2019

#include <stdio.h>


int main() {
    const float preco_alcool = 4.19; 
    const float preco_gasolina = 4.98; 

    int litros, option;
    float preco, preco_antigo;

    printf("Digite\n\t1 - Para Alcool\n\t2 - Para Gasolina: ");
    scanf("%d", &option);

    printf("Digite a quantidade de litros: ");
    scanf("%d", &litros);

    switch (option) {
        case 1:
            if (litros <= 20) {
                preco_antigo = litros * preco_alcool;
                preco = preco_antigo - (preco_antigo * 0.03);
                printf("%.2f", preco);
            }
            else if (litros > 20) {
                preco_antigo = litros * preco_alcool;
                preco = preco_antigo - (preco_antigo * 0.05);
                printf("%.2f", preco);
            }
            else
                printf("Valor invalido");
            break;
            
        case 2:
            if (litros <= 20) {
                preco_antigo = litros * preco_alcool;
                preco = preco_antigo - (preco_antigo * 0.04);
                printf("%.2f", preco);
            }
            else if (litros > 20) {
                preco_antigo = litros * preco_alcool;
                preco = preco_antigo - (preco_antigo * 0.06);
                printf("%.2f", preco);
            }
            else
                printf("Valor invalido");
            break;

        default:
            printf("Valor invalido");
    }
    return 0;

}
