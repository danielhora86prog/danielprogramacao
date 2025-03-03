#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int escolhajogador, escolhacomputador;
    srand (time(0));

    printf("Jogo de Jokenpô\n");
    printf("Escolha uma opção:\n");
    printf("1. Pedra\n");
    printf("2. Papel\n");
    printf("3. Tesoura\n");
    printf("Escolha:");
    scanf("%d", &escolhajogador);

    escolhacomputador = rand() % 3 + 1;

    switch (escolhajogador)
    {
    case 1:
        printf("Jogador esclheu Pedra - ");
        break;
    
    case 2:
        printf("Jogador esclheu Papel - ");
        break;
        
    case 3:
        printf("Jogador esclheu Tesoura - ");
    break;
    default:
        printf("Opção invalida!\n");
        break;
    }

    switch (escolhacomputador)
    {
    case 1:
        printf("Computador esclheu Pedra\n");
        break;
    
    case 2:
        printf("Computador esclheu Papel\n");
        break;
        
    case 3:
        printf("Computador esclheu Tesoura\n");
    break;
    }

    if (escolhacomputador == escolhajogador)
    {
        printf("### O Jogo Empatou! ###\n");
    } else if ((escolhajogador == 1) && (escolhacomputador == 3) ||
                (escolhajogador == 2) && (escolhacomputador == 1) ||
                (escolhajogador == 3) && (escolhacomputador == 2))
    {
        printf("### Parabêns, Você ganhou! ###\n");
    } else {
        printf("### Você Perdeu! ###\n");
    }
    
    
return 0;

}