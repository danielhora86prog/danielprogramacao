#include <stdio.h>
#include <stdlib.h>

// Estrutura para armazenar as informações das cartas
typedef struct {
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade_demografica;
} Carta;

// Função para comparar os atributos e determinar o vencedor
void comparar_cartas(Carta jogador, Carta computador, int escolha) {
    printf("\nComparando as cartas...\n");
    printf("Você escolheu o atributo: ");

    float valor_jogador, valor_computador;

    switch (escolha) {
        case 1:
            printf("População\n");
            valor_jogador = jogador.populacao;
            valor_computador = computador.populacao;
            break;
        case 2:
            printf("Área\n");
            valor_jogador = jogador.area;
            valor_computador = computador.area;
            break;
        case 3:
            printf("PIB\n");
            valor_jogador = jogador.pib;
            valor_computador = computador.pib;
            break;
        case 4:
            printf("Número de Pontos Turísticos\n");
            valor_jogador = jogador.pontos_turisticos;
            valor_computador = computador.pontos_turisticos;
            break;
        case 5:
            printf("Densidade Demográfica\n");
            valor_jogador = jogador.densidade_demografica;
            valor_computador = computador.densidade_demografica;
            break;
        default:
            printf("Opção inválida!\n");
            return;
    }

    // Exibir os valores dos atributos das cartas
    printf("\n%s: %.2f\n", jogador.nome, valor_jogador);
    printf("%s: %.2f\n", computador.nome, valor_computador);

    // Determinar o vencedor
    if (escolha == 5) {
        // Para Densidade Demográfica, o menor valor vence
        if (valor_jogador < valor_computador)
            printf("\nVocê venceu!\n");
        else if (valor_jogador > valor_computador)
            printf("\nComputador venceu!\n");
        else
            printf("\nEmpate!\n");
    } else {
        // Para os outros atributos, o maior valor vence
        if (valor_jogador > valor_computador)
            printf("\nVocê venceu!\n");
        else if (valor_jogador < valor_computador)
            printf("\nComputador venceu!\n");
        else
            printf("\nEmpate!\n");
    }
}

int main() {
    int escolha;
    
    // Criando duas cartas para teste
    Carta jogador = {"Brasil", 214000000, 8515767.0, 2.05, 10, 25.1};
    Carta computador = {"Alemanha", 83100000, 357022.0, 4.85, 8, 232.8};

    // Exibir menu de atributos
    printf("Super Trunfo - Escolha um atributo para comparar:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");
    printf("Escolha: ");
    scanf("%d", &escolha);

    // Comparar as cartas com base na escolha
    comparar_cartas(jogador, computador, escolha);

    return 0;
}
