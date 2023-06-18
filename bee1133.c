/*

Escreva um programa que leia 2 valores X e Y e que imprima todos os valores entre eles cujo resto da divisão dele por 5 for igual a 2 ou igual a 3.
Entrada

O arquivo de entrada contém 2 valores positivos inteiros quaisquer, não necessariamente em ordem crescente.
Saída

Imprima todos os valores conforme exemplo abaixo, sempre em ordem crescente.

*/

#include <stdio.h>

int main () {

    int x, y, i;

    scanf("%d", &x);
    scanf("%d", &y);

    if ((x >= 0) && (y >= 0)) {

        if (y < x) {

            int temp = y;
            y = x;
            x = temp;

        }

        i = ++x;

        while (i < y) {

            if ((i % 5 == 2) || (i % 5 == 3)) {

                printf("%d\n", i);

            }
            i++;

        }

    }


    return 0;

}