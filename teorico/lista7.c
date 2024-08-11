#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

/*Um funcionário possui os seguintes dados: matrícula, nome e salário. Fazer um programa para realizar cadastras os dados de N funcionários e 
exibir os dados cadastrados. O programa deverá possuir as seguintes características:
    a. Um registro que represente um funcionário.
    b. Um vetor de N funcionários definido na main. N deve ser uma constante definida no programa.
    c. Uma função para ler os dados dos N funcionários. A função deverá receber o vetor de funcionários.
    d. Uma função para imprimir os dados dos N funcionários cadastrados. A função deverá receber o vetor de funcionários.*/
typedef struct {
    char codigo[10];
    char nome[100];
    float salario;
} Funcionario;

void lerFuncionarios(Funcionario vet[], int N){
    for (int i = 0; i < N; i++){
        printf("Codigo: "); 
        gets(vet[i].codigo);
        printf("Nome: "); 
        gets(vet[i].nome);
        printf("Salario: "); 
        scanf("%f", &vet[i].salario);
        fflush(stdin);
    }
}
void imprimeFuncionario(Funcionario vet[], int N){
    printf("\n\nDados dos funcionarios cadastrados: \n");
    for(int i = 0; i < N; i++) {
        printf("\nDados do funcionario: %d\n", i + 1);
        printf("Codigo: %s", vet[i].codigo);
        printf("\nNome: %s", vet[i].nome);
        printf("\nSalario: %.2f", vet[i].salario);
    }
}
void main(){
    const int N = 3;
    Funcionario funcionarios[N];

    lerFuncionarios(funcionarios, N);
    imprimeFuncionario(funcionarios, N);
}

/*Deseja-se manter os dados de veículos que utilizam um estacionamento particular. Um veículo possui os seguintes dados: placa, cor, modelo, 
tipo de uso (diária, mensal ou hora). Faça um programa que leia os dados de um conjunto de N veículos. N é definido como constante no programa. 
O programa deverá:
    a) Exibir os dados dos veículos cadastrados.
    b) Exibir os dados dos veículos cujos modelos sejam iguais ao informado pelo usuário. Dica: use uma função da biblioteca de C para comparar 
    strings.*/
typedef struct {
    char placa[7], cor[20], modelo[40], tipoUso[15];
} Veiculos;

void lerVeiculosEmpresa(Veiculos vet[], int N) { //Uma função para fazer tipo um banco de dados com os veiculos para o usuario pesquisar;
    printf("Voce pode adicionar ate 20 veiculos\n");
    for(int i = 0; i < N; i++) {
        printf("Digite a placa: ");
        gets(vet[i].placa);
        printf("Digite a cor: ");
        gets(vet[i].cor);
        printf("Digite o modelo: ");
        gets(vet[i].modelo);
        printf("Digite o tipo de uso (diaria, mensal ou hora): ");
        gets(vet[i].tipoUso);
    }
    system("cls");
}
void exibirVeiculosCadastrados(Veiculos vet[], int N) {
    printf("\n\nDados dos veiculos cadastrados: \n");
    for(int i = 0; i < N; i++) {
        printf("A placa e: %s\n", vet[i].placa);
        printf("A cor e: %s\n", vet[i].cor);
        printf("O modelo e: %s\n", vet[i].modelo);
        printf("O tipo de uso desse veiculo e: %s\n\n", vet[i].tipoUso);
    }
}
void pesquisarVeiculos(Veiculos vet[], int quantUsuario, int cont, int N) {
    char modelo[40];

    if(cont < quantUsuario) {
        printf("Voce pode pesquisar ate tres veiculos!\n");
        printf("Informe o modelo do veiculo: ");
        gets(modelo);

        for(int i = 0; i < N; i++) {
            if(strcmp(vet[i].modelo, modelo) == 0) {
                printf("O modelo e: %s\nA placa e: %s\nA cor e: %s\nO tipo de uso e: %s", vet[i].modelo, vet[i].placa, vet[i].cor, vet[i].tipoUso);
                return;
            } 
        }
        cont++;
        printf("Cliente nao encontrado.\n");
    } else {
        printf("\nAtingiu o numero maximo de clientes!");
        return;
    }
    system("cls");
}
void main() {
    const int N = 20;
    const int quantUsuario = 3;
    int cont = 0, opcao = 0;
    Veiculos veiculo[N];

    lerVeiculosEmpresa(veiculo, N);
    system("cls");

     do {
        printf("\nInforme a opcao do menu que deseja acessar:\n\n");
        printf("| ----------------- MENU --------------- |\n");
        printf("|     0 - Sair                           |\n");
        printf("|     1 - Listar veiculos                |\n");
        printf("|     2 - Pesquisar veiculos por modelo  |\n");
        printf("| -------------------------------------- |\n");
        
        printf("\nEscolha uma opcao: ");
        scanf("%d", &opcao);
        system("cls");
        fflush(stdin);
        
        switch (opcao) {
            case 1:
                exibirVeiculosCadastrados(veiculo, N);
                break;
            case 2:
                pesquisarVeiculos(veiculo, quantUsuario, cont, N);
                break;
            case 0:
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao inválida.\n");
                break;
        }
    } while (opcao != 0);
}

