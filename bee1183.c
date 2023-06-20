#include <stdio.h>
#define MAX 12

double avg(double sum);

int main(){
    double m[MAX][MAX];
    char op;
    double sum = 0;
    
    scanf("%c", &op);
    
    for (int linha = 0; linha < MAX; linha++){
        for (int coluna = 0; coluna < MAX; coluna++){
            scanf("%lf", &m[linha][coluna]);
            if (coluna > linha){
                sum += m[linha][coluna];
            }
        }
    }
    
    double result = 0;
    if(op == 'S'){
       result = sum;
        
    }else{
        if(op == 'M'){
            result = avg(sum);
        }
    }
    
    printf("%.1lf\n", result);

    return 0;
}
double avg(double sum){
    return  sum / (((MAX * MAX) - MAX) / 2);
}