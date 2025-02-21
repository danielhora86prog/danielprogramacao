#include <stdio.h>

int main(){
    int a = 10;
    int b = 3;
    float quociente = (float) a / b; // devido o (float) é forçado uma conversão para float.



    printf("Resultado: %.2f\n", quociente);

    return 0;

}