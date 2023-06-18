#include <stdio.h>

int read();
void interval(int);

int main () {

    int readQnt = read();

    interval (readQnt);

    return 0;

}
int read() {

    int value;

    scanf("%d", &value);

    return value;

}
void interval(int readQnt) {

    int i = 0;
    int in = 0; 
    int out = 0;

    while (i < readQnt) {

        int num = read();

        if ((num >= 10) && (num <= 20)) {

            in++;

        } else {

            out++;

        }
        i++;
    }
    printf("%d in\n%d out\n", in, out);

}