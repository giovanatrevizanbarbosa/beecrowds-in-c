#include <stdio.h>
#include <string.h>

int winRate(char board[]);

int main() {
    int n;
    char board[10005];
    int game = 1;
    while (game == 1) {
        scanf("%d", &n);
        if(n != 0){
            scanf("%s", board);
            if(winRate(board)){
                printf("S\n");
            }else{
                printf("N\n");
            }
        }else{
            game = 0;
        }
    }
    return 0;
}
int winRate(char board[]){
    int n = strlen(board);
    for(int i = 0; i < n - 2; i++){
        if((board[i] == '.' && board[i + 1] == '.' && board[i + 2] == '.') && (n % 2 != 0)){
            return 1;
        }
        if((board[i] == '.' && board[i + 1] == '.' && board[i + 1] == 'X') && (n % 2 != 0)){
            return 1;
        }
        if((board[i] == 'X' && board[i + 1] == '.') && (n % 2 == 0)){
            return 1;
        }
    }
    return 0;
}