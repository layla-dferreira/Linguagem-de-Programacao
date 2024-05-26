#include <stdio.h>
#include <conio.h>

/*01) Entradas: sexo (F-feminino, M-masculino), cor dos olhos (V-verdes, A-azuis, C-castanhos, P-pretos), cor dos cabelos (C-castanhos, R-ruivos, L-louros, P-pretos),idade 
em anos. Calcule: - o total de habitantes lidos; - o total de habitantes do sexo feminino; - o total de habitantes do sexo masculino; - a maior idade dos habitantes;
- o percentual de habitantes do sexo feminino que tenham idade de 18 a 40 anos e que tenham cabelos pretos ou louros. - o percentual de habitantes do sexo masculino 
que tenham idade de 18 a 40 anos e que tenham olhos verdes.*/
/*int main() {
    int idade, maiorIdade = 0;
    float porcentagemMulher = 0, porcentagemHomem = 0,  aux1 = 0, aux2 = 0, totalMulher = 0, totalHomem = 0, totalHabitantes = 0;
    char sexo, corOlhos, corCabelos;

    do {
        printf("\nDigite a idade: ");
        scanf("%d", &idade);
        if(idade > 0) {
            printf("Digite o sexo: ");
            sexo = getche();

            if(sexo == 'F' || sexo == 'f') 
                totalMulher += 1;
                
            else if(sexo == 'M' || sexo == 'm') 
                totalHomem += 1;
                
            else if(sexo != 'F' || sexo != 'f' || sexo != 'M' || sexo != 'm') {
                printf("\nDados invalidos! Digite o sexo novamente: \n");
                sexo = getche();

                if(sexo == 'F' || sexo == 'f') 
                    totalMulher += 1;
                
                else if(sexo == 'M' || sexo == 'm') 
                    totalHomem += 1;
                
            }
            totalHabitantes = totalHomem + totalMulher;

            if(idade > maiorIdade) {
                maiorIdade = idade;
            }
            printf("\nDigite a cor dos olhos: ");
            corOlhos = getche();


            if(corOlhos == 'V' || corOlhos == 'A' || corOlhos == 'C' || corOlhos == 'P') {

                if((sexo == 'M' || sexo == 'm') && (idade >= 18 && idade <= 40) && (corOlhos == 'V')) 
                    aux1++;

                if(aux1 > 0)
                    porcentagemHomem = (aux1 / totalHomem) * 100;

            } else if(corOlhos != 'V' || corOlhos != 'A' || corOlhos != 'C' || corOlhos != 'P') {
                printf("\nDados invalidos! Digite a cor dos olhos novamente: \n");
                corOlhos = getche();
                if((sexo == 'M' || sexo == 'm') && (idade >= 18 && idade <= 40) && (corOlhos == 'V')) 
                    aux1++;
                
                if(aux1 > 0)
                    porcentagemHomem = (aux1 / totalHomem) * 100;
               
            }
            printf("\nDigite a cor dos cabelos: ");
            corCabelos = getche();

            if (corCabelos == 'P' || corCabelos == 'L' ||  corCabelos == 'R' || corCabelos == 'C') {

                if((sexo == 'F' || sexo == 'f') && (idade >= 18 && idade <= 40) && (corCabelos == 'P' || corCabelos == 'L')) 
                    aux2++;
        
               
                if (aux2 > 0) 
                    porcentagemMulher = (aux2 / totalMulher) * 100;

            } else if((corCabelos != 'P' || corCabelos != 'L' ||  corCabelos != 'R' || corCabelos != 'C')) {
                printf("\nDados invalidos! Digite a cor dos cabelos novamente: \n");
                corCabelos = getche();

                if((sexo == 'F' || sexo == 'f') && (idade >= 18 && idade <= 40) && (corCabelos == 'P' || corCabelos == 'L')) 
                    aux2++;
                
                if(aux2 > 0) 
                    porcentagemMulher = (aux2 / totalMulher) * 100;
            } 
        }


    } while (idade > 0);
    
    printf("\nTotal de habitantes: %.0f,\nTotal de habitantes do sexo feminino: %.0f,\nTotal de habitantes do sexo masculino: %.0f,\nMaior idade: %d.\nA porcentagem em relacao a quantidade de mulheres com cabelos loiros ou pretos e com idade entre 18 e 40: %.2f,\nA porcentagem em relacao a quantidade de homens com olhos verdes e com idade entre 18 e 40: %.2f\n", totalHabitantes, totalMulher, totalHomem, maiorIdade, porcentagemMulher, porcentagemHomem);
    
    return 0;
}*/

