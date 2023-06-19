/*
O microblog Twitter é conhecido por limitar as postagens em 140 caracteres. Conferir se um texto vai caber em um tuíte é sua tarefa.

Entrada
A entrada é uma linha de texto T (1 ≤ |T| ≤ 500).

Saída
A saída é dada em uma única linha. Ela deve ser "TWEET" (sem as aspas) se a linha de texto T tem até 140 caracteres. Se T tem mais de 140 caracteres, a saída deve ser "MUTE".
*/
#include <stdio.h>
#include <string.h>

#define MAX 500

void valid(char text[]);

int main(){
    char t[MAX];

    fgets(t, MAX, stdin);
    
    valid(t);

    return 0;
}
void valid(char text[]){
    int length = strlen(text) - 1;
    if(length <= 140){
        printf("TWEET\n");
    }else{
        printf("MUTE\n");
    }
}