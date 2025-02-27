#include <stdio.h>

int main (){

    int numero = 8, resultado;

    resultado = numero % 2;

    printf("A variavel resultado é: %d", resultado);

    if ( (numero % 2 == 0)) {
        printf("O número é par:\n");
    } else {
        printf("O numero é ímpar\n");
    }
    
    
    return 0;




}