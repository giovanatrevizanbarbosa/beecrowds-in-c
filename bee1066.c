/*

Leia 5 valores Inteiros. A seguir mostre quantos valores digitados foram pares, quantos valores digitados foram ímpares, quantos valores digitados foram positivos e quantos valores digitados foram negativos.

Entrada
O arquivo de entrada contém 5 valores inteiros quaisquer.

Saída
Imprima a mensagem conforme o exemplo fornecido, uma mensagem por linha, não esquecendo o final de linha após cada uma.

*/

#include <stdio.h>

int main () {

    int n, odd = 0, even = 0, pos = 0, neg = 0;

    for(int i = 0; i < 5; i++) {

        scanf("%d", &n);
        if (n == 0) {

            even++;
            continue;

        }
        (n > 0) ? pos++ : neg++;
        (n % 2 == 0) ? even++ : odd++;

    }

    printf("%d valor(es) par(es)\n", even);
    printf("%d valor(es) impar(es)\n", odd);
    printf("%d valor(es) positivo(s)\n", pos);
    printf("%d valor(es) negativo(s)\n", neg);

    return 0;

}