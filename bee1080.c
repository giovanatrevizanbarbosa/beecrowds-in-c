/*

Leia 100 valores inteiros. Apresente então o maior valor lido e a posição dentre os 100 valores lidos.

Entrada
O arquivo de entrada contém 100 números inteiros, positivos e distintos.

Saída
Apresente o maior valor lido e a posição de entrada, conforme exemplo abaixo.

*/

#include <stdio.h>

void greater();

int main () {

    greater();

    return 0;

}
void greater() {

    int value, i, greater = 0, firstRead = 1, position;

    for (i = 1; i <= 10; i++) {
        
        scanf("%d", &value);

        if (value >= 0) {

            if (firstRead == 1) {

                greater = value;
                firstRead = 0;

            }

            if (value > greater) {

                greater = value;
                position = i;

            }

        }


    }

    printf("%d\n%d\n", greater, position);

}