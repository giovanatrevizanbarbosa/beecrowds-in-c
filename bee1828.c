#include <stdio.h>
#include <string.h>
#define MAX 20

int main(){
    int t;
    scanf("%d", &t);
    
    char shel[MAX], raj[MAX];
    
    for(int index = 1; index <= t; index++){
        scanf("%s", shel);
        scanf("%s", raj);
        
        if(strcmp(shel, raj)== 0){
            printf("Caso #%d: De novo!\n", index);
        }else{
            if((strcmp(shel, "tesoura") == 0 && (strcmp(raj, "papel") == 0 || strcmp(raj, "lagarto") == 0)) ||
                    (strcmp(shel, "papel") == 0 && (strcmp(raj, "pedra") == 0 || strcmp(raj, "Spock") == 0)) ||
                    (strcmp(shel, "pedra") == 0 && (strcmp(raj, "lagarto") == 0 || strcmp(raj, "tesoura") == 0)) ||
                    (strcmp(shel, "lagarto") == 0 && (strcmp(raj, "Spock") == 0 || strcmp(raj, "papel") == 0)) ||
                    (strcmp(shel, "Spock") == 0 && (strcmp(raj, "tesoura") == 0 || strcmp(raj, "pedra") == 0))) {
                printf("Caso #%d: Bazinga!\n", index);
            }else{
                printf("Caso #%d: Raj trapaceou!\n", index);
            }
        }
    }
    
    return 0;
}
