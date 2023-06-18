/*

Você deve fazer um programa que apresente a sequencia conforme o exemplo abaixo.

Entrada
Não há nenhuma entrada neste problema.

Saída
Imprima a sequencia conforme exemplo abaixo

Exemplo de Saída
I=0     J=1
I=0     J=2
I=0     J=3
I=0.2   J=1.2
I=0.2   J=2.2
I=0.2   J=3.2
.....
I=2     J=?
I=2     J=?
I=2     J=?

*/


#include <stdio.h>

void sequence();

int main () {

    sequence();

    return 0;

}

void sequence() {

    float i = 0, j = 0;

    while (i <= 2.2) {

        if ((i > 0 && i < 1) || ((i > 1) && (i < 2)) || (i > 2.1 && i <= 2.2)) {

            printf("I=%.1f J=%.1f\n", i, j+1+i);
            printf("I=%.1f J=%.1f\n", i, j+2+i);
            printf("I=%.1f J=%.1f\n", i, j+3+i);

        } else {

            printf("I=%d J=%d\n", (int)i, (int)j+1+(int)i);
            printf("I=%d J=%d\n", (int)i, (int)j+2+(int)i);
            printf("I=%d J=%d\n", (int)i, (int)j+3+(int)i);

        }

        i = i + 0.2;

    }

}

