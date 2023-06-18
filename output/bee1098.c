/*

Você deve fazer um programa que apresente a sequencia conforme o exemplo abaixo.
Entrada

Não há nenhuma entrada neste problema.
Saída

Imprima a sequencia conforme exemplo abaixo.

Exemplo de Saída
	

I=0 J=1
I=0 J=2
I=0 J=3
I=0.2 J=1.2
I=0.2 J=2.2
I=0.2 J=3.2
.....
I=2 J=?
I=2 J=?
I=2 J=?


*/

#include <stdio.h>

void sequence();

int main () {

    sequence();

    return 0;

}
void sequence() {

    int count = 0; 
    float i = 0, j = 1;

    while (i <= 2) {

        while(count < 3) {

            printf("I=%.0f J=%.0f\n", i, j);
            j--;
            count++;

        }

        i = i + 0.2;
        j = j + 5;
        count = 0;

    }

}