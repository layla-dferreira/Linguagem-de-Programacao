#include <stdio.h>
#include <math.h>

//Ler três números do teclado e verificar se o primeiro é maior ou igual à soma dos dois demais.
int main() {
    double a, b, c, soma;

    printf("Digite tres numeros: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    soma = b + c;

    if(a > soma) 
        printf("O primeiro valor é maior que a soma dos outros dois");
    else if (a == soma) 
        printf("O primeiro valor é igual a soma dos outros dois");
    else
        printf("O primeiro valor é menor que a soma dos outros dois");

    return 0;
}

//Ler três números diferentes entre si e informar qual é o maior.
int main() {
    double a, b, c;

    printf("Digite tres numeros: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if(a > b && a > c) 
        printf("'a' é maior que 'b' e 'c'");
    else if(b > a && b > c)
        printf("'b' é maior que 'a' e 'c'");
    else 
        printf("'c' é maior que 'a' e 'b'");

    return 0;
}

//Ler três valores inteiros e mostrá-los em ordem crescente.
int main() {
    double a, b, c;

    printf("Digite tres numeros: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if(a > b && a > c && b > c)
        printf("A sequencia crescente e: %.2lf, %.2lf, %.2lf;", a, b, c);
    else if(a > b && a > c && b < c)
        printf("A sequencia crescente e: %.2lf, %.2lf, %.2lf;", a, c, b);
    else if(b > a && b > c && a > c)
        printf("A sequencia crescente e: %.2lf, %.2lf, %.2lf;", b, a, c);
    else if(b > a && b > c && a <= c)
        printf("A sequencia crescente e: %.2lf, %.2lf, %.2lf;", b, c, a);
    else if(c > a && c > b && a > b)
        printf("A sequencia crescente e: %.2lf, %.2lf, %.2lf;", c, a, b);
    else
        printf("A sequencia crescente e: %.2lf, %.2lf, %.2lf;", c, b, a);

    return 0;
}

//Ler os três coeficientes A, B e C de uma equação do segundo grau e informar se ela possui raízes reais iguais, raízes reais 
//diferentes ou raízes imaginárias. Caso ela possua raízes reais, o programa deverá informá-las.
int main() {
    double a, b, c, delta, raiz, equacao1, equacao2;

    printf("Informe dois valores: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    delta = (b * b) - (4 * a * c);

    if(delta < 0)
        printf("Raiz imaginaria: %.2lf", delta);
    else {
        equacao1 = (-b + sqrt(delta)) / (2 * a);  
        equacao2 = (-b - sqrt(delta)) / (2 * a);

        printf("X1 = %.2lf,\nX2 = %.2lf", equacao1, equacao2);
    }
    
    return 0;
}

//Faça um programa que leia o preço P da passagem , o código do estado e calcule o preço total da passagem, que é dado por P + P X taxa.
int main() {
    int cod;
    double passagem, precoTotal;

    printf("Digite o codigo do estado e o valor da passagem: ");
    scanf("%d %lf", &cod, &passagem);

    switch (cod) {
    case 1: 
        precoTotal = passagem + (passagem * 0.3);
        printf("Preco total da passagem pro estado de Minas Gerais: %.2lf", precoTotal);
        break;
    case 2: 
        precoTotal = passagem + (passagem * 0.5);
        printf("Preco total da passagem pro estado de Sao Paulo: %.2lf", precoTotal);
        break;
    case 3: 
        precoTotal = passagem + (passagem * 0.4);
        printf("Preco total da passagem pro estado de Rio de Janeiro: %.2lf", precoTotal);
        break;
    case 4: 
        precoTotal = passagem + (passagem * 0.2);
        printf("Preco total da passagem pro estado de Espirito Santo: %.2lf", precoTotal);
        break;
    case 5: 
        precoTotal = passagem + (passagem * 0.2);
        printf("Preco total da passagem pro estado de Bahia: %.2lf", precoTotal);
        break;
    
    default:
        break;
    }

    return 0;
}