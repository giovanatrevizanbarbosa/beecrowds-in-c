/*

Escreva um programa para ler as notas da primeira e a segunda avaliação de um aluno. Calcule e imprima a média semestral. O programa só deverá aceitar notas válidas (uma nota válida deve pertencer ao intervalo [0,10]). Cada nota deve ser validada separadamente.

No final deve ser impressa a mensagem “novo calculo (1-sim 2-nao)”, solicitando ao usuário que informe um código (1 ou 2) indicando se ele deseja ou não executar o algoritmo novamente, (aceitar apenas os código 1 ou 2). Se for informado o código 1 deve ser repetida a execução de todo o programa para permitir um novo cálculo, caso contrário o programa deve ser encerrado.

Entrada
O arquivo de entrada contém vários valores reais, positivos ou negativos. Quando forem lidas duas notas válidas, deve ser lido um valor inteiro X . O programa deve parar quando o valor lido para este X for igual a 2.

Saída
Se uma nota inválida for lida, deve ser impressa a mensagem “nota invalida”. Quando duas notas válidas forem lidas, deve ser impressa a mensagem “media = ” seguido do valor do cálculo.

Antes da leitura de X deve ser impressa a mensagem "novo calculo (1-sim 2-nao)" e esta mensagem deve ser apresentada novamente se o valor da entrada padrão para X for menor do que 1 ou maior do que 2, conforme o exemplo abaixo.

A média deve ser impressa com dois dígitos após o ponto decimal.

*/

#include<stdio.h>

int main() {

    float nota = 0, soma = 0;
    int yesNo, qtdNotas = 0, end = 1;

    while ((!0) && (end == 1)) {

        scanf("%f",&nota);

        if((nota < 0.0) || (nota > 10.0)) {

            printf("nota invalida\n");

        } else {

            soma += nota;
            qtdNotas++;

            if (qtdNotas == 2) {

                soma = soma / 2;

                printf("media = %.2lf\n", soma);
                printf("novo calculo (1-sim 2-nao)\n");

                while (!0) {

                    scanf("%d", &yesNo);

                    if (yesNo == 1) {

                        soma = 0;
                        qtdNotas = 0;
                        break;

                    } else {

                        if (yesNo == 2) {

                            end = 0;
                            break;

                        } else {

                            soma = 0;
                            qtdNotas = 0;
                            printf("novo calculo (1-sim 2-nao)\n");

                        }

                    }
                }
            }
        }
    }
    return 0;
}