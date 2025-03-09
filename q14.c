#include <stdio.h>
#include <math.h>

int main(){
    
    float preco, quant, valor;

    printf("Digite o preço unitário: ");
    scanf("%f", &preco);

    printf("Digite a quantidade: ");
    scanf("%f", &quant);

    valor = preco * quant;

    printf("O valor toal é de: %.2f\n", valor);

    return 0;
}