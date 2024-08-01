#include <stdio.h>
#include <conio.h>

/*Fazer um programa para calcular e exibir o valor da série a seguir. N deve ser informado pelo usuário.
    1 + 1/2 + 1/3 + ... + 1/N
O programa deverá ter uma função que recebe o valor de N e retorna o valor calculado para a série.*/
void denominadorFunc(int N) {
    float soma = 0;

    for(int i = 1; i <= N; i++) {
     soma += 1.0 / i;
    }
    printf("%.2f", soma);
}
void main() {
    int N;

    printf("Digite o numero de series: ");
    scanf("%d", &N);

    denominadorFunc(N);
}

/*Um professor aplicou três provas de 50 pontos cada. O aproveitamento final do aluno é dado pela soma das notas obtidas nas provas,
desprezando-se a menor delas. O conceito do aluno é dado pela seguinte correspondência:
    - A : nota >=90
    - B : nota superior ou igual a 80 e menor do que 90.
    - C : nota superior ou igual a 70 e menor do que 80.
    - D : nota superior ou igual a 60 e menor do que 70.
    - I : nota inferior a 60.
A) Implemente uma função que receba o valor de três provas e retorne o aproveitamento global do aluno.
B) Implemente uma função que receba a nota global de um aluno e retorne o seu conceito.
C) Implemente um programa que leia as três notas de alunos e indique, para cada um deles, a sua nota global e o seu conceito correspondente. 
O programa deverá ler dados de alunos e exibir os resultados até que o usuário informe que deseja encerrar o programa.*/
float aproveitamentoFunc(float nota1, float nota2, float nota3) {
    float aproveitamento = 0;

    if(nota1 < nota2 && nota1 < nota3) {
        aproveitamento = nota2 + nota3;
    } else if(nota1 < nota2 && nota3 < nota1) {
        aproveitamento = nota1 + nota2;
    } else if(nota2 < nota1 && nota2 < nota3) {
        aproveitamento = nota1 + nota3;
    }
    return aproveitamento;
}
void notaGlobalFunc(float nota1, float nota2, float nota3) {
    float notaGlobal = aproveitamentoFunc(nota1, nota2, nota3);

    if(notaGlobal >= 90) {
        printf("Nota Global: %.2f\nConceito: A\n", notaGlobal);
    } else if(notaGlobal >= 80 && notaGlobal < 90) {
        printf("Nota Global: %.2f\nConceito: B\n", notaGlobal);
    } else if(notaGlobal >= 70 && notaGlobal < 80) {
        printf("Nota Global: %.2f\nConceito: C\n", notaGlobal);
    } else if(notaGlobal >= 60 && notaGlobal < 70) {
        printf("Nota Global: %.2f\nConceito: D\n", notaGlobal);
    } else {
        printf("Nota Global: %.2f\nConceito: F\n", notaGlobal);
    }
}
char encerrar() {
    char resp;
    printf("Deseja continuar? 'S' para sim e 'N' para nao\n");
    resp =  getche();

    return resp;
}
void main() {
    float nota1, nota2, nota3;
    char resp;

    do {
        printf("Digite as notas: ");
        scanf("%f %f %f", &nota1, &nota2, &nota3);

        notaGlobalFunc(nota1, nota2, nota3);
        resp = encerrar(resp);
    } while(resp == 'S' || resp == 's');

    
}