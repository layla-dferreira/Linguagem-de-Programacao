#include <stdio.h>
#include <conio.h>


/*1. Faça um programa que crie um vetor do tipo inteiro, de tamanho 10. Cada posição do vetor deverá ser preenchida com o valor do seu 
respectivo índice. O programa deverá exibir o vetor resultante.*/

int main() {
    int vetor[9];

    for(int i = 0; i < 10; i++) {
        vetor[i] = i;
    }
    for(int i = 0; i < 10; i++) {
        printf("O vetor de indice %d = %d\n", i, vetor[i]);
    }
    return 0;
}

/*2. Faça um programa que leia um conjunto de 20 dados do tipo inteiro, verifique se há elementos iguais a 30 e, se houver, imprima os 
índices das posições em que estão armazenadas*/

int main() {
    int vetor[19], num = 0;

    for(int i = 0; i < 20; i++) {
        printf("Informe um numero: ");
        scanf("%d", &num);

        vetor[i] = num;
    }
    for(int i = 0; i < 20; i++) {
        if(vetor[i] == 30) {
            printf("O indice do vetor e: %d\n", i);
        }
    }
    return 0;
}

/*3. Faça um programa que leia o preço de 10 produtos e armazene em um vetor. O programa deverá exibir o maior e o menor preço.*/

int main() {
    float vetor[9], num, maior = 0, menor = 100000;

    for(int i = 0; i < 10; i++) {
        printf("Informe o valor do produto: ");
        scanf("%f", &num);
            
        vetor[i] = num;

        if(num < menor) {
            menor = num;
        } else if(num > maior) {
            maior = num;
        }
    }
    printf("Maior: %.2f\nMenor: %.2f", maior, menor);

    return 0;
}

/*4. Faça um programa que leia dois vetores de tamanho 10 e construa um terceiro vetor com a soma dos elementos dos vetores lidos.*/

int main() {
    int vetor1[10], num1, vetor2[10], num2, vetor3[10];

    for(int j = 0; j < 11; j++) {
        printf("Digite o valor do vetor 1: ");
        scanf("%d", &num1);

        vetor1[j] = num1;
    }
    for(int j = 0; j < 11; j++) {
        printf("Digite o valor do vetor 2: ");
        scanf("%d", &num2);

        vetor2[j] = num2;
    }
    for(int i = 0; i < 11; i++) {
        vetor3[i] = vetor1[i] + vetor2[i];
        printf("A soma dos vetores 1 e 2 e: %d\n", vetor3[i]);
    }
    return 0;
}

/*5. Faça um programa que leia os dados de dois vetores de tamanho 15. Um dos vetores armazenará os códigos dos alunos que cursam a 
disciplina A e o outro armazenará os códigos dos alunos que cursam a disciplina B. O programa deverá exibir o código dos alunos que cursam 
as duas disciplinas. Dica: para cada elemento do vetor correspondente à disciplina A, verifique se ele faz parte do vetor da disciplina B.*/

int main() {
    int codA, codB, vetorA[4], vetorB[4];

    for(int i = 0; i < 4; i++) {
        printf("Informe o codigo da turma A: ");
        scanf("%d", &codA);

        vetorA[i] = codA;
    }
    for(int i = 0; i < 4; i++) {
        printf("Informe o codigo da turma B: ");
        scanf("%d", &codB);

        vetorB[i] = codB;
    }
    for(int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if(vetorA[i] == vetorB[j]) 
                printf("O codigo do aluno e: %d\n", vetorA[i]);
        }
    }
    return 0;
}

/*6. Em um concurso foi aplicada uma prova de 10 questões do tipo V ou F. A questão que estiver respondida com um valor diferente de V e F 
é considerada errada. Faça um programa que leia o gabarito da prova. No gabarito somente pode haver respostas iguais a V ou a F. O programa 
deverá ler as respostas de 5 provas e informar para cada uma delas:
- a quantidade de erros;
- a quantidade de acertos.*/

//Codigo sem utilizar vetor, mas a proposta da atividade era com vetor, então fiz outro embaixo usando vetor;
/*int main() {
    char respos;
    int k = 0, l = 0;

    for(int i = 0; i < 5; i++) {
        k = 0, l = 0;
        for(int j = 0; j < 10; j++) {
            printf("\nInforme a resposta, F ou V: ");
            respos = getche();

            if(respos == 'F' || respos == 'V') 
                k++;
            else 
                l++;
        }
        printf("\nTotal de erros: %d\nTotal de acertos: %d\n", l, k);
       
    }

    return 0;
}*/
int main() {
    char respos;
    int vetorRespos[9], acertos = 0, erros = 0;

    for(int i = 1; i < 6; i++) {
        acertos = 0, erros = 0;
        for(int j = 0; j < 10; j++) {
            printf("\nInforme a resposta, F ou V: ");
            respos = getche();

            vetorRespos[j] = respos;
        }
        for (int j = 0; j < 10; j++) { 
            if(vetorRespos[j] == 'F' || vetorRespos[j] == 'V') 
                acertos++;
            else 
                erros++;
        }
        printf("\nProva %d\nTotal de erros: %d --- Total de acertos: %d\n", i, erros, acertos); 
    }
    return 0;
}