/*02) Em uma linguagem de programação, um identificador válido deve começar com uma letra e, em seguida, pode possuir letras ou dígitos. São exemplos de identificadores 
válidos: a1, b, soma, var1, var12. São exemplos de identificadores inválidos: 1, 1a, var_1, soma 2, idade$e. Faça um programa para ler uma sequência de caracteres e 
indicar se é um identificador válido ou não na linguagem. O programa deverá ler caractere por caractere. O último caractere, que indicará fim de entrada de dados, é *. */
/*int main() {
    char caracter;
    int i = 1;

    do {
        printf("\nDigite os caracteres: ");
        caracter = getche();
        
        if(i == 1) {
            if((caracter >= 'a' && caracter  <= 'z') || (caracter >= 'A' && caracter <= 'Z')) {
                printf("\nCaracter: %c\n", caracter);
            } else if(caracter >= '0' && caracter <= '9') {
                printf("\nNao pode comecar com numero\n");
            }
        } else if(caracter != '*' && caracter != '"' && caracter != '!' && caracter != '@' && caracter != '#' && caracter != '$' && caracter != '%' && caracter != '&' && caracter != '(' && caracter != ')' 
                    && caracter != '-' && caracter != '_' && caracter != '=' && caracter != '+' && caracter != '/' && caracter != '|' && caracter != ',' && caracter != '.'
                    && caracter != ';' && caracter != ':' && caracter != '>' && caracter != '<') {
            printf("\nCaracter: %c\n", caracter);
        }
        i++;
    } while (caracter != '*');

    return 0;
}*/

//03) Fazer um programa para calcular e exibir o valor S dado pela série a seguir. N deve ser informado pelo usuário. 1 + 1/(2!) + 1/(3!) + ... + 1/(N!)
/*int main() {
    int N;
    unsigned long long F = 1;
    double S = 1;

    printf("Digite o numero de series: ");
    scanf("%d", &N);

    if(N == 0 || N == 1) {
        printf("O fatorial é 1");
    } else {
        for(int i = 2; i <= N; i++) {
            F = F * i;
            S += 1.0 / F;
        }
        printf("%.10lf\n", S);
    }

    return 0;
}*/

/*04) A conversão de graus Farenheit para Celsius é obtida por C = 5 (F-32)/9 Fazer um programa para calcular e mostrar uma tabela de graus Celsius em função de graus 
Farenheit, que variem de 50 a 150, de 1 em 1.*/
/*int main() {
    double fareheit, celcius = 0;

    for(fareheit = 50; fareheit <= 150; fareheit++) {
        celcius = (5 * (fareheit-32)) / 9;
        printf("Fareheit: %.2lf, Celcius: %.2lf\n", fareheit, celcius);
    }
    return 0;
}*/

//05) Fazer um programa para gerar e mostrar a série: 289 - 256 - 225 - 196 - ... - 9 - 4 -1
/*int main() {
    int serie = 0;

    for(int i = 1; serie < 289; i += 2) {
        serie += i;
        printf("A serie e: %d\n", serie);
    }

    return 0;
}*/

//06) Fazer um programa para gerar e mostrar os N primeiros termos da série a seguir. N é informado pelo usuário. 0 - 5 - 6 - 11 - 12 - 17 - 18 - 23 - 24 ...
/*int main() {
    int N, soma, numero;

    printf("Digite a quantidade de numeros da sequencia: ");
    scanf("%d", &N);
    
    for( int i = 0; i <= N; i += 5) {
        printf("%d\n", i);
        if(i%2 != 0 && i < N) {
            i = i + 1;
            printf("%d\n", i);
        }
    }
    return 0;
}*/

