#include <stdio.h>

int main(){

    float metros, dec, cent, mili;

    printf("Digite a medida em metros: ");
    scanf("%f", &metros);

    dec = metros * 10;
    cent = metros * 100;
    mili = metros * 1000;

    printf("Valor em decimetros: %.2f\n em centimetros: %.2f\n em milimetros: %.2f\n", dec, cent, mili);

    return 0;
}