#include <stdio.h>

int main(){

    int num1, num2, soma, sub, mult;
    float divisao;

    printf("Digite um numero: ");
    scanf("%i", &num1);
    
    printf("Digite outro número: ");
    scanf("%i", &num2);

    soma = num1 + num2;
    sub = num1 - num2;
    mult = num1 * num2;
    divisao = (float) num1 / num2;

    printf("Soma: %i\n Subtracao: %i\n Multiplicacao: %i\n Divisao: %.2f\n", soma, sub, mult, divisao);

    return 0;
}