/*

Faça um programa que leia um vetor A[100]. No final, mostre todas as posições do vetor que armazenam um valor menor ou igual a 10 e o valor armazenado em cada uma das posições.

Entrada
A entrada contém 100 valores, podendo ser inteiros, reais, positivos ou negativos.

Saída
Para cada valor do vetor menor ou igual a 10, escreva "A[i] = x", onde i é a posição do vetor e x é o valor armazenado na posição, com uma casa após o ponto decimal.

Exemplo de Entrada

0
-5
63
-8.5
...

Exemplo de Saída

A[0] = 0.0
A[1] = -5.0
A[3] = -8.5
...

*/

#include <stdio.h>
#define MAX 100 

int main(){
    double a[MAX];

    for (int i = 0; i < MAX; i++){
        scanf("%lf", &a[i]);
        if(a[i] <= 10){
            printf("A[%d] = %.1lf\n", i, a[i]);
        }
    }

    return 0;
}