#include <stdio.h>
#include <stdlib.h>

/* 1) O que é e para que serve alocação dinâmica em programação?
    Alocação dinâmica é um espaço reservado na memoria para alocar coisas a partir do que o usuario informar, ou seja, é alocado em tempo de execução
    e não em tempo de compilação (são o que já esta definido no codigo, declarado) e serve para fazer com que seja possivel criar variaveis com um 
    tamanho ainda não conhecido.
*/

/* 2) Explique como se usa e o que resulta o operador sizeof.
    É ultilizado da seguinte forma: sizeof(dado);
    Ele resulta no tamanho do dado informado.
*/

/* 3) Explique como se usa e o que resulta a função malloc.
    É utilizado da seguinte forma: malloc(sizeof(dado));
    Ele resulta em um ponteiro para o primeiro byte da região de memória heap de tamanho size. Esse ponteiro é retornado um void para seja posivel 
    apontar para qualquer tipo de dado.
*/

/* 4) O que a função free realiza?
    Ela limpa a memoria
*/

/* 5) Analise o funcionamento programa a seguir, observando o que ele realiza. */
void main(){
    int tam, i;     // É declarado 'tam' para ler o dado informado pelo usuario e 'i' para controle;
    int *vetor, *outro;     // É declarado dois ponteiros para receber os dados da alocação dinâmica;

    do {
        printf("\nDigite o tamanho do vetor a ser criado: ");
        scanf("%d", &tam);      // Lê o tamanho do vetor que vai ser criado;

        if (tam <=0) 
            printf("\nERRO: tamanho de vetor inválido.");       // Verifica se o tamanho informado é maior que 0;
    } while (tam<=0);       // Vai rodar o laço enquanto o tamanho não for maior que 0;

    vetor = (int *) malloc(sizeof(int) * tam);      // O 'vetor' vai ter o tamanho de 'tam', é feito o recebimento com o ponteiro do malloc;

    for (i=0; i<tam; i++){
        printf("\nValor: ");        
        scanf("%d", &vetor[i]);     // Ler um valor para cada posição de 'vetor';
    }

    printf("\n Valores lidos: ");
    for (i=0; i<tam; i++){
        printf("%d - ", vetor[i]);      // Printa o valor de cada posição de 'vetor';
    }
    printf("\nPonteiro antes da liberacao de memoria: %p", vetor);      // Printa o endereço de 'tam';

    printf("\nConteudo da memoria antes da liberacao: %d", *vetor);     // Printa a primeira posição do conteudo de 'vetor';

    free(vetor);        // Limpa a memoria 
    printf("\nPonteiro apos liberacao de memoria: %p", vetor);      // Printa o endereço de 'tam';
    printf("\nConteudo da memoria liberada: %d", *vetor);       // Printa lixo;

    outro = (int *) malloc(sizeof(int) * tam * 2);      // 'outro' também recebe o endereço de 'tam', porém é multiplicado por 2;
    printf("\nNovo ponteiro alocado: %p", outro);       // Printa o endereço de 'tam';

    printf("\n");

} 

/* 6) Faça um programa que leia e exiba os dados (idade e nome) de N funcionários em uma empresa. N é informado pelo usuário. Utilize struct e um 
vetor alocado dinamicamente na implementação do programa. Dica: quando define-se uma struct, define-se um novo tipo no programa. Esse novo tipo 
pode também ser utilizado com o operador sizeof */

typedef struct {
    char nome[50];
    int idade;
} Empresa;

void main() {
    int N;
    Empresa *quantFuncionario;

    printf("Digite quantos funcionários da empresa vai ser lido: ");
    scanf("%d", &N);

    if((quantFuncionario = malloc(sizeof(Empresa) * N)) != NULL)
        printf("\nAlocação realizada com sucesso!\n");
    else {
        printf("\nErro de alocacao de memoria. O programa será encerrado.\n");
        exit(1);
    }
    for (int i = 0; i < N; i++) {
        printf("Digite o nome: ");
        scanf("%s", quantFuncionario[i].nome);

        printf("Digite a idade: ");
        scanf("%d", &quantFuncionario[i].idade);
    }
    for (int i = 0; i < N; i++) {
        printf("Nome: %s\n", quantFuncionario[i].nome);
        printf("Idade: %d\n", quantFuncionario[i].idade);
    }
}