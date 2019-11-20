#include <stdio.h>


int main() {
    int voto,
        candidato1=0,
        candidato2=0,
        candidato3=0,
        total_votos=0,
        nulo=0,
        branco=0;


    while (1) {
        printf("Digite o numero do candidato que deseja votar\n\t \
            1. Candidato Jair Rodrigues\n\t \
            2. Candidato Carlos Luiz\n\t \
            3. Candidato Neves Rocha\n\t \
            4. Nulo\n\t \
            5. Branco\n\t \
            6. Resumo da votacao\n");

        printf("Entre com seu voto: ");
        scanf("%d", &voto);

        if (voto == 6)
            break;

        total_votos++;

        if (voto == 1)
            candidato1++;

        else if (voto == 2)
            candidato2++;

        else if (voto == 3)
            candidato3++;

        else if (voto == 4)
            nulo++;

        else if (voto == 5)
            branco++;
    }

    printf("O candidato Jair Rodrigues teve: %d voto(s)\n", candidato1);
    printf("O candidato Carlos Luiz teve: %d voto(s)\n", candidato2);
    printf("O candidato Neves Rocha teve: %d voto(s)\n", candidato3);
    printf("A porcentagem de votos nulos foi: %d%%\n", (nulo * 100) / total_votos);
    printf("A porcentagem de votos brancos foi: %d%%\n", (branco * 100) / total_votos);

    if (candidato1 > candidato2 && candidato1 > candidato3)
        printf("O candidato vencedor foi: Jair Rodrigues\n");

    else if (candidato2 > candidato1 && candidato2 > candidato3)
        printf("O candidato vencedor foi: Carlos Luiz\n");

    else if (candidato3 > candidato1 && candidato3 > candidato2)
        printf("O candidato vencedor foi: Neves Rocha\n");

    else
        printf("Empate");

    return 0;
}
