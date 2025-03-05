#include <stdio.h>

int main() {
    int idade = 16;
    char* resultado;

    resultado = (idade >= 18) ? "Maior de idade" : "Menor de idade";
    printf("Resultado: %s", resultado);

    return 0;



}