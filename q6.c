#include <stdio.h>
#define year 2025

int main(){

    int anoNasc, idade;

    printf("Digite seu ano de nascimento: ");
    scanf("%i", &anoNasc);

    idade = year - anoNasc;

    printf("Você tem: %i anos.\n", idade);

    return 0;
}