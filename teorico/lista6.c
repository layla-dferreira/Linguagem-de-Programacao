#include <stdio.h>
#include <conio.h>
#include <math.h>

/*Implemente um programa que permita ao usuário informar os dados necessários e mostre o resultado esperado. O programa deverá prosseguir até 
que o usuário opte por encerrar sua execução para todos os problemas a seguir: */

//FUNÇÃO

/*Escreva uma função que receba dois números inteiros como parâmetro e retorne a soma
deles.*/

int somaInt(int num1, int num2) {
    int soma;

    soma = num1 + num2;

    return soma;
}
char encerrar() {
    char resp;
    printf("Deseja continuar? 'S' para sim e 'N' para nao\n");
    resp =  getche();

    return resp;
}
void main() {
    int num1, num2;
    char resp;

    do {
        printf("\nDigite o numero 1 e 2: \n");
        scanf("%d %d", &num1, &num2);

        resp = encerrar(resp);

        printf("\nA soma e: %d", somaInt(num1, num2));
    } while(resp == 'S' || resp == 's');
}

/*Escreva uma função denominada calculaPrecoTotal que receba o preço P de um produto, o valor percentual do imposto I e retorne o preço total 
do produto. O preço total é dado por P + P*I;*/
float calculaPrecoTotal(float P, float I) {
    float total = 0;

    total = P + (P * I);

    return total;
}
char encerrar() {
    char resp;
    printf("Deseja continuar? 'S' para sim e 'N' para nao\n");
    resp =  getche();

    return resp;
}
void main() {
    float P, I, total;
    char resp;

    do {
        printf("Informe o preco do produto e o seu valor percentual, respectivamente: ");
        scanf("%f %f", &P, &I);

        total = calculaPrecoTotal(P, I);
        resp = encerrar(resp);

        printf("\nO total do preco do produto e: %.2f\n", total);
    } while(resp == 'S' || resp == 's');
}

/*Escreva uma função que receba dois números inteiros como parâmetro e retorne o maior deles*/
int num(int num1, int num2) {
    int maior = 0;

    if(num1 < num2) {
        maior = num2;
    } else {
        maior = num1;
    }

    return maior;
}
char encerrar() {
    char resp;
    printf("Deseja continuar? 'S' para sim e 'N' para nao\n");
    resp =  getche();

    return resp;
}
void main() {
    int num1, num2, maior = 0;
    char resp;

    do {
        printf("Digite o numero 1 e o numero 2, respectivamente: ");
        scanf("%d %d", &num1, &num2);

        maior = num(num1, num2);
        resp = encerrar(resp);

        printf("\nO maior dos dois numeros e: %d\n", maior);
    } while(resp == 'S' || resp == 's');
}

/*Escreva uma função que receba dois números inteiros como parâmetro e exiba para o usuário o maior e o menor deles, ou informe se eles são iguais.*/
int maiorFunc(int num1, int num2) {
    int maior = 0;

    if(num1 < num2) {
        maior = num2;
    } else if(num2 < num1) {
        maior = num1;
    } 
    return maior;
}
int menorFunc(int num1, int num2) {
    int menor = 0;
    
    if(num1 < num2) {
        menor = num1;
    } else if(num2 < num1) {
        menor = num2;
    } 
    return menor;
}
void iguaisFunc(int num1, int num2) {
    int iguais = 0;

    if(num1 == num2) {
        iguais = num1;
    }
}
void resultFunc(int num1, int num2) {
    int maior = 0, menor = 0, iguais = 0;

    maior = maiorFunc(num1, num2);
    menor = menorFunc(num1, num2);
    iguais = iguaisFunc(num1, num2);

    if(maior == num1) {
        printf("O maior e: %d e o menor e: %d\n", maior, menor);
    } else if(maior == num2) {
        printf("O maior e: %d e o menor e: %d\n", maior, menor);
    } else {
        printf("Eles sao iguais: %d\n", iguais);
    }
}
char encerrar() {
    char resp;
    printf("Deseja continuar? 'S' para sim e 'N' para nao\n");
    resp =  getche();

    return resp;
}
void main() {
    int num1, num2;
    char resp;

    do {
        printf("\nDigite o numero 1 e o numero 2, respectivamente: ");
        scanf("%d %d", &num1, &num2);

        resultFunc(num1, num2);
        resp = encerrar(resp);
    } while(resp == 'S' || resp == 's');

}