/*Uma chamada telefônica possui os seguintes dados: data da chamada, hora da chamada, numero de telefone, tipo de chamada (originada ou recebida),
duração da chamada.
    a) Defina um registro que represente uma chamada telefônica.
    b) Faça uma função para ler os dados dos N chamadas telefônicas, sendo N uma constante definida no programa. A função deverá receber um 
    vetor de chamadas.
    c) Utilizando as funções definidas em (a) e (b), faça um programa que:
        - leia os dados de um conjunto de N uma chamada telefônica. N deve ser definido como uma constante no programa.
        - calcule e exiba a duração total de chamadas originadas.
        - calcule e exiba a duração total de chamadas recebidas.
        - exiba os dados da chamada originada de maior duração.*/
typedef struct {
    int data[2], hora, duracaoChamada;
    char numero[11], tipoChamada[10]; 
} Telefonica;

void lerChamada(Telefonica vet[], int N) {
    printf("Voce pode declarar ate 20 chamadas!");

    for(int i = 0; i < N; i++) {
        printf("Informe o numero de telefone: ");
        gets(vet[i].numero);

        printf("Informe a hora da chamada: ");
        scanf("%d", &vet[i].hora);

        printf("Informe a data da chamada: ");
        scanf("%d %d", &vet[i].data[0], &vet[i].data[1]);

        printf("Informe a duracao da chamada: ");
        scanf("%d", &vet[i].duracaoChamada);
        fflush(stdin);

        printf("Informe o tipo de chamada (originada ou recebida): ");
        gets(vet[i].tipoChamada);
        fflush(stdin);

        system("cls");
    }
}
void duracaoChamadas(Telefonica vet[], int N) {
    int duracaoOriginada = 0, duracaoRecebida = 0;
    
    for(int i = 0; i < N; i++) {
        if(strcmp(vet[i].tipoChamada, "originada") == 0) {
            duracaoOriginada += vet[i].duracaoChamada;
        } else if(strcmp(vet[i].tipoChamada, "recebida") == 0) {
            duracaoRecebida += vet[i].duracaoChamada;
        }
    }
    printf("O total de duracao das chamadas originadas e: %d\nO total de duracao das chamadas recibidas e: %d\n", duracaoOriginada, duracaoRecebida);
}
void maiorChamadaOriginada(Telefonica vet[], int N) {
    int maiorChamada = 0;

    for(int i = 0; i < N; i++) {
        if((strcmp(vet[i].tipoChamada, "originada") == 0) && (maiorChamada < vet[i].duracaoChamada)) 
            maiorChamada = vet[i].duracaoChamada;
    }
    printf("A maior duracao da chamada originada e: %d\n", maiorChamada);
}
void main() {
    const int N = 20;
    Telefonica telefonicas[N];

    lerChamada(telefonicas, N);
    duracaoChamadas(telefonicas, N);
    maiorChamadaOriginada(telefonicas, N);
}