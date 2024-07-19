#include <stdio.h>

/*Faça um programa que leia uma constante inteira N e os dados de uma matriz 5X4 do tipo inteiro. O programa deverá multiplicar os valores da 
matriz por N e exibir a matriz resultante.*/
#define LINHAS 5
#define COLUNAS 4

int main() {
    int n, matriz[LINHAS][COLUNAS], matrizMult[LINHAS][COLUNAS];

    printf("Digite o valor iteiro de n: ");
    scanf("%d", &n);

    for(int i = 0; i < LINHAS; i++) {
        for(int j = 0; j < COLUNAS; j++) {
            printf("\nElemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
            matrizMult[i][j] = matriz [i][j] * n;
        }
    }
    for(int i = 0; i < LINHAS; i++) {
        for(int j = 0; j < COLUNAS; j++) {
            printf("\nPara o elemento [%d][%d], a matriz multiplicada e %d: ", i, j, matrizMult[i][j]);
        }
    }
    return 0;
}

/*Faça um programa que leia e armazene os dados de altura e peso de 10 pessoas em uma matriz.
O programa deverá exibir:
    - os dados armazenados na tabela para cada pessoa e o seu respectivo IMC (Índice de Massa Corporal). IMC = peso / (altura)2
    - a quantidade de pessoas que têm IMC fora da faixa considerada como normal pela OMS, que é entre 18,5 e 25. */
#define LINHAS 10
#define COLUNAS 3

int main() {
    float matriz[LINHAS][COLUNAS];
    int cont = 0;

    for(int i = 0; i < LINHAS; i++) {
        printf("Digite a altura: ");
        scanf("%f", &matriz[i][0]);
            
    }
    for(int i = 0; i < LINHAS; i++) {
        printf("Digite o peso: ");
        scanf("%f", &matriz[i][1]);
            
    }
    for(int i = 0; i < LINHAS; i++) {
        matriz[i][2] = matriz[i][1] / (matriz[i][0] * matriz[i][0]);
        if(matriz[i][2] < 18.5 || matriz[i][2] > 25) {
            cont++;
        }
    }
    for(int i = 0; i < LINHAS; i++) {
        printf("Altura: %.2f\n", matriz[i][0]);   
        printf("Peso: %.2f\n", matriz[i][1]);  
        printf("IMC: %.2f\n", matriz[i][2]);  
    }
    printf("A quantidade de pesoas que tem o IMC fora da caixa e: %d", cont);
    return 0;
}