#include <stdio.h>

int scanNumbers();
void oddNumbers();
int main () {

    oddNumbers();

    return 0;

}
int scanNumbers() {

    int num;

    scanf("%d", &num);
    
    return num;

}
void oddNumbers() {

    int number = scanNumbers();
    int count = 1;

    if ((number >= 1) && (number <= 1000)) {

        while (number >= count) {
            if (count % 2 != 0) {

                printf("%d\n", count);

            }
            count++;

        }

    }

}