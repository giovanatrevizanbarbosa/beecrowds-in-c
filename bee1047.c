/*

Leia a hora inicial, minuto inicial, hora final e minuto final de um jogo. A seguir calcule a duração do jogo.

Obs: O jogo tem duração mínima de um (1) minuto e duração máxima de 24 horas.

Entrada
Quatro números inteiros representando a hora de início e fim do jogo.

Saída
Mostre a seguinte mensagem: “O JOGO DUROU XXX HORA(S) E YYY MINUTO(S)” .

*/

#include <stdio.h>
int main()
{
    int hIni, mIni, hFin, mFin;
    int difHoras;
    
    scanf("%d %d %d %d", &hIni, &hFin, &mIni, &mFin);
    difHoras = ((mIni * 60) + mFin) - ((hIni * 60) + hFin);
    
    if(difHoras <= 0) difHoras += 24 * 60;
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", difHoras / 60, difHoras % 60);

    return 0;
}
