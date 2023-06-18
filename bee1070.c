#include <stdio.h>

void odds();

int main () {

    odds();

    return 0;

}
void odds() {

    int num;
    int count = 0;

    scanf("%d", &num);

    if (num >= 0) {
        while (count < 6) {
            if (num % 2 != 0) {

                printf("%d\n", num);
                count++;

            }
            num++;

        }
    }
}