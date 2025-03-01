#include <stdio.h>

int main(){

    int idade;
    float renda;

    printf("Digite a sua idade:\n");
    scanf("%d", &idade);
    printf("Digite a sua renda:\n");
    scanf("%f", &renda);
    
    if (idade < 18 || idade > 60){
        if (renda < 2000.0)
        {
            printf("Você esta qualificado para desconto especial\n");
        } else {
            printf("Você não está qualificado para o desconto devido à renda!\n");
        }
    } else {
        printf("Você não esta qualificado para o desconto devido à idade!\n");
    }

    return 0;
    

}