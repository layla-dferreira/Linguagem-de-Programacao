#include <stdio.h>
 
 //1) Faça um programa para ler o raio de um esfera, calcular e exibir o seu volume. V = 4/3 π R3
 
/*int main() {
    double raio, volume;

    printf("Digite o valor do raio: \n");
    scanf("%lf", &raio);

    volume = (4 * 3.14 * raio * raio * raio) / 3;

    printf("O volume e igual a: %.2lf\n", volume);

    return 0;
}*/

//2) Em uma disciplina, foram aplicadas 3 avaliações. A nota final do aluno será dada pela média aritmética das notas obtidas por ele nas avaliações. Faça um programa 
//para ler as notas de um aluno e mostrar a sua nota final. 

/*int main() {
    double nota1, nota2, nota3, media;

    printf("Digite as tres notas: \n");
    scanf("%lf %lf %lf", &nota1, &nota2, &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    printf("Nota final: %.2lf\n", media);

    return 0;
}*/

//3) Faça um programa para calcular o valor da taxa de condomínio de um apartamento, dadas as despesas do mês do prédio e a fração ideal do apartamento (um valor entre 
//0 e 1). A taxa do condomínio é dada em função do valor total das seguintes despesas do prédio: luz, água, limpeza e manutenção. Para se calcular a taxa de condomínio 
//de um apartamento, multiplica-se o valor total das despesas do mês pela fração ideal do apartamento.

/*int main() {
    double luz, agua, limpeza, manuntencao, taxa, despezas;

    printf("Digite as despezas da luz agua, limpeza, manuntecao e a taxa do condominio em 0 e 1: \n");
    scanf("%lf %lf %lf %lf %lf", &luz, &agua, &limpeza, &manuntencao, &taxa);

    despezas = (luz + agua + limpeza + manuntencao) * taxa;

    printf("As despezas total e igual a: %.2lf", despezas);

    return 0;
}*/

//4) Dois irmãos saíram juntos e desejam dividir as despesas do passeio por igual. O primeiro irmão pagou o Uber da ida para o passeio, o lanche e os ingressos de 
//entrada. O segundo irmão pagou o Uber da volta e o almoço. Faça um programa que leia o valor das despesas pagas por cada irmão, calcule e imprima o valor que o 
//primeiro irmão deve ao ou tem a receber do segundo, bem como o valor que o segundo irmão deve ao ou tem a receber do primeiro.

/*int main() {
    double uberIda, lanche, ingressos, uberVolta, almoco, gasto1, gasto2, total, gastototal;

    printf("Digite o valor do Uber de Ida, Uber de Volta, Lanche, Ingressos e o Almoco: \n");
    scanf("%lf %lf %lf %lf %lf", &uberIda, &lanche, &ingressos, &uberVolta, &almoco);

    gasto1 = uberIda + lanche + ingressos;
    gasto2 = uberVolta + almoco;
    gastototal = (gasto1 + gasto2) / 2;
    total = gastototal - gasto2;

    printf("Valor a ser pago ou recebido: %.2lf", total);

    return 0;
}*/