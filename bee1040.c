#include <stdio.h>

float weightedAverage(float, float, float, float);
void verifyAprovation(float);


int main() {

    float num1, num2, num3, num4, average;

    scanf("%f %f %f %f", &num1, &num2, &num3, &num4);
    average = weightedAverage(num1, num2, num3, num4);
    printf("Media: %.1f\n", average);
    verifyAprovation(average);

    return 0;
}

float weightedAverage(float num1, float num2, float num3, float num4) {

    return ((2 * num1) + (3 * num2) + (4 * num3) + (1 * num4)) / 10;

}
void verifyAprovation(float average) {

    float examGrade;

    if (average >= 7){
        printf("Aluno aprovado.\n");
    } else {
        if (average < 5.0) {
            printf("Aluno reprovado.\n");
        } else {
            if (average >= 5.0 && average <= 6.9) {
                printf("Aluno em exame.\n");
                scanf("%f", &examGrade);
                printf("Nota do exame: %.1f\n", examGrade);
                average = (average + examGrade) / 2.0;
                if (average >= 5) {
                    printf("Aluno aprovado.\n");
                    printf("Media final: %.1f\n", average);
                } else {
                    printf("Aluno reprovado.\n");
                    printf("Media final: %.1f\n", average);
                }
            }
        }
    }
}
