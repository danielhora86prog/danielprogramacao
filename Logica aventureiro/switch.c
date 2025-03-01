#include <stdio.h>

int main(){
    int opcao;

    printf("Escolha a opção:\n");
    printf("1. Verificar Saldo\n");
    printf("2. Fazer deposíto\n");
    printf("3. Fazer saque\n");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
        printf("Saldo 1.000,00\n");
        break;
        case 2:
        printf("Deposito realizado com sucesso.\n");
        break;
        case 3:
        printf("Saque realizado com sucesso.\n");
        break;
    default:
        printf("Opção invalida\n");
    }

    return 0;

}

