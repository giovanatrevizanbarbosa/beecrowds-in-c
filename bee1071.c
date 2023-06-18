#include <stdio.h>

void oddSum();

int main () {

    oddSum();

    return 0;

}
void oddSum() {

    int n1, n2, min, max, i;
    int sum = 0;
    scanf("%d %d", &n1, &n2);      

    if (n1 == n2) {       
        max = 0;
        i = 0;
    } else {
        if (n1 < n2) {
            min = n1;
            max = n2;
            i = ++min;
        } else {
            if (n1 > n2) {    
                min = n2;         
                max = n1;
                i = ++min;
            }
        }
    }

    while (i < max) {
        if (i % 2 != 0) {

            sum = sum + i;

        }
        ++i;
    }
    printf("%d\n", sum);
    
}