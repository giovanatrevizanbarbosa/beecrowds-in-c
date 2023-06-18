/*

Leia um conjunto não determinado de pares de valores M e N (parar quando algum dos valores for menor ou igual a zero). Para cada par lido, mostre a sequência do menor até o maior e a soma dos inteiros consecutivos entre eles (incluindo o N e M).

Entrada
O arquivo de entrada contém um número não determinado de valores M e N. A última linha de entrada vai conter um número nulo ou negativo.

Saída
Para cada dupla de valores, imprima a sequência do menor até o maior e a soma deles, conforme exemplo abaixo.

*/

#include <stdio.h>

int main () {

    int m, n, sum = 0, reading = 1;
    
    while (reading == 1) {

        scanf("%d %d", &m, &n);

        if ((m > 0) && (n > 0)) {

            if (n > m) {

                int temp = m;
                m = n;
                n = temp;

            }

            int i = n;
            sum = 0;
            
            while (i <= m) {

                printf("%d ", i);
                sum += i;
                i++;

            }
            printf("Sum=%d\n", sum);

        } else {

            break;

        }

    }

}