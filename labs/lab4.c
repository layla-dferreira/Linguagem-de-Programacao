#include <stdio.h>

/*1) Faça um programa para gerar os N primeiros números da série Fibonacci que tem o
seguinte padrão: 1 1 2 3 5 8 13 ...*/

int main() {
    unsigned int N;
    int fibonacci = 0, a = 0, b = 1;

    printf("Digite um numero: ");
    scanf("%d", &N);

    for(int i = 1; i <= N; i++) {
        fibonacci = a + b;
        a = b;
        b = fibonacci;

        printf("Fibonacci: %d\n", fibonacci);
    } 

    return 0;
}

/*2) Uma empresa deseja registrar e analisar os dados de inscritos em seu processo seletivo
para duas vagas: 1 - Gerência e 2 - Desenvolvimento.
A pessoa candidata deverá informar os seguintes dados:
    - Nome (tamanho máximo de 50 caracteres)
    - Idade
    - Vaga desejada
    - Tempo de experiência
Faça um programa que:
    - Leia os dados da pessoa. O último conjunto de dados, que não deverá ser considerado,
    será informada uma vaga inexistente, ou seja, diferente de 1 e 2.
- Informe, ao final:
    - O total de candidatos para a Vaga 1 - Gerência.
    - O total de candidatos para a Vaga 2 - Desenvolvimento.
    - A média de idade dos candidatos.
    - A maior idade entre os candidatos.
    - A menor idade entre os candidatos.
    - A média de tempo de experiência dos candidatos para a Vaga 1 - Gerência.
    - A média de tempo de experiência dos candidatos para a Vaga 2 - Desenvolvimento.*/

int main() {
    unsigned int tempo1, tempo2, idade, vaga;
    int total1 = 0, total2 = 0, maiorIdade = 0, menorIdade = 1000000, somatorioIdade = 0, totalTempo1 = 0, totalTempo2 = 0;
    double mediaIdade1 = 0, mediaIdade2 = 0, mediaIdade = 0, mediaExperiencia1 = 0, mediaExperiencia2 = 0;
    //char nome[50];

    do {
    printf("Digite 1 para Gerencia e 2 para Desenvolvimento: ");
    scanf("%d", &vaga);
    if(vaga == 1 || vaga == 2){
        printf("Digite a idade: ");
        scanf("%d", &idade);


        if(vaga == 1) {
            //printf("Digite o nome: ");
            //gets(nome);
            printf("Digite o tempo de experiencia em meses: ");
            scanf("%d", &tempo1);
            

            total1 += 1;
            totalTempo1 += tempo1;
            mediaExperiencia1 = totalTempo1 / total1;

        } else if(vaga == 2) {
            //printf("Digite o nome: ");
            //gets(nome);
            printf("Digite o tempo de experiencia em meses: ");
            scanf("%d", &tempo2);
            
            total2 += 1;
            totalTempo2 += tempo2;
            mediaExperiencia2 = totalTempo2 / total2;
        }
        if(idade > maiorIdade) {
            maiorIdade = idade;
        } 
        if(idade < menorIdade) {
            menorIdade = idade;
        }
        somatorioIdade += idade;
        mediaIdade = (somatorioIdade) / (total1 + total2);
    }
        
    } while (vaga == 1 || vaga == 2);

    printf("Total de pessoas da vaga 1-Gerencia: %d,\nTotal de pessoas da vaga 2-Desenvolvimento: %d,\nMedia de idades das vagas: %.2lf,\nMaior idade das vagas: %d,\nMenor idade das vagas: %d,\nMedia da experiencias da vaga 1-gerencia: %.2lf,\nMeida da experiencias da vaga 2-Desenvolvimento: %.2lf", total1, total2, mediaIdade, maiorIdade, menorIdade, mediaExperiencia1, mediaExperiencia2);

    return 0;
}
