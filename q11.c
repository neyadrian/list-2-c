#include <stdio.h>
#include <math.h>

int main(){

    double x1, x2, y1, y2, dist;

    printf("Digite o valor de X1: ");
    scanf("%lf", &x1);

    printf("Digite o valor de Y1: ");
    scanf("%lf", &y1);

    printf("Digite o valor de X2: ");
    scanf("%lf", &x2);

    printf("Digite o valor de Y2: ");
    scanf("%lf", &y2);

    dist = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("Distância: %.4f\n", dist);

    return 0;
}