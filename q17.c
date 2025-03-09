#include <stdio.h>
#include <math.h>
#define PI 3.14

int main(){

    float angulo, seno, cosseno, tangente, radiano;

    printf("Digite o ângulo em graus: ");
    scanf("%f", &angulo);

    radiano = angulo * PI / 180;

    seno = sin(radiano);
    cosseno = cos(radiano);
    tangente = tan(radiano);

    printf("Seno: %.2f\n Cosseno: %.2f\n Tangente: %.2f\n", seno, cosseno, tangente);

    return 0;
}