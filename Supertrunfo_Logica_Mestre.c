#include <stdio.h>
#include <string.h>

// Definindo uma struct para representar uma carta
struct Carta {
    char codestado;     
    char codcarta[10];   
    char cidade[50];    
    int pop;            
    float areakm;       
    float pib;          
    int pointtur;       
    float densidadepop;
    float pibpercapita; 
};

int main() {
    struct Carta carta1, carta2;

    // Cadastro da Carta 1
    strcpy(carta1.cidade, "São Paulo");
    carta1.pop = 12325000;
    carta1.areakm = 1521.11;
    carta1.pib = 699280000000;
    carta1.pointtur = 50;

    // Determinando Densidade Populacional 
    carta1.densidadepop = carta1.pop / carta1.areakm;
    
    // Cadastro da Carta 2
    strcpy(carta2.cidade, "Rio de Janeiro");
    carta2.pop = 6748000;
    carta2.areakm = 1200.25;
    carta2.pib = 300500000000;
    carta2.pointtur = 30;

    // Determinando Densidade Populacional e PIB per Capita
    carta2.densidadepop = carta2.pop / carta2.areakm;
    

    // Menu de opções
    int opcao;
    printf("Escolha uma opção:\n");
    printf("Digite 1 para iniciar o jogo\n");
    printf("Digite 2 para ver as regras do jogo\n");
    printf("Digite 3 para sair do jogo\n");
    scanf("%d", &opcao);

    if (opcao == 1) {
        int escolhaJogador;
        printf("\nEscolha um atributo para comparar:\n");
        printf("1 - População\n");
        printf("2 - Área\n");
        printf("3 - PIB\n");
        printf("4 - Pontos turísticos\n");
        printf("5 - Densidade populacional\n");
        scanf("%d", &escolhaJogador);

        switch (escolhaJogador) {
            case 1:
                printf(" São Paulo: 12325000 hab\n");
                printf(" Rio de Janeiro: 6748000 hab\n");
                if (carta1.pop > carta2.pop)
                    printf("São Paulo venceu!\n");
                else if (carta1.pop < carta2.pop)
                    printf("Rio de Janeiro venceu!\n");
                else
                    printf("Empate!\n");
                break;

            case 2:
                printf(" São Paulo: 1521.11 Km2 \n");
                printf(" Rio de Janeiro: 1200.25 Km2\n");
                if (carta1.areakm > carta2.areakm)
                    printf("São Paulo venceu!\n");
                else if (carta1.areakm < carta2.areakm)
                    printf("Rio de Janeiro venceu!\n");
                else
                    printf("Empate!\n");
                break;

            case 3:
                printf(" São Paulo: 699.28 bilhões de reais \n");
                printf(" Rio de Janeiro: 300.50 bilhões de reais\n");
                if (carta1.pib > carta2.pib)
                    printf("São Paulo venceu!\n");
                else if (carta1.pib < carta2.pib)
                    printf("Rio de Janeiro venceu!\n");
                else
                    printf("Empate!\n");
                break;

            case 4:
                printf(" São Paulo: 50 \n");
                printf(" Rio de Janeiro: 30\n");
                if (carta1.pointtur > carta2.pointtur)
                    printf("São Paulo venceu!\n");
                else if (carta1.pointtur < carta2.pointtur)
                    printf("Rio de Janeiro venceu!\n");
                else
                    printf("Empate!\n");
                break;

            case 5:
                printf(" São Paulo: 8101.47 hab/Km2 \n");
                printf(" Rio de Janeiro: 5622.24 hab/Km2 \n");
                if (carta1.densidadepop < carta2.densidadepop)
                    printf("São Paulo venceu!\n");
                else if (carta1.densidadepop > carta2.densidadepop)
                    printf("Rio de Janeiro venceu!\n");
                else
                    printf("Empate!\n");
                break;

            default:
                printf("Opção inválida!\n");
                break;
        }
    } else if (opcao == 2) {
        printf("\nRegras do jogo:\n");
        printf("1. Escolha um atributo para comparar.\n");
        printf("2. O jogador com o maior valor vence a rodada.\n");
        printf("3. Em caso de empate, ninguém ganha pontos.\n");
    } else if (opcao == 3) {
        printf("Saindo do jogo...\n");
    } else {
        printf("Opção inválida!\n");
    }

    return 0;
}