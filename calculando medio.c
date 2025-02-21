#include <stdio.h>

int main(){

    int nota1, nota2, nota3;
    float media;

    printf("*** Programa de Cálculo de Média ***\n");

    printf("Insira nota 01: \n");
    scanf("%d", &nota1);

    printf("Insira nota 02: \n");
    scanf("%d", &nota2);

    printf("Insira nota 03: \n");
    scanf("%d", &nota3);

    media = (float)(nota1 + nota2 + nota3) / 3;
    printf("A sua Média é: %.2f", media);

    return 0;
}   