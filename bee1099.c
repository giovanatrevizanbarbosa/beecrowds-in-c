/*

Leia um valor inteiro N que é a quantidade de casos de teste que vem a seguir. Cada caso de teste consiste de dois inteiros X e Y. Você deve apresentar a soma de todos os ímpares existentes entre X e Y.
Entrada

A primeira linha de entrada é um inteiro N que é a quantidade de casos de teste que vem a seguir. Cada caso de teste consiste em uma linha contendo dois inteiros X e Y.
Saída

Imprima a soma de todos valores ímpares entre X e Y.


*/

#include <stdio.h>

void oddSum();

int main () {

    int cases, i = 0;

    scanf("%d", &cases);

    while (i < cases) {
        
        oddSum();
        i++;

    }
    
    return 0;

}
void oddSum() {

    int n1, n2, min, max, i;
    int sum = 0;
    scanf("%d %d", &n1, &n2);      

    if (n1 == n2) {       
        max = 0;
        i = 0;
    } else {
        if (n1 < n2) {
            min = n1;
            max = n2;
            i = ++min;
        } else {
            if (n1 > n2) {    
                min = n2;         
                max = n1;
                i = ++min;
            }
        }
    }

    while (i < max) {
        if (i % 2 != 0) {

            sum = sum + i;

        }
        ++i;
    }
    printf("%d\n", sum);

}