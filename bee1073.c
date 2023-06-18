#include <stdio.h>
#include <math.h>

void power(int value);

int main () {

    int value;

    scanf("%d", &value);

    power(value);

    return 0;

}
void power(int value) {

    int i = 0;
    int num = 1;
    int power;

    if ((value < 2000) && (value > 5)) {
        while (i < value) {
            if (num % 2 == 0) {

                power = pow(num, 2);

                printf("%d^2 = %d\n", num, power);

            }
            i++;
            num++;
        }


    }

}
