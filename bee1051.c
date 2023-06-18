#include <stdio.h>

void calcTaxes(float);

int main() {

    float salary;

    scanf("%f", &salary);
    calcTaxes(salary);
    
    return 0;

}
void calcTaxes(float salary) {

    float tax;

    if ((salary >= 0) && (salary <= 2000.00)) {
        printf("Isento\n");
    } else {
        if ((salary > 2000) && (salary <= 3000)) {

            tax = (salary - 2000) * 0.08;
            printf("R$ %.2f\n", tax);

        } else {
            if ((salary > 3000) && (salary <= 4500)) {

                tax = ((salary - 3000.00) * 0.18) + (1000 * 0.08);
                printf("R$ %.2f\n", tax);

            } else {
                if ((salary > 4500)) {

                    tax = ((salary - 4500.00) * 0.28) + (1500 * 0.18) + (1000 * 0.08);
                    printf("R$ %.2f\n", tax);

                }
            }
        }
    }
}