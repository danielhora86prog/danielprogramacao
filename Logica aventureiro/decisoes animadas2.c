#include <stdio.h>

int main(){

    int idade, dependentes;
    float renda;

    printf("Digite a sua idade: \n");
    scanf("%d", &idade);
    printf("Digite a sua renda: \n");
    scanf("%f", &renda);
    printf("Digite o numero de dependentes: \n");
    scanf("%d", &dependentes);
    
    if (idade >= 18 && idade <= 65) {
        if (renda < 3000.0){
            if (dependentes > 2){
                printf("Você esta qualicados para os benefícios sociais!\n");
            } else {
                printf("Você não está qualificado devido ao número de dependentes");
            } 
        } else {
            printf("Você não esta qualificado devido a sua renda!\n");
        }
        
    } else {
        printf("Você não esta qualificado devido para os beneficios devido a idade!\n");
    }
    
return 0;
    


}