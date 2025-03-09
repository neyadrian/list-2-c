#include <stdio.h>
int main(void) {
    int x = 10, y = 3;
    float resultado = (float) x / y;
    /*usei o FLOAT entre parenteses para
      converter as variáveis X e Y de INT
      para FLOAT.*/
    printf("Resultado: %.2f\n", resultado);
    return 0;
}
