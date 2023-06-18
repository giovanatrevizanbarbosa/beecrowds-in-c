#include <stdio.h>

int scanNumbers(int num);
void evenOdd(int value);

int main () {

    int value;

    scanf("%d", &value);

    evenOdd(value);

    return 0;

}
int scanNumbers(int num) {

    scanf("%d", &num);
    
    return num;

}
void evenOdd(int value) {

    int i = 0;

    if (value < 10000) {

        while (i < value) {
            int num = scanNumbers(num);
            if (num == 0) {

                printf("NULL\n");

            } else {
                if (num % 2 == 0) {
                    if (num > 0) {

                        printf("EVEN POSITIVE\n");

                    } else {

                        printf("EVEN NEGATIVE\n");

                    }
                } else {
                    if (num > 0) {

                        printf("ODD POSITIVE\n");

                    } else {

                        printf("ODD NEGATIVE\n");

                    }
                }
            }
            i++;
        }
    }
}
