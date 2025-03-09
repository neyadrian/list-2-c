#include <stdio.h>

int main(){

    int num;

    printf("Digite um número: ");
    scanf("%d", &num);

    printf("Número em Decimal: %d\n", num);
    printf("Número em Octal: %o\n", num);
    printf("Número em Hexadecimal: %x\n", num);

    return 0;
}