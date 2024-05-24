#include <stdio.h>
#include <math.h>

//Ler um número qualquer e informar se ele é positivo, negativo ou nulo
int main() {
    double num;

    printf("Digite um numero: ");
    scanf("%lf", &num);

    if(num > 0)
        printf("O numero %.2lf e positivo", num);
    else if(num == 0)
        printf("O numero %.2lf e nulo", num);
    else
        printf("O numero %.2lf e negativo", num);

    return 0;
}

//Ler um número natural e informar se ele é par ou ímpar
int main() {
    int num;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    if(num%2 == 0)
        printf("O numero e par");
    else 
        printf("O numero e impar"); 

    return 0;
}

//Ler as medidas de três segmentos e informar se esses segmentos podem ser os lados de um triângulo. Caso sejam lados de um triângulo, 
//informar qual o seu tipo (escaleno, isósceles ou equilátero) e a sua área. 

//isoceles 2 lados
//escaleno 3 diferentes
//equilatero 3 iguais
int main() {
    double a, b, c, soma1, soma2, soma3, p, area;

    printf("Digite tres medidas: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    soma1 = a + b;
    soma2 = a + c;
    soma3 = b + c;

    if(soma1 > c || soma2 > b || soma3 > a) {
        p = (a + b + c) / 2;
        area = sqrt(p * (p - a) * (p - b) * (p - c));

        if((a == b || a == c || b == c) && (a != b || a != c || b != c))
            printf("E um triangulo isoceles\n");
        else if(a != b && a != c && b != c)
            printf("E triangulo escaleno\n");
        else if(a == b && a == c && b ==c)
            printf("E um equilatero\n");

        printf("A area e: %.2lf\n", area); 
        } else {
            printf("Não é um triangulo");
    }

    return 0;
}