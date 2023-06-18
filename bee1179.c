// Neste problema você deverá ler 15 valores colocá-los em 2 vetores conforme estes valores forem pares ou ímpares. Só que o tamanho de cada um dos dois vetores é de 5 posições. Então, cada vez que um dos dois vetores encher, você deverá imprimir todo o vetor e utilizá-lo novamente para os próximos números que forem lidos. Terminada a leitura, deve-se imprimir o conteúdo que restou em cada um dos dois vetores, imprimindo primeiro os valores do vetor impar. Cada vetor pode ser preenchido tantas vezes quantas for necessário.

// Entrada
// A entrada contém 15 números inteiros.

// Saída
// Imprima a saída conforme o exemplo abaixo.

#include <stdio.h>
#define MAX 5

int main(){
    int n;
    int even[MAX];
    int odd[MAX];
    int e = 0;
    int o = 0;
    int i;

    for(i = 0; i < 15; i++){
        scanf("%d", &n);
        if(n % 2 == 0){
            if(e == MAX){
                for(int j = 0; j < MAX; j++){
                    printf("par[%d] = %d\n", j, even[j]);
                }
                e = 0;
            }
            even[e] = n;
            e++;
        }else{
            if(o == MAX){
                for(int j = 0; j < MAX; j++){
                    printf("impar[%d] = %d\n", j, odd[j]);
                }
                o = 0;
            }
            odd[o] = n;
            o++;
        }
    }
    for(i = 0; i < o; i++){
        printf("impar[%d] = %d\n", i, odd[i]);
    }
    for(i = 0; i < e; i++){
        printf("par[%d] = %d\n", i, even[i]);
    }
}
