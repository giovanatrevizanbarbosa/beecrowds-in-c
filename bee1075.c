/*

Leia um valor inteiro N. Apresente todos os números entre 1 e 10000 que divididos por N dão resto igual a 2.

Entrada
A entrada contém um valor inteiro N (N < 10000).

Saída
Imprima todos valores que quando divididos por N dão resto = 2, um por linha.

*/

#include <stdio.h>

void restTwo(int value);

int main () {

    int value;

    scanf("%d", &value);

    restTwo(value);


}
void restTwo(int value) {

    for (int i = 1; i <= 10000; i++) {
        if (i % value == 2) {

            printf("%d\n", i);

        }

    }

}