#include <stdio.h>
#include <math.h>

int main(){

    int num1, num2, num3;
    float media;

    printf("Digite o primeiro número: ");
    scanf("%i", &num1);

    printf("Digite o segundo número: ");
    scanf("%i", &num2);

    printf("Digite o terceiro número: ");
    scanf("%i", &num3);

    media = ((float) num1 + num2 + num3) / 3;

    printf("A media dos números é: %.2f\n", media);

    return 0;
}