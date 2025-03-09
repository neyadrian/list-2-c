#include <stdio.h>
#include <math.h>

int main(){
    
    int num;
    double raiz, potencia;

    printf("Digite um número: ");
    scanf("%i", &num);

    raiz = sqrt(num);
    potencia = pow(num, 2);

    printf("Raiz quadrada: %.2f\n", raiz);
    printf("Potencia: %.2f\n", potencia);

    return 0;
}