#include <stdio.h>

void crescente(int num1, int num2, int num3);

int main () {

    int num1, num2, num3;

    scanf("%d %d %d", &num1, &num2, &num3);
    crescente(num1, num2, num3);

    return 0;

}

void crescente(int num1, int num2, int num3) {

    if (num1 < num3) {
        if (num2 < num3) {
            if (num1 < num2) {

                printf("%d\n%d\n%d\n\n", num1, num2, num3);
                printf("%d\n%d\n%d\n", num1, num2, num3);    

            } else {
        
                printf("%d\n%d\n%d\n\n", num2, num1, num3);
                printf("%d\n%d\n%d\n", num1, num2, num3);

            }

        } else {
            if (num1 < num2) {

                printf("%d\n%d\n%d\n\n", num1, num3, num2);
                printf("%d\n%d\n%d\n", num1, num2, num3);

            }
        }
    } else {
       if (num2 > num3) {
            if (num1 > num2) {

                printf("%d\n%d\n%d\n\n", num3, num2, num1);
                printf("%d\n%d\n%d\n", num1, num2, num3);    

            } else { // (num1 < num2)
        
                printf("%d\n%d\n%d\n\n", num3, num1, num2);
                printf("%d\n%d\n%d\n", num1, num2, num3);

            }
        } else { // (num2 < num3)
            if (num1 > num2) {

                printf("%d\n%d\n%d\n\n", num2, num3, num1);
                printf("%d\n%d\n%d\n", num1, num2, num3);

            } 
        }
    }
}
