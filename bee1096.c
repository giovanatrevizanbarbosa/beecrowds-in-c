/*

Você deve fazer um programa que apresente a sequencia conforme o exemplo abaixo.

Entrada
Não há nenhuma entrada neste problema.

Saída
Imprima a sequencia conforme exemplo abaixo

Exemplo de Saída
I=1 J=7
I=1 J=6
I=1 J=5
I=3 J=7
I=3 J=6
I=3 J=5
...
I=9 J=7
I=9 J=6
I=9 J=5

*/

#include <stdio.h>

void sequence();

int main () {

    sequence();

    return 0;

}

void sequence() {

    int count = 0, i = 1, j = 7;

    while (i <= 9) {

        do {

            printf("I=%d J=%d\n", i, j);
            j--;
            count++;

        } while (count < 3);

        i = i + 2;
        j = 7;
        count = 0;

    }

}