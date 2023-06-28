#include <stdio.h>
#include <math.h>

#define MAX 20

int main(){
    int cases;
    int sizeoOfMatrix;
    
    scanf("%d", &cases);
    
    for(int matrixNumber = 4; matrixNumber < cases + 4; matrixNumber++){
        if(matrixNumber != 4){
            printf("\n");
        }

        scanf("%d", &sizeoOfMatrix);
        printf("Quadrado da matriz #%d:\n", matrixNumber);
        
        unsigned long long matrix[MAX][MAX], digits[MAX];
        
        for(int i = 0; i < sizeoOfMatrix; i++){
            digits[i] = 1;
        }
        
        for(int line = 0; line < sizeoOfMatrix; line++){
            for(int column = 0; column < sizeoOfMatrix; column++){
                scanf("%llu", &matrix[line][column]);
                matrix[line][column] *= matrix[line][column];
                
                if(matrix[line][column]){
                    if(digits[column] < (unsigned long long)(log10(matrix[line][column])) + 1){
                        digits[column] = (unsigned long long)(log10(matrix[line][column])) + 1;
                    }
                }
            }
        }
        
        for(int line = 0; line < sizeoOfMatrix; line++){
            for(int column = 0; column < sizeoOfMatrix; column++){
                if(column == 0){
                    printf("%*llu", (int)digits[column], matrix[line][column]);
                }else{
                    printf(" %*llu", (int)digits[column], matrix[line][column]);
                }
            }
            printf("\n");
        }
    }
    
    return 0;
}