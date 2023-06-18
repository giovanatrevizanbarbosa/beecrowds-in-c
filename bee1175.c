#include <stdio.h>
#define MAX 20

void troca(int n[]);
void imprime(int n[]);

int main(){
    int n[MAX];

    for(int i = 0; i < MAX; i++){
        scanf("%d", &n[i]);
    }

    troca(n);
    imprime(n);

    return 0;
}                       
void troca(int n[]){
    int temp;
    int y;
    for(int i = 0; i < MAX/2; i++){
        y = MAX - i - 1;
        temp = n[i];   
        n[i] = n[y];    
        n[y] = temp;
    }
}
void imprime(int n[]){
    for(int i = 0; i < MAX; i++){
        printf("N[%d] = %d\n", i, n[i]);
    }
}