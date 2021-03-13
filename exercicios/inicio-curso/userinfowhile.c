#include <stdio.h>
#include <ctype.h>
#include <string.h>


int main() {
    long long int cpf, rg;

    int idade = 0, 
        numero_mulher = 0, 
        numero_homem = 0, 
        qt_media = 0, 
        qt_bolsa = 0, 
        qt_sangue = 0, 
        qt_peso = 0, 
        qt_idade = 0, 
        f_altura = 0,
        number_aluno = 1;

    float altura, 
        peso, 
        valor_bolsa, 
        media, 
        imc;

    char sexo, 
        bolsa, 
        matricula;

    char rh_aluno,
         tipo_sangue[4];


    while (number_aluno <= 3) {
        // Aluno 1

        printf("Dados do aluno %d\n", number_aluno);

        printf("Digite a idade: ");
        scanf("%d", &idade);

        printf("Digite seu CPF: ");
        scanf("%lld", &cpf);
        fflush(stdin);

        printf("Digite o sexo\n\tM - Para Mulher\n\tH - Para Homem: ");
        scanf("%c", &sexo);
        sexo = tolower(sexo);
        fflush(stdin);

        printf("Digite a altura: ");
        scanf("%f", &altura);

        printf("Digite o peso: ");
        scanf("%f", &peso);
        fflush(stdin);

        printf("Digite o tipo sanguineo Ex: a, o: ");
        scanf("%s", &tipo_sangue);
        fflush(stdin);

        printf("Digite o fator RH\n\t[-] = Para Negativo\n\t[+] = Para Positivo: ");
        scanf("%c", &rh_aluno);
        fflush(stdin);

        printf("Digite o RG: ");
        scanf("%lld", &rg);
        fflush(stdin);

        printf("Digite\n\tS - Se tiver bolsa\n\tN - Se nao tiver: ");
        scanf("%c", &bolsa);
        bolsa = tolower(bolsa);
        fflush(stdin);

        if (bolsa == 's') {
            printf("Digite o valor da bolsa: ");
            scanf("%f", &valor_bolsa);
             qt_bolsa++;
            fflush(stdin);
        }

        printf("Digite o numero de matricula: ");
        scanf("%s", &matricula);
        fflush(stdin);

        printf("Digite a media: ");
        scanf("%f", &media);
        fflush(stdin);

        imc = peso / (altura * altura);

        if (sexo == 'h')
            numero_homem++;

            if (imc > 20 && imc <= 24.9)
                qt_peso++;

        else if (sexo == 'f')
            numero_mulher++;

            if (imc > 19 && imc <= 23.9)
                qt_peso++;

            if (altura > 1.50)
                f_altura++;
        
        if (strcmp(tipo_sangue, "a") == 0 && rh_aluno == '+')
            qt_sangue++;

        
        if (media > 7.0)
            qt_media++;

        
        if (idade > 17)
            qt_idade++;

        
        // aluno 1
        printf("\n");
        printf("\033[0;31m");
        if (strcmp(tipo_sangue, "a") == 0 && rh_aluno == '+')
            printf("O aluno %d pode doar para: A+, AB+", number_aluno);
        
        else if (strcmp(tipo_sangue, "a") == 0 && rh_aluno == '-')
            printf("O aluno %d pode doar para: A+, A-, AB+, AB-", number_aluno);

        else if (strcmp(tipo_sangue, "b") == 0 && rh_aluno == '+')
            printf("O aluno %d pode doar para: B+, AB+", number_aluno);

        else if (strcmp(tipo_sangue, "b") == 0 && rh_aluno == '-')
            printf("O aluno %d pode doar para: B+, B-, AB+, AB-", number_aluno);

        else if (strcmp(tipo_sangue, "ab") == 0 && rh_aluno == '+')
            printf("O aluno %d pode doar para: AB+", number_aluno);

        else if (strcmp(tipo_sangue, "ab") == 0 && rh_aluno == '-')
            printf("O aluno %d pode doar para: AB+, AB-", number_aluno);

        else if (strcmp(tipo_sangue, "o") == 0 && rh_aluno == '+')
            printf("O aluno %d pode doar para: A+, B+, AB+, O+", number_aluno);
        
        else if (strcmp(tipo_sangue, "o") == 0 && rh_aluno == '-')
            printf("O aluno %d pode doar para todos os tipos", number_aluno);
        printf ("\033[0m");
        printf("\n");

        number_aluno++;
        
    }
    printf("\n");
    printf("\033[0;31m");
    printf("Quantidade de alunos do sexo feminino: %d\n", numero_mulher);
    printf("Quantidade de alunos do sexo masculino: %d\n", numero_homem);
    printf("Quantidade de alunos que tem a media acima de 7.0: %d\n", qt_media);
    printf("Quantidade de alunos que tem a idade maior que 17 anos: %d\n", qt_idade);
    printf("Quantidade de alunos que tem o peso ideal: %d\n", qt_peso);
    printf("Quantidade de alunos que tem bolsa: %d\n", qt_bolsa);
    printf("Quantidade de alunos que tem o tipo sanguineo A+: %d\n", qt_sangue);
    printf("Quantidade de alunos do sexo feminino que tem altura maior que 1.50: %d\n", f_altura);

    return 0;
}