/*Escreva uma função que receba um valor inteiro e retorne o seu fatorial.*/
void fatorialFunc(int num) {
    int fatorial = 2;

        if(num == 0 || num == 1) {
            fatorial = 1;
        } else {
            for(int i = 2; i < num; i++) {
                fatorial = fatorial * (i + 1);
        }
    }
    printf("O fatorial e: %d\n", fatorial); 
}
char encerrar() {
    char resp;
    printf("Deseja continuar? 'S' para sim e 'N' para nao\n");
    resp =  getche();

    return resp;
}
void main() {
    int num;
    char resp;

    do {
        printf("\nDigite o numero: ");
        scanf("%d", &num);

        fatorialFunc(num);
        resp = encerrar(resp);
    } while(resp == 'S' || resp == 's');
}

/*Escreva uma função que receba o valor de uma temperatura em graus Farenheit e retorne a respectiva temperatura em Celsius.*/
void transnformacao(float farenheit) {
    float celcius = 0;

    celcius = (5 * (farenheit - 32)) / 9;
    printf("\nFareheit: %.2lf, Celcius: %.2lf\n", farenheit, celcius);
}
char encerrar() {
    char resp;
    printf("Deseja continuar? 'S' para sim e 'N' para nao\n");
    resp =  getche();

    return resp;
}
void main() {
    float farenheit;
    char resp;

    do {
        printf("Digite a temperatura em Farenheit: ");
        scanf("%f", &farenheit);

        transnformacao(farenheit);
        resp = encerrar(resp);
    } while(resp == 'S' || resp == 's');
}

/*Faça um programa que informe as raízes de uma equação do segundo grau, dados os seus coeficientes a, b e c (a x2 + b x + c=0). O programa 
deverá utilizar pelo menos duas funções além da main.*/
int deltaFunc(int a, int b, int c) {
    int delta = 0;

    delta = (b * b) - ( 4 * a * c);
    if(delta > 0) {
        return delta;
    } else {
        return 0;
    }
}
void equacaoFunc(int a, int b, int c) {
    float equacaoPositiva = 0, equacaoNegativa = 0;
    int delta = 0;

    delta = deltaFunc(a, b, c);
    if(delta != 0) {
        equacaoPositiva = (-b + sqrt(delta)) / (2 * a);
        equacaoNegativa = (-b - sqrt(delta)) / (2 * a);
        printf("A equacao positiva e: %.2f\nA equacao negativa e: %.2f\n", equacaoPositiva, equacaoNegativa);
    } else {
        printf("Raiz nao real!");
    }
}
char encerrar() {
    char resp;
    printf("Deseja continuar? 'S' para sim e 'N' para nao\n");
    resp =  getche();

    return resp;
}
void main() {
    int a, b, c;
    char resp;

    do {    
        printf("\nDigite os valores de a, b ,c, respectivamente: ");
        scanf("%d %d %d", &a, &b, &c);

        equacaoFunc(a, b, c);
        resp = encerrar(resp);
    } while(resp == 'S' || resp == 's');
}

//RECURSIVIDADE

/*Implemente um programa para calcular a potência xy, em que x e y são números inteiros a partir de 0. Utilize, para isso, o método das 
multiplicações sucessivas. O programa deverá possuir uma função recursiva para calcular o valor da potência.*/
void potenciaFunc(int x, int y) {
    int potencia = 1;

    for(int i = 1; i <= y; i++) {
        potencia *= x;
    }
    printf("A potencia de %d por %d e igual a: %d\n", x, y, potencia);
}
char encerrar() {
    char resp;
    printf("Deseja continuar? 'S' para sim e 'N' para nao\n");
    resp =  getche();

    return resp;
}
void main() {
    int x, y;
    char resp;

    do {
        printf("\nDigite o valor de x e de y, respectivamente: ");
        scanf("%d %d", &x, &y);

        potenciaFunc(x, y);
        resp = encerrar(resp);
    } while(resp == 'S' || resp == 's');
}

/*Implemente um programa para calcular o MDC entre dois números inteiros. O programa deverá usar uma função recursiva para o cálculo do MDC 
usando o método das subtrações sucessivas, definido por:
    A se A = B
    MDC ( A, B ) = MDC ( A - B, B ) se A > B
    MDC ( A, B – A ) se B > A*/
int MDCFunc(int num1, int num2) {
    int mdc = 0;

    if(num1 == num2) {
        return num1;
    } else if(num1 > num2) {
        return num1 - num2, num2;
    }
    else if(num2 > num1) {
        return num1, num2 - num1;
    }
}
char encerrar() {
    char resp;
    printf("Deseja continuar? 'S' para sim e 'N' para nao\n");
    resp =  getche();

    return resp;
}
void main() {
    int num1, num2, mdc = 0;
    char resp;

    do {
        printf("Digite o numero 1 e o numero 2, respectivamente: ");
        scanf("%d %d", &num1, &num2);

        mdc = MDCFunc(num1, num2);

        printf("O MDC de %d e %d e: %d\n", num1, num2, mdc);
        resp = encerrar(resp);
    } while(resp == 'S' || resp == 's');
}