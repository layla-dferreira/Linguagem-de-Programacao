#include <stdio.h>
#include <string.h>
#include <conio.h>

/*Um cliente possui os seguintes dados: cpf, nome, telefone, idade. Implemente um programa que permita:
    - incluir clientes;
    - listar clientes;
    - pesquisar clientes pelo nome.
O programa deve exibir um menu de opções para o usuário:
    1- Incluir cliente
    2- Listar cliente
    3- Pesquisar cliente por nome
Utilize funções para modularizar o seu programa. Define a quantidade de clientes como uma constante do programa. Dica: use a função strcmp da biblioteca string.h para 
comparar o nome pesquisado com o nome do cliente.*/
#define N 10

struct cliente {
    char cpf[14], telefone[14];
    int idade;
    char nome[100];
};
int incluirClientes(struct cliente vet[N], int cont) {
    char resp;
    
    printf("Pode ser cadastrado ate 10 clientes!");
    do {
        if(cont < N) {
            printf("\nDigite o nome: ");
            gets(vet[cont].nome);
            printf("Digite o cpf: ");
            gets(vet[cont].cpf);
            printf("Digite o telefone: ");
            gets(vet[cont].telefone);
            printf("Digite a idade: ");
            scanf("%d", &vet[cont].idade);
            fflush(stdin);
            
            printf("Deseja digitar mais um cliente? 'S' para sim ou 'N' para nao ");
            resp = getche();
            cont++;
        } else {
            printf("\nAtingiu o numero maximo de clientes!");
            break;
        }
    } while(resp == 'S' || resp == 's');

    return cont;
}
void imprimeCliente(struct cliente a){
    printf("\n\nNome: %s", a.nome);
    printf("\nCPF: %s", a.cpf);
    printf("\nTelefone: %s", a.telefone);
    printf("\nIdade: %d", a.idade);
}

void imprimeClientes(struct cliente vet[N], int cont){
    if (cont == 0) {
        printf("Nenhum cliente cadastrado.\n");
        return;
    }
    for (int i = 0; i < cont; i++)
        imprimeCliente(vet[i]);
}
void pesquisarClientePorNome(struct cliente vet[N], int cont) {
    char nomePesquisado[100];
    printf("Digite o nome do cliente a ser pesquisado: ");
    gets(nomePesquisado);
    
    for (int i = 0; i < cont; i++) {
        if (strcmp(vet[i].nome, nomePesquisado) == 0) {
            imprimeCliente(vet[i]);
            return;
        }
    }  
    printf("Cliente nao encontrado.\n");
}
int main() {
    struct cliente vet[N];
    int cont = 0;
    int opcao;
    
    do {
        printf("\nMenu de Opcoes\n");
        printf("1- Incluir cliente\n");
        printf("2- Listar clientes\n");
        printf("3- Pesquisar cliente por nome\n");
        printf("0- Sair\n");
        printf("Digite a opcao desejada: ");
        scanf("%d", &opcao);
        fflush(stdin);
        
        switch (opcao) {
            case 1:
                cont = incluirClientes(vet, cont);
                break;
            case 2:
                imprimeClientes(vet, cont);
                break;
            case 3:
                pesquisarClientePorNome(vet, cont);
                break;
            case 0:
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao inválida.\n");
                break;
        }
    } while (opcao != 0);
    
    return 0;
}
