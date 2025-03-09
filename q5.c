#include <stdio.h>

int main(){

    int y = 6, z = 8, c = 2, x1, x2, soma;

    x1 = ((y * z) - z) / c;
    x2 = (z / 2) / y++;

    soma = x1 + x2;

    printf("%i\n", soma);
    
    return 0;
}