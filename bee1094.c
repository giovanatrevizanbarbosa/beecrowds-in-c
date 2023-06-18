/*

Maria acabou de iniciar seu curso de graduação na faculdade de medicina e precisa de sua ajuda para organizar os experimentos de um laboratório o qual ela é responsável. Ela quer saber no final do ano, quantas cobaias foram utilizadas no laboratório e o percentual de cada tipo de cobaia utilizada.

Este laboratório em especial utiliza três tipos de cobaias: sapos, ratos e coelhos. Para obter estas informações, ela sabe exatamente o número de experimentos que foram realizados, o tipo de cobaia utilizada e a quantidade de cobaias utilizadas em cada experimento.

Entrada
A primeira linha de entrada contém um valor inteiro N que indica os vários casos de teste que vem a seguir. Cada caso de teste contém um inteiro Quantia (1 ≤ Quantia ≤ 15) que representa a quantidade de cobaias utilizadas e um caractere Tipo ('C', 'R' ou 'S'), indicando o tipo de cobaia (R:Rato S:Sapo C:Coelho).

Saída
Apresente o total de cobaias utilizadas, o total de cada tipo de cobaia utilizada e o percentual de cada uma em relação ao total de cobaias utilizadas, sendo que o percentual deve ser apresentado com dois dígitos após o ponto.

*/

#include <stdio.h>

int tests(int f, int m, int r);

int main () {

    int test, frogs = 0, mouses = 0, rabbits = 0;
    float total = 0;
    char tGp;
    int qGp;

    scanf("%d", &test);
    
    int i = 0;
    while (i < test) {

        scanf("%d %c", &qGp, &tGp);

        if ((qGp >= 1) && (qGp <= 15)) {

            switch (tGp) {

                case 'C':
                    rabbits += qGp;
                    break;
                case 'R':
                    mouses += qGp;
                    break;
                case 'S':
                    frogs += qGp;
                    break;
                default:
                    break;

            }

        }

        i++;

    }

    total = frogs + mouses + rabbits;

    printf("Total: %.0f cobaias\n", total);
    printf("Total de coelhos: %d\n", rabbits);
    printf("Total de ratos: %d\n", mouses);
    printf("Total de sapos: %d\n", frogs);
    printf("Percentual de coelhos: %.2f %%\n", ((float)rabbits / total) * 100);
    printf("Percentual de ratos: %.2f %%\n", ((float)mouses / total) * 100);
    printf("Percentual de sapos: %.2f %%\n", ((float)frogs / total) * 100);

    return 0;

}