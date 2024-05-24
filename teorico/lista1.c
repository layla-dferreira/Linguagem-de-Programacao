#include <stdio.h>
#include <math.h>

//Leia os lados de um triângulo e mostre o seu perímetro.
int main() {
    double ladoA, ladoB, ladoC, perimetro;

    printf("Digite os lados do triangulo: ");
    scanf("%lf %lf %lf", &ladoA, &ladoB, &ladoC);

    perimetro = ladoA + ladoB + ladoC;

    printf("Esse e o perimetro do triangulo: %.2lf", perimetro);

    return 0;
}

//Leia o raio de uma esfera e mostre o seu volume
int main() {
    double raio, volume;

    printf("Digite o valor do raio: ");
    scanf("%lf", &raio);

    volume = (4 * M_PI * pow(raio, 3)) / 3;

    printf("O volume e iagual a: %.2lf", volume);

    return 0;
}

//Leia um número natural de três algarismos e mostre seu algarismo das unidades.
int main() {
    int numero, unidade;

    printf("Digite um numero com 3 algarismos: ");
    scanf("%d", &numero);

    unidade = numero % 10;
    
    printf("Algarismo da unidade: %d\n", unidade);

    return 0;
}

//Leia um número natural de três algarismos e mostre seu algarismo das unidades, da dezena e da centena.
int main() {
    int numero, centena, dezena, unidade;

    printf("Digite um numero com 3 algarismos: ");
    scanf("%d", &numero);

    unidade = numero % 10;
    dezena = numero / 10;
    dezena = dezena % 10;
    centena = numero / 100;
    
    printf("Algarismo da centena: %d,\nAlgarismo da dezena: %d,\nAlgarismo da unidade: %d\n", centena, dezena, unidade);

    return 0;
}

//Leia separadamente os três algarismos de um número natural (centena, dezena e unidade) e mostre o dobro do número
int main() {
    int centena, dezena, unidade, dobroCentena, dobroDezena, dobroUnidade;

    printf("Digite o numero com tres algarismos com espacos entre eles: ");
    scanf("%d %d %d", &centena, &dezena, &unidade);
    
    dobroCentena = centena * 2;
    dobroDezena = dezena * 2;
    dobroUnidade = unidade * 2;

    printf("Dobro Centena: %d,\nDobro Dezena: %d,\nDobro Unidade: %d\n", dobroCentena, dobroDezena, dobroUnidade);

    //Isso foi uma tentativa de teste pra sair o dobro do numero inteiro, tipo 156 *2 que seria 312, mas fiz só o dobro dos algarismos msm.
    /*int maisUnidade = unidade + unidade; 
    int modulo = maisUnidade % 10;
    int maisDezena, totalDezena, totalUnidade, maisCentena;;
    if (modulo > 0 ) {
        maisDezena = dezena + dezena + 1;
        totalUnidade = modulo;
    }
    int modulo2 = maisDezena % 10;
    if (modulo2 > 0 && modulo > 0 ) {
        maisCentena = centena + centena + 1;
         totalDezena = modulo2;
    }

    printf("%d%d%d", maisCentena, totalDezena, totalUnidade);*/

    return 0;
}

//Leia a distância percorrida por um veículo e o tempo gasto para percorrer tal distância e informe a velocidade dele.
int main() {
    double distancia, tempo, velocidade;

    printf("Informe a distancia percorrida e o tempo gasto: ");
    scanf("%lf %lf", &distancia, &tempo);

    velocidade = distancia / tempo;

    printf("A velocidade e igual a: %.2lf", velocidade);

    return 0;
}

//Calcule e mostre o salário bruto e líquido de um funcionário. O salário bruto é dado pelo total de horas trabalhadas no mês 
//multiplicado pelo salário-hora. O salário líquido é dado pelo salário bruto menos o total de descontos. O programa deverá ler
//o número de horas trabalhadas, o salário-hora e o total de descontos.
int main() {
    double horas, salarioHora, descontos, salarioBruto, salarioLiquido;

    printf("Digite o numero de horas trabalhadas, o salario-hora e o total de descontos: ");
    scanf("%lf %lf %lf", &horas, &salarioHora, &descontos);

    salarioBruto = horas * salarioHora;
    salarioLiquido = salarioBruto - descontos;

    printf("Salario Bruto: %.2lf,\nSalario Liquido: %.2lf", salarioBruto, salarioLiquido);

    return 0;
}