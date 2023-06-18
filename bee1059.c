#include <stdio.h>

void evenNumbers();

int main () {

    evenNumbers();
    return 0;

}

void evenNumbers() {

    int i = 1;
    int num = 1;
    while (i <= 100) {
        if (num % 2 == 0) {

            printf("%d\n", num);

        }
        i++;
        num++;
    }
}
