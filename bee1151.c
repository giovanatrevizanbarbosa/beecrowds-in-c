// A seguinte sequência de números 0 1 1 2 3 5 8 13 21... é conhecida como série de Fibonacci. Nessa sequência, cada número, depois dos 2 primeiros, é igual à soma dos 2 anteriores. Escreva um algoritmo que leia um inteiro N (N < 46) e mostre os N primeiros números dessa série.

// Entrada
// O arquivo de entrada contém um valor inteiro N (0 < N < 46).

// Saída
// Os valores devem ser mostrados na mesma linha, separados por um espaço em branco. Não deve haver espaço após o último valor.

#include <stdio.h>

void fibonacci(int arg);

int main() {
    int qtd;

    scanf("%d", &qtd);

    if (qtd > 0 && qtd < 46) {
        fibonacci(qtd);
    }

    return 0;
}

void fibonacci(int arg) {
    int v1 = 0, v2 = 1;
    int num, end = 1, start = 1;
    int i = 0;

    while (i < arg) {
        if (start) {
            printf("%d", v1);
            printf(" %d", v2);
            i += 2;
            start = 0;
        }

        if (i == arg - 1) {
            end = 0;
        }

        num = v2 + v1;
        v1 = v2;
        v2 = num;

        if (end) {
            printf(" %d", num);
        } else {
            printf(" %d\n", num);
        }

        i++;
    }
}