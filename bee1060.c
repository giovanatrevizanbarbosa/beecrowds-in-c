#include <stdio.h>

void positiveNumbers();

int main() {

    positiveNumbers();

    return 0;

}
void positiveNumbers() {

    double positives;
    double average = 0;
    double soma = 0;
    int count = 0;

    while (count < 6) {

        double number;

        scanf("%lf", &number);

        if (number > 0) {

            soma = soma + number; 

            positives++;

        }
        count++;

    }
    printf("%.0lf valores positivos\n", positives);
    average = (soma / positives);
    printf("%.1lf\n", average);

}