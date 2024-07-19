#include <stdio.h>
#include <math.h>

//QUESTAO 01
//Faça um programa que imprime os cincos primeiros termos da serie S = x*1/1! - x*3/3! + x*5/5!
int main() {
    int x, numerador = 0, cont = 0, denominador = 1, aux = 1;

    printf("Digite o valor de x: ");
    scanf("%d", &x);

    for(int i = 1; i < 10; i+=2) {
        numerador = pow(x,i);
        cont++;
        if(i != 1) {
            aux = i * (i - 1);
            denominador = aux * denominador ;
        }
        if(cont == 1){
            printf("%d/%d", numerador, denominador);
        }
        else if(cont%2 != 0){
            printf(" + %d/%d", numerador, denominador);
        } else {
            printf(" - %d/%d", numerador, denominador);
        }
   }
return 0;
}

//QUESTAO 02
/*Faça um programa que imprime o valor do salario bruto de 10 funcionarios. O valor do salario bruto é dado pelo produto das horas trabalhadas
pelo valor do salario hora*/
int main() {
    float horasTrabalhadas[10], valorSalarioHora[10], valorSalario[10];

    for(int i = 0; i < 10; i++) {
        printf("Digite as horas trabalhadas: ");
        scanf("%f", &horasTrabalhadas[i]);
    }
    for(int i = 0; i < 10; i++) {
        printf("Digite o valor Salario Hora: ");
        scanf("%f", &valorSalarioHora[i]);
    }
    for(int i = 0; i < 10; i++){
        valorSalario[i] = valorSalarioHora[i] * horasTrabalhadas[i];
        printf("O valor do salario e: %.2f\n", valorSalario[i]);
    }
return 0;
}