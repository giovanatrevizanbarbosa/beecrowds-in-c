#include <stdio.h>
#define MAX 12

float sum(float m[][MAX], int n);
float avg(float m[][MAX], int n);

int main(){
    int n; 
    float m[MAX][MAX];
    char op;
    
    scanf("%d", &n);
    scanf(" %c", &op);
    
    for(int linha = 0; linha < MAX; linha++){
        for(int coluna = 0; coluna < MAX; coluna++){
            scanf("%f", &m[linha][coluna]);
        }
    }
    
    float result = 0;
    if(op == 'S'){
       result = sum(m, n);
        
    }else{
        if(op == 'M'){
            result = avg(m, n);
        }
    }
    
    printf("%.1f\n", result);

    return 0;
}
float sum(float m[][MAX], int n){
    float operation = 0;
    for(int coluna = 0; coluna < MAX; coluna++){
        operation += m[n][coluna];
    }
    return operation;
}
float avg(float m[][MAX], int n){
    float operation = 0;
    for(int coluna = 0; coluna < MAX; coluna++){
        operation += m[n][coluna];
    }
    return operation / MAX;
}
