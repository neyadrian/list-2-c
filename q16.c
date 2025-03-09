#include <stdio.h>
#include <math.h>

int main(){

    int num;
    double a1, q, an;

    printf("Digite o primeiro termo: ");
    scanf("%lf", &a1);

    printf("Digite a razão: ");
    scanf("%lf", &q);

    printf("Digite o número do termo: ");
    scanf("%i", &num);

    an = a1 * pow(q, num - 1);

    printf("O termo %i é: %.2f\n", num, an);

    return 0;
}