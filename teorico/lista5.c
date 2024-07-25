#include <stdio.h>
#include <conio.h>

/*Faça um programa que crie uma matriz 5 X 7. O programa deverá:
    - preencher as posições da matriz com o produto dos valores de seus índices de linha e
        coluna;
    - imprimir a matriz resultante.*/
int main() {
    int matriz[5][7];

    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 7; j++) {
            matriz[i][j] = i * j;
        }
    }
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 7; j++) {
            printf("|%d|", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}

/*Para gerenciar o estoque de mercadorias de uma loja, é mantida uma tabela na qual consta o código da mercadoria e sua respectiva quantidade 
no estoque. Quando um cliente deseja comprar uma mercadoria, o sistema verifica se a quantidade solicitada está disponível no estoque. Se 
estiver, o sistema atualiza o estoque da mercadoria, diminuindo-lhe a quantidade vendida. Caso contrário, emite uma mensagem informando que não
há disponibilidade no estoque. A mercadoria é considerada disponível se houver pelo menos a quantidade solicitada pelo cliente em estoque.
Considerando-se que a loja trabalha apenas com 10 mercadorias, faça um programa que:
    - leia os dados das mercadorias (código e quantidade) e os armazene na tabela.
    - leia os dados de compras (código de mercadoria e quantidade solicitada) e atualize o
        estoque. O programa deverá ler dados de compras até que o usuário opte por terminar.
    - imprima a situação final do estoque de todas as mercadorias.
 */
#define LINHA 3
#define COLUNA 2
int main() {
    int dadosMercadorias[LINHA][COLUNA], dadosCompras[1][COLUNA], cont = 0;
    char resp;

    for(int i = 0; i < LINHA; i++) {
        printf("Digite o codigo: ");
        scanf("%d", &dadosMercadorias[i][0]);
        
        printf("Digite a quantidade: ");
        scanf("%d", &dadosMercadorias[i][1]);
    }
    do {
        int dadosCompras[1][COLUNA] = {{0, 0}};
    
        printf("Digite o codigo da compra: ");
        scanf("%d", &dadosCompras[0][0]);
        for(int i = 0; i < LINHA; i++) {
            if(dadosMercadorias[i][0] != dadosCompras[0][0]) {
                cont++;
                if(cont == LINHA) {
                    printf("Codigo para o produto invalido! Digite novamente: ");
                    scanf("%d", &dadosCompras[0][0]);
                }
            }
        }
        
        printf("Digite a quantidade de compras: ");
        scanf("%d", &dadosCompras[0][1]);

        printf("Voce deseja informa mais alguma mercadoria? ('S' ou 's' para sim ou 'N' ou 'n' para nao)\n");
        resp = getche();
        printf("\n");

        for(int i = 0; i < LINHA; i++) {
            if(dadosMercadorias[i][0] == dadosCompras[0][0]) {
                if(dadosMercadorias[i][1] >= dadosCompras[0][1]) {
                    dadosMercadorias[i][1] = dadosMercadorias[i][1] - dadosCompras[0][1];
                } else {
                    printf("Item indisponivel! Possui %d quantidades desse item.\n", dadosMercadorias[i][1]);
                }
            } 
        }
    } while(resp == 'S' || resp == 's');

    for(int i = 0; i < LINHA; i++) {
        for(int j = 0; j < COLUNA; j++) {
            printf("|%d|", dadosMercadorias[i][j]);
        }
        printf("\n");
    }
    return 0;
}

/*Faça um programa que leia os dados de uma matriz 5 X 5 de inteiros. O programa deverá exibir a matriz lida e informar se os elementos da sua 
diagonal são iguais a 1.*/
#define LINHA 5
#define COLUNA 5
int main() {
    int matriz[LINHA][COLUNA], cont = 0;

    for(int i = 0; i < LINHA; i++) {
        for(int j = 0; j < COLUNA; j++) {
            printf("Digite os valores |%d||%d|: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    for(int i = 0; i < LINHA; i++) {
        for(int j = 0; j < COLUNA; j++) {
            if((i == j) && (matriz[i][j] == 1)){
                cont++;
            }
        }
    }
    if(cont == LINHA) {
        printf("Os elementos da diagonal sao iguais a 1\n");
    } else {
        printf("A diagonal nao e igual a 1\n");
    }
    for(int i = 0; i < LINHA; i++) {
        for(int j = 0; j < COLUNA; j++) {
            printf("|%d|", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}

/*Faça um programa que leia os dados de duas matrizes de elementos inteiros, sendo uma matriz A de dimensões 3 X 2 e outra matriz B de dimensões
2 X 2. O programa deverá calcular e exibir os valores das posições da matriz resultante da multiplicação de A por B (A X B).*/
int main() {
    int matrizA[3][2], matrizB[2][2], matrizResult[3][2];

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 2; j++) {
            printf("Preencha a matriz 'A': ");
            scanf("%d", &matrizA[i][j]);
        }
    }
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            printf("Preencha a matriz 'B': ");
            scanf("%d", &matrizB[i][j]);
        }
    }
    for(int i = 0; i < 3; i++) {
        matrizResult[i][0] = (matrizA[i][0] * matrizB[0][0]) + (matrizA[i][1] * matrizB[1][0]);
        matrizResult[i][1] = (matrizA[i][0] * matrizB[0][1]) + (matrizA[i][1] * matrizB[1][1]);  
    }
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 2; j++) {
            printf("|%d|", matrizResult[i][j]);
        }
        printf("\n");
    }
    return 0;
}