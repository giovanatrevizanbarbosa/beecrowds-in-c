/*

Escreva um programa para ler as coordenadas (X,Y) de uma quantidade indeterminada de pontos no sistema cartesiano. Para cada ponto escrever o quadrante a que ele pertence. O algoritmo será encerrado quando pelo menos uma de duas coordenadas for NULA (nesta situação sem escrever mensagem alguma).

Entrada
A entrada contém vários casos de teste. Cada caso de teste contém 2 valores inteiros.

Saída
Para cada caso de teste mostre em qual quadrante do sistema cartesiano se encontra a coordenada lida, conforme o exemplo.

*/

#include <stdio.h>

void coordenates (int x, int y);

int main () {

    int i = 0;
    int x, y;

    while (i == 0) {
        
        scanf("%d %d", &x, &y);

        if ((x == 0) || (y == 0)) {

            i = 1;

        } else {

            coordenates(x, y);

        }


    }

    return 0;

}
void coordenates (int x, int y) {

    if (x > 0) {
        if (y > 0) {

            printf("primeiro\n");

        } else {

            printf("quarto\n");

        }

    } else {
        if (y > 0) {

            printf("segundo\n");

        } else {

            printf("terceiro\n");

        }
    }

}