#include <stdio.h>

//1) Fazer um programa para calcular a soma dos números pares que sejam menores do que N. N deve ser informado pelo usuário.
/*int main() {
    int N, soma = 0;

    printf("Digite um numero: ");
    scanf("%d", &N);

    for(int i = 0; i <= N; i++) {
        if(i%2 == 0) {
            soma = soma + i;
        }
    }
    printf("Soma: %d", soma);
    return 0;
}*/

//2) Fazer um programa para ler as notas dos alunos de uma turma. O programa deverá informar ao final: a maior nota, a menor nota e a nota média. 
//A última nota a ser informada, que não deverá ser considerada nos cálculos, conterá um valor menor do que zero.
/*int main() {
    double nota, maior = 0, menor = 0, media = 0, i = 0, notaTotal;

    do {
        printf("Digite a nota: ");
        scanf("%lf", &nota);

        if(nota > 0) {
            if(nota > maior) {
                maior = nota;
            } else  {
                menor = nota;
            }
            notaTotal = notaTotal + nota;
            i++;
        }
    } while (nota > 0);

    media = notaTotal / i;  
    
    printf("Maior nota: %.2lf,\nMenor nota: %.2lf,\nMedia: %.2lf", maior, menor, media);

    return 0;
}*/

//3) Calcular o maior peso, o menor peso e a media;
/*int main() {
    int cod, codMaior = 0, codMenor = 0;
    double peso, maior = 0, menor = 1000, media = 0, pesoTotal = 0, i = 0;

    do {
        printf("Digite o identificador e o peso: ");
        scanf("%d %lf", &cod, &peso);

        if(cod > 0 && peso > 0) {
            if(peso >= maior) {
                maior = peso;
                codMaior = cod;
            } 
            if (peso < menor) {
                menor = peso;
                codMenor = cod;
            }
            pesoTotal = pesoTotal + peso;
            i++;
        } else if (cod > 0 && peso < 0) {
            printf("Digite o peso novamente: ");
            scanf("%lf", &peso);

            if(peso >= maior) {
            maior = peso;
            codMaior = cod;
            } 
            if (peso < menor) {
               menor = peso;
                codMenor = cod;
            }
            pesoTotal = pesoTotal + peso;
            i++;
        }

    } while (cod > 0);

    media = pesoTotal / i;

    printf("O maior peso: %.2lf, identificador: %d,\nO menor peso: %.2lf, identtificador: %d,\nMedia: %.2lf", maior, codMaior, menor, codMenor, media);

    return 0;
}*/