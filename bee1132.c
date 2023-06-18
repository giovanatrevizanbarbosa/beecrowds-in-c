/*



Escreva um algoritmo que leia 2 valores inteiros X e Y calcule a soma dos números que não são múltiplos de 13 entre X e Y, incluindo ambos.
Entrada

O arquivo de entrada contém 2 valores inteiros quaisquer, não necessariamente em ordem crescente.
Saída

Imprima a soma de todos os valores não divisíveis por 13 entre os dois valores lidos na entrada, inclusive ambos se for o caso.


*/

#include <stdio.h>

int main () {

    int x, y, i, sum = 0;

    scanf("%d", &x);
    scanf("%d", &y);

    if (y < x) {

        int temp = y;
        y = x;
        x = temp;

    }

    i = x;

    while (i <= y) {

        if (i % 13 != 0) {

            sum += i;

        }
        i++;

    }

    printf("%d\n", sum);

}