//07) Um conjunto de dados contendo altura e o sexo de 50 pessoas. Calcular: a maior altura entre os homens, a media de altura das mulheres.
/*int main() {
    double altura, media, alturaHomen = 0, alturaMulher = 0, quantMulher = 0;
    char sexo;

    for(int i = 1; i <= 50; i++) {
        printf("Digite a altura e o sexo: ");
        scanf("%lf %c", &altura, &sexo);

        if(altura > 0 && (sexo == 'M' || sexo == 'm')) {
            if(altura > alturaHomen)
                alturaHomen = altura;
        } else if(altura > 0 && (sexo == 'F' || sexo == 'f')) {
            alturaMulher = alturaMulher + altura;
            quantMulher++;
        } else if(altura <= 0 || sexo != 'M' || sexo != 'm' || sexo != 'F' || sexo != 'f') {
            printf("Dados invalidos! Digite a altura e o sexo novamente: ");
            scanf("%lf %c", &altura, &sexo);
                
            if(altura > alturaHomen)
                alturaHomen = altura;
        } else if(altura > 0 && (sexo == 'F' || sexo == 'f')) {
            alturaMulher = alturaMulher + altura;
            quantMulher++;
        }
    }

    if(quantMulher > 0)
    media = alturaMulher / quantMulher;

    printf("Maior altura dos homens: %.2lf\nMedia das alturas das mulhures: %.2lf", alturaHomen, media);

    return 0;
}*/

/*08) Entrada de dados: codigo do curso, nome do curso, numero de vagas, numero de candidatos homens, numero de candidados mulheres, vai parar quando o curso for menor 
ou igual a 0. Faça que : - Determine o maior número de candidatos por vaga e escreva esse número juntamente com o código e nome do curso correspondente (supor que não 
haja empate). - Determine o curso com maior quantidade de candidatos do sexo feminino, mostrando o código e o nome do curso. - Determine o curso com maior quantidade 
de candidatos do sexo masculino, mostrando o código e o nome do curso. - Calcule e escreva o total de candidatos.*/
/*int main() {
    int cod, vagas, homens, mulheres, codCorres = 0, maiorMulher = 0, maiorHomem = 0, codCorresMulher = 0, codCorresHomem = 0, totalCandidatos = 0;
    double vagasCusrso = 0, totalVagaCurso = 0;
    char curso, cursoCorres = '\0', cursoCorresMulher = '\0', cursoCorresHomem = '\0';

    do {
        printf("Digite o codigo: ");
        scanf("%d", &cod);
        if(cod > 0){
            printf("Digite o curso: ");
            scanf("%s", curso);
            printf("Didite a quantidade de vagas: ");
            scanf("%d", &vagas);
            printf("Digite a quantidade de cadidatos mulheres e candidatos homens: ");
            scanf("%d %d", &mulheres, &homens);

            vagasCusrso = (double)(mulheres + homens) / (double)vagas;
            if(vagasCusrso > totalVagaCurso) {
                codCorres = cod;
                cursoCorres = curso;
            }
            if(maiorMulher < mulheres) {
                maiorMulher += mulheres;
                codCorresMulher = cod;
                cursoCorresMulher = curso;
            }
            if(maiorHomem < homens) {
                maiorHomem += homens;
                codCorresHomem = cod;
                cursoCorresHomem = curso;
            }
            totalCandidatos += mulheres + homens;
        }
       
    
    } while (cod > 0);
    
    printf("Maior numero de quantidade por vagas: %.2lf, codigo: %d e nome do curso: %s\n", vagasCusrso, codCorres, cursoCorres);
    printf("Maior curso com candidatos do sexo feminino %s, codigo: %d\n", cursoCorresMulher, codCorresMulher);
    printf("Maior curso com candidatos do sexo masculino %s, codigo: %d\n", cursoCorresHomem, codCorresHomem);
    printf("Total de candidatos: %d\n", totalCandidatos);

    return 0;
}*/
