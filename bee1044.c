#include <stdio.h>

void multiples();

int main () {

    int A, B;

    scanf("%d %d", &A, &B);
    multiples(A, B);
    return 0;

}

void multiples(int A, int B) {

    if ((A % B == 0) || (B % A == 0)) {

        printf("Sao Multiplos\n");

    } else {

        printf("Nao sao Multiplos\n");

    }
}
