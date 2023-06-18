/*

Você deve fazer um programa que apresente a sequencia conforme o exemplo abaixo.

Entrada
Não há nenhuma entrada neste problema.

Saída
Imprima a sequencia conforme exemplo abaixo

Exemplo de Saída
I=1 J=60
I=4 J=55
I=7 J=50
...
I=? J=0

*/

#include <stdio.h>

void sequence();

int main () {

    sequence();

    return 0;

}

void sequence() {

    int i = 1, j = 60;

    do {

        printf("I=%d J=%d\n", i, j);
        i = i + 3;
        j = j - 5;

    } while (j >= 0);

}