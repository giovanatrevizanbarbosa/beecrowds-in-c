/*

Leia 1 valor inteiro N (2 < N < 1000). A seguir, mostre a tabuada de N:      
1 x N = N      2 x N = 2N        ...       10 x N = 10N

Entrada
A entrada contém um valor inteiro N (2 < N < 1000).

Saída
Imprima a tabuada de N, conforme o exemplo fornecido.

*/

#include <stdio.h>

void tables (int value);

int main () {

    int value;

    scanf("%d", &value);

    if ((value > 2) && (value < 1000)) {

        tables (value);

    }

    return 0;
}
void tables (int value) {

    for (int i = 1; i <= 10; i++) {

        printf("%d x %d = %d\n", i, value, i * value);

    }

}