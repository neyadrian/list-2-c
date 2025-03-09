#include <stdio.h>

int main(){
    
    int num, dobro;

    printf("Digite um número: ");
    scanf("%i", &num);

    dobro = num * 2;

    printf("O dobro do número digitado e: %i\n",dobro);

    return 0;
}