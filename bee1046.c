#include <stdio.h>
int duration(int, int);

int main () {
    int iniHour, finHour, duracao;
    scanf("%d %d", &iniHour, &finHour);
    duracao = duration(iniHour, finHour);
    printf("O JOGO DUROU %d HORA(S)\n", duracao);
    
    return 0;
}

int duration(int iniHour, int finHour) {
    if ((iniHour >= 0) && (finHour < 24)) {

        int totalGame;

        if ((iniHour < 12) && (finHour != 0)) {

            totalGame = finHour - iniHour;
            return totalGame;

        } else {

            totalGame = 24 - iniHour + finHour;
            return totalGame;

        }

    }

    return 0;
    
}