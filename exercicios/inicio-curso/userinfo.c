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
        f_altura = 0;

    float altura, 
        peso, 
        valor_bolsa, 
        media, 
        imc;

    char sexo, 
        bolsa, 
        matricula;

    char rh_aluno1,
         rh_aluno2,
         rh_aluno3,
         tipo_sangue1[4],
         tipo_sangue2[4],
         tipo_sangue3[4];



    // Aluno 1

    printf("Dados do aluno 1\n");

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
    scanf("%s", &tipo_sangue1);
    fflush(stdin);

    printf("Digite o fator RH\n\t[-] = Para Negativo\n\t[+] = Para Positivo");
    scanf("%c", &rh_aluno1);
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

        if (imc <= 24.9)
            qt_peso += 1;

    else if (sexo == 'f')
        numero_mulher++;

        if (imc <= 23.9)
            qt_peso++;

        if (altura > 1.50)
            f_altura++;
    
    
    if (bolsa == 's')
        qt_bolsa++;

    
    if (strcmp(tipo_sangue1, "a") == 0 && rh_aluno1 == '+')
        qt_sangue++;

    
    if (media > 7.0)
        qt_media++;

    
    if (idade > 17)
        qt_idade++;

    // Aluno 2

    printf("Dados do aluno 2\n");

    printf("Digite a idade: ");
    scanf("%d", &idade);
    fflush(stdin);

    printf("Digite seu CPF: ");
    scanf("%lld", &cpf);
    fflush(stdin);

    printf("Digite o sexo\n\tM - Para Mulher\n\tH - Para Homem: ");
    scanf("%c", &sexo);
    sexo = tolower(sexo);
    fflush(stdin);

    printf("Digite a altura: ");
    scanf("%f", &altura);
    fflush(stdin);

    printf("Digite o peso: ");
    scanf("%f", &peso);
    fflush(stdin);

    printf("Digite o tipo sanguineo Ex: a, o: ");
    scanf("%s", &tipo_sangue1);
    fflush(stdin);

    printf("Digite o fator RH\n\t[-] = Para Negativo\n\t[+] = Para Positivo");
    scanf("%c", &rh_aluno2);
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

        if (imc <= 24.9)
            qt_peso++;

    else if (sexo == 'f')
        numero_mulher++;

        if (imc <= 23.9)
            qt_peso++;

        if (altura > 1.50)
            f_altura++;
    
    
    if (bolsa == 's')
        qt_bolsa++;

    
    if (strcmp(tipo_sangue2, "a") == 0 && rh_aluno2 == '+')
        qt_sangue++;

    
    if (media > 7.0)
        qt_media++;

    
    if (idade > 17)
        qt_idade++;

    
    // Aluno 3
    
    printf("Dados do aluno 3\n");

    printf("Digite a idade: ");
    scanf("%d", &idade);
    fflush(stdin);

    printf("Digite seu CPF: ");
    scanf("%lld", &cpf);
    fflush(stdin);

    printf("Digite o sexo\n\tM - Para Mulher\n\tH - Para Homem: ");
    scanf("%c", &sexo);
    sexo = tolower(sexo);
    fflush(stdin);

    printf("Digite a altura: ");
    scanf("%f", &altura);
    fflush(stdin);

    printf("Digite o peso: ");
    scanf("%f", &peso);
    fflush(stdin);

    printf("Digite o tipo sanguineo Ex: a, o: ");
    scanf("%s", &tipo_sangue3);
    fflush(stdin);

    printf("Digite o fator RH\n\t[-] = Para Negativo\n\t[+] = Para Positivo");
    scanf("%c", &rh_aluno3);
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

        if (imc <= 24.9)
            qt_peso++;

    else if (sexo == 'f')
        numero_mulher++;

        if (imc <= 23.9)
            qt_peso++;

        if (altura > 1.50)
            f_altura++;
    
    
    if (bolsa == 's')
        qt_bolsa++;

    
    if (strcmp(tipo_sangue3, "a") == 0 && rh_aluno3 == '+')
        qt_sangue++;

    
    if (media > 7.0)
        qt_media++;

    
    if (idade > 17)
        qt_idade++;



    printf("Quantidade de alunos do sexo feminino: %d\n", numero_mulher);
    printf("Quantidade de alunos do sexo masculino: %d\n", numero_homem);
    printf("Quantidade de alunos que tem a media acima de 7.0: %d\n", qt_media);
    printf("Quantidade de alunos que tem a idade maior que 17 anos: %d\n", qt_idade);
    printf("Quantidade de alunos que tem o peso ideal: %d\n", qt_peso);
    printf("Quantidade de alunos que tem bolsa: %d\n", qt_bolsa);
    printf("Quantidade de alunos que tem o tipo sanguineo A+: %d\n", qt_sangue);
    printf("Quantidade de alunos do sexo feminino que tem altura maior que 1.50: %d\n", f_altura);
    
    // aluno 1

    if (strcmp(tipo_sangue1, "a") == 0 && rh_aluno3 == '+')
        printf("O aluno 1 pode doar para: A+, AB+");
    
    else if (strcmp(tipo_sangue1, "a") == 0 && rh_aluno1 == '-')
        printf("O aluno 1 pode doar para: A+, A-, AB+, AB-");

    else if (strcmp(tipo_sangue1, "b") == 0 && rh_aluno1 == '+')
        printf("O aluno 1 pode doar para: B+, AB+");

    else if (strcmp(tipo_sangue1, "b") == 0 && rh_aluno1 == '-')
        printf("O aluno 1 pode doar para: B+, B-, AB+, AB-");

    else if (strcmp(tipo_sangue1, "ab") == 0 && rh_aluno1 == '+')
        printf("O aluno 1 pode doar para: AB+");

    else if (strcmp(tipo_sangue1, "ab") == 0 && rh_aluno1 == '-')
        printf("O aluno 1 pode doar para: AB+, AB-");

    else if (strcmp(tipo_sangue1, "o") == 0 && rh_aluno1 == '+')
        printf("O aluno 1 pode doar para: A+, B+, AB+, O+");
    
    else if (strcmp(tipo_sangue1, "o") == 0 && rh_aluno1 == '-')
        printf("O aluno 1 pode doar para todos os tipos");

    printf("\n");
    // aluno 2
    
    if (strcmp(tipo_sangue2, "a") == 0 && rh_aluno2 == '+')
        printf("O aluno 2 pode doar para: A+, AB+");
    
    else if (strcmp(tipo_sangue2, "a") == 0 && rh_aluno2 == '-')
        printf("O aluno 2 pode doar para: A+, A-, AB+, AB-");

    else if (strcmp(tipo_sangue2, "b") == 0 && rh_aluno2 == '+')
        printf("O aluno 2 pode doar para: B+, AB+");

    else if (strcmp(tipo_sangue2, "b") == 0 && rh_aluno2 == '-')
        printf("O aluno 2 pode doar para: B+, B-, AB+, AB-");

    else if (strcmp(tipo_sangue2, "ab") == 0 && rh_aluno2 == '+')
        printf("O aluno 2 pode doar para: AB+");

    else if (strcmp(tipo_sangue2, "ab") == 0 && rh_aluno2 == '-')
        printf("O aluno 2 pode doar para: AB+, AB-");

    else if (strcmp(tipo_sangue2, "o") == 0 && rh_aluno2 == '+')
        printf("O aluno 2 pode doar para: A+, B+, AB+, O+");
    
    else if (strcmp(tipo_sangue2, "o") == 0 && rh_aluno2 == '-')
        printf("O aluno 2 pode doar para todos os tipos");

    printf("\n");
    // aluno 3
    
    if (strcmp(tipo_sangue3, "a") == 0 && rh_aluno3 == '+')
        printf("O aluno 3 pode doar para: A+, AB+");
    
    else if (strcmp(tipo_sangue3, "a") == 0 && rh_aluno3 == '-')
        printf("O aluno 3 pode doar para: A+, A-, AB+, AB-");

    else if (strcmp(tipo_sangue3, "b") == 0 && rh_aluno3 == '+')
        printf("O aluno 3 pode doar para: B+, AB+");

    else if (strcmp(tipo_sangue3, "b") == 0 && rh_aluno3 == '-')
        printf("O aluno 3 pode doar para: B+, B-, AB+, AB-");

    else if (strcmp(tipo_sangue3, "ab") == 0 && rh_aluno3 == '+')
        printf("O aluno 3 pode doar para: AB+");

    else if (strcmp(tipo_sangue3, "ab") == 0 && rh_aluno3 == '-')
        printf("O aluno 3 pode doar para: AB+, AB-");

    else if (strcmp(tipo_sangue3, "o") == 0 && rh_aluno3 == '+')
        printf("O aluno 3 pode doar para: A+, B+, AB+, O+");
    
    else if (strcmp(tipo_sangue3, "o") == 0 && rh_aluno3 == '-')
        printf("O aluno 3 pode doar para todos os tipos");
    
    return 0;

}
