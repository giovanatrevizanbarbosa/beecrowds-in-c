#include <stdio.h>

int isTriangle(float, float, float);
void calcPerimeter(float, float, float);
void calcArea(float, float, float);

int main () {

    float a, b, c;

    scanf("%f %f %f", &a, &b, &c);
    (isTriangle(a, b, c)) ? calcPerimeter(a, b, c) : calcArea(a, b, c);

    return 0;

}
int isTriangle(float a, float b, float c) {

    if ((a - b < c) && (a - c < b) && (b - c < a)) {

        return 1;
        
    } else {

        return 0;

    }

}
void calcArea(float a, float b, float c) {

    float area = ((a + b) * c) / 2;
    printf("Area = %.1f\n", area);

}
void calcPerimeter(float a, float b, float c) {

    float perimeter = a + b + c;
    printf("Perimetro = %.1f\n", perimeter);

}