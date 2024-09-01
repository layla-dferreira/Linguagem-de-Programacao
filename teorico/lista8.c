#include <stdio.h>
#include <conio.h>

//PONTEIROS
/* 1) O que é um ponteiro (ou apontador)?
    O ponteiro é uma variavel que aponta para um endereço na memoria de uma outra variavel. Em vez de conter um valor diretamente, ele contém o 
    endereço onde o valor está armazenado, permitindo que o programa acesse e manipule o dado daquele endereço.
*/

/* 2) Faça um programa para ler o valor de duas variáveis (uma inteira e um caractere) e exibir os endereços de memória dessas variáveis.*/
void main() {
    int *num;
    char *caractere;

    printf("Digite um numero: ");
    scanf("%d", &num);

    printf("Digite um caractere: ");
    *caractere = getche();

    printf("\nO endereco do numero e: %p\nO endereco do caractere e: %p", num, caractere);
}

/* 3) Indique o significado de * nos seguintes comandos:
a) int *p;
    Esta declarando um ponteiro.
b) printf (“%d”, *p);
    Esta imprimindo o que o ponteiro p esta apontando.
c) *p = 25;
    O endereço em que p apontada recebe 25.
d) printf (“%d”, *(p+1) );
    Vai printar a posição que esta depois de p.
e) float * funcao (int t);
    Esta declarando uma função que recebe int e retorna um ponteiro float.
f) k = k * 10;
    Multiplicando k por 10.
g) p *= 3;
    Multiplicando p por 3.
h) voif funcao (char * str);
    Passa como parametro da função um ponteiro chat str.
i) float **x;
    Declarando um ponteiro para um ponteiro float.
j) **x = 10.0;
    Um segundo ponteiro recebe o valor de 10.
*/

/* 4) Considere as declarações abaixo e indique qual o valor das seguinte expressões:
int i = 3, j = 5;
int *p = &i, *q = &j;
a) p == &i;
    Verdaeiro, p é o endereço de i.
b) *p - *q;
    -2.
c) **&p;
    3.
d) 3 * (*p / (*q + 7));
    3/4.
*/


/* 5) Data uma matriz de inteiros M[5] = {10, 20, 30, 40, 50} (matriz denominada M de
tamanho 5), qual o resultado das seguintes expressões:
a) M[3];
    40.
b) *(M+3);
    40.
*/

/* 6) Analise o funcionamento dos programas a seguir. Observe o que eles imprimem.
void main() {
    int x, *p, **q;

    x = 20;
    p = &x;
    q = &p;

    printf( "\nx: %d", x);
        20
    printf( "\n&x: %p", &x);
        Posição da memoria de x.
    printf( "\np: %p", p);
        Posição da memoria de x.
    printf( "\n*p: %d", *p);
        20
    printf( "\n&p: %p", &p);
        Posição da memoria de p.
    printf( "\nq: %p", q);
        Posição da memoria de p.
    printf( "\n*q: %p", *q);
        Posição da memoria de x.
    printf( "\n**q: %d\n", **q);
        20
}
void main() {
    float f = 5;
    float *p, *q;

    p = &f;
    q = p;
    *q = *q + 1;

    printf( "\nf: %f", f);
        6.0
    printf( "\n*p: %f",*p);
        6.0
    printf( "\n*q: %f \n",*q);
        6.0
}*/