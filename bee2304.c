// BANCO IMOBILIÁRIO
#include <stdio.h>

int main() {
    int daliaMoney, eloiMoney, felixMoney;
    int operations;
    int i;

    scanf("%d %d", &daliaMoney, &operations);
    eloiMoney = daliaMoney;
    felixMoney = daliaMoney;

    for (i = 0; i < operations; i++) {
        char operationType;
        char player1, player2;
        int value;

        scanf(" %c", &operationType);

        switch(operationType){
            case 'C':
                scanf(" %c %d", &player1, &value);
                switch(player1){
                    case 'D':
                        daliaMoney -= value;
                        break;
                    case 'E':
                        eloiMoney -= value;
                        break;
                    case 'F':
                        felixMoney -= value;
                        break;
                    default:
                        break;
                }
                break;
            case 'V':
                scanf(" %c %d", &player1, &value);
                switch(player1){
                    case 'D':
                        daliaMoney += value;
                        break;
                    case 'E':
                        eloiMoney += value;
                        break;
                    case 'F':
                        felixMoney += value;
                        break;
                    default:
                        break;
                }                
                break;
            case 'A':
                scanf(" %c %c %d", &player1, &player2, &value);
                switch(player1){
                    case 'D':
                        daliaMoney += value;
                        break;
                    case 'E':
                        eloiMoney += value;
                        break;
                    case 'F':
                        felixMoney += value;
                        break;
                    default:
                        break;
                }

                switch(player2){
                    case 'D':
                        daliaMoney -= value;
                        break;
                    case 'E':
                        eloiMoney -= value;
                        break;
                    case 'F':
                        felixMoney -= value;
                        break;
                    default:
                        break;
                }
                break;
            default:
                break;
        }
    }

    printf("%d %d %d\n", daliaMoney, eloiMoney, felixMoney);

    return 0;
}