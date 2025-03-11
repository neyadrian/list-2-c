#include <stdio.h>

int main(){

    int num;
    double a1, r, an;

    print("Digite o primeiro termo: ");
    scanf("%lf", &a1);

    printf("Digite a razao: ");
    scanf("%lf", &r);

    printf("Digite o número do termo: ");
    scanf("%i", &num);

    an = a1 = (num - 1) * r;

    printf("O termo %i é: %.2f\n", num, an);

    return 0;
}