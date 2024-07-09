#include <stdio.h>

//1. Faça um programa que leia um conjunto de 15 elementos do tipo inteiro. O programa deverá informar quantas vezes um número dado pelo usuário
//aparece neste conjunto e em quais posições.

int main() {
    int vetor[14], num, cont = 0;

    for(int i = 0; i < 15; i++) {
        printf("Digite os 15 elementos: ");
        scanf("%d", &vetor[i]);
    }
    printf("Informe o numero que devera ser procurado: ");
    scanf("%d", &num);
    
    for(int i = 0; i < 15; i++) {
        if(num == vetor[i]) {
            printf("Sua posicao e: %d\n", i);
            cont++;
        }
    }
    printf("Aparece %d vezes!", cont);
    return 0;
}

//2. Faça um programa que leia a idade de 10 indivíduos e indique quantos indivíduos
//possuem idade superior à media de idade do grupo.

int main() {
    int vetor[4], soma = 0, media = 0, pessoas = 0, quant = 0;

    for(int i = 0; i < 5; i++) {
        printf("Digite as idades: ");
        scanf("%d", &vetor[i]);

        soma += vetor[i];
        pessoas++;
    }
    media = soma / pessoas;
    for(int i = 0; i < 5; i++) {
        if(vetor[i] > media) {
            quant++;
        }
    }
    printf("a quantidade de individuos que tem idade maior que a media e: %d", quant);
    return 0;
}