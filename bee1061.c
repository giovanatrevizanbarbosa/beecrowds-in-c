/*

Pedrinho está organizando um evento em sua Universidade. O evento deverá ser no mês de Abril, iniciando e terminando dentro do mês. O problema é que Pedrinho quer calcular o tempo que o evento vai durar, uma vez que ele sabe quando inicia e quando termina o evento.

Sabendo que o evento pode durar de poucos segundos a vários dias, você deverá ajudar Pedrinho a calcular a duração deste evento.

Entrada
Como entrada, na primeira linha vai haver a descrição “Dia”, seguido de um espaço e o dia do mês no qual o evento vai começar. Na linha seguinte, será informado o momento no qual o evento vai iniciar, no formato hh : mm : ss. Na terceira e quarta linha de entrada haverá outra informação no mesmo formato das duas primeiras linhas, indicando o término do evento.

Saída
Na saída, deve ser apresentada a duração do evento, no seguinte formato:

W dia(s)
X hora(s)
Y minuto(s)
Z segundo(s)

Obs: Considere que o evento do caso de teste para o problema tem duração mínima de 1 minuto.

*/

#include <stdio.h>

void duration(int dI, int hI, int mI, int sI, int dF, int hF, int mF, int sF);

int main () {

    int dInicio, hInicio, mInicio, sInicio, dFinal, hFinal, mFinal, sFinal;
    char c; 
    char dia[4];

    scanf("%s %d\n", dia, &dInicio);
    scanf("%d %c %d %c %d", &hInicio, &c, &mInicio, &c, &sInicio);

    scanf("%s %d\n", dia, &dFinal);
    scanf("%d %c %d %c %d", &hFinal, &c, &mFinal, &c, &sFinal);

    if ((dInicio >= 0) && (hInicio >= 0) && (mInicio >= 0) && (sInicio >= 0) && (dFinal >= 0) && (hFinal >= 0) && (mFinal >= 0) && (sFinal >= 0)) {

        duration(dInicio, hInicio, mInicio, sInicio, dFinal, hFinal, mFinal, sFinal);

    }

    return 0;

}
void duration(int dI, int hI, int mI, int sI, int dF, int hF, int mF, int sF) {

    int d, h, m, s;

    s = sF - sI;
    m = mF - mI;
    h = hF - hI;
    d = dF - dI;

    if (s < 0) {
	    s += 60;
	    m--;
    }

    if (m < 0) {
        m += 60;
        h--;
    }

    if (h < 0){
        h += 24;
        d--;
    }

    printf("%d dia(s)\n", d);
    printf("%d hora(s)\n", h);
    printf("%d minuto(s)\n", m);
    printf("%d segundo(s)\n", s);

}