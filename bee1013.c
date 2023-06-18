#include <stdio.h>
#include <stdlib.h>

int MaiorAB(int, int);

int main() {
    int a, b, c, maior;
    scanf("%d %d %d", &a, &b, &c);
    maior = MaiorAB(a, b);
    maior = MaiorAB(maior, c);
    printf("%d eh o maior\n", maior);
    return 0;
}
int MaiorAB(int a, int b){
    return (a + b + abs(a-b)) / 2;
}
