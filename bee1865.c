// Odin criou para Thor a mais fiel e poderosa arma possível, o martelo Mjölnir. Feito de um minério místico especial chamado Uru e forjado no coração de uma estrela pelos Deuses ferreiros de Asgard, Brokk e Eitri, os lendários ferreiros.

// Um dia, Thor desafiou seus amigos para ver quem conseguia levantar o Mjölnir.

// Escreva um programa que, dado um nome, e a força, em Newtons, aplicado ao tentar levantar o Mjölnir, informar se a pessoa conseguiu ou não levantá-lo.

// Entrada
// Um número inteiro C será informado, que será a quantidade de casos de teste. Cada caso de teste inicia com uma palavra, que é o primeiro nome de quem está tentando levantar o Mjölnir, e um inteiro N (1 ≤ N ≤ 25000), indicando a força aplicada para cima, em Newtons, ao puxar o martelo, de modo a tentar levantá-lo.

// Saída
// Para cada caso de teste imprima um caractere ‘Y’, caso a pessoa tenha conseguido levantar , ou ‘N’, caso não tenha conseguido.

#include <stdio.h>
#include <string.h>

int main(){
    int cases, strengh = 0;
    char name[256];
    char thor[256] = "Thor";
    
    scanf("%d", &cases);
    for(int i = 0; i < cases; i++){
        scanf("%s", name);
        scanf("%d", &strengh);

        if(strcmp(name, thor) == 0){
            printf("Y\n");
        }else{
            printf("N\n");
        }
    }
    return 0;
}