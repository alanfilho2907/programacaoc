#include <stdio.h>;
#include <string.h>

// Definindo uma struct para representar uma carta
struct Carta {
    char codestado;      // Código do Estado (char)
    char codcarta[10];   // Código da carta (string)
    char cidade[50];     // Nome da cidade (string)
    int pop;             // População da cidade (int)
    float areakm;        // Área da cidade em Km2 (float)
    float pib;           // Produto interno bruto da cidade (float)
    int pointtur;        // Quantidade de pontos turísticos na cidade (int)
    float densidadepop_1, densidadepop_2;  // Densidade Populacional (float)
    float pibpercapita_1, pibpercapita_2; // Pib per Capita (float)
};

int main() {
    struct Carta carta1, carta2; // Criando duas variáveis do tipo Carta

    printf("*** Cadastro das Cartas Supertrunfo ***\n");

    // Cadastro da Carta 1
    printf("\nCarta 1\n");
    printf("Digite o código do Estado: ");
    scanf(" %c", &carta1.codestado);

    printf("Digite o código da carta 1: ");
    scanf("%s", carta1.codcarta);

    printf("Digite o nome da cidade da carta 1: ");
    scanf(" %[^\n]", carta1.cidade);

    printf("Digite a população da cidade da carta 1: ");
    scanf("%d", &carta1.pop);

    printf("Digite a área da cidade da carta 1 (em Km2): ");
    scanf("%f", &carta1.areakm);

    printf("Digite o PIB da cidade da carta 1: ");
    scanf("%f", &carta1.pib);

    printf("Digite o número de pontos turísticos da cidade da carta 1: ");
    scanf("%d", &carta1.pointtur);

    // Determinando Densidade Populacional e PIB per Capita da Carta 1

    float densidadepop_1 = (float) carta1.pop / carta1.areakm;
    printf("A densidade populacional é: %.2f hab/Km2", densidadepop_1);

    float pibpercapita_1 = (float) carta1.pib / carta1.pop;
    printf(" O PIB per Capita é: %.2f reais", pibpercapita_1);


    // Cadastro da Carta 2
    printf("\nCarta 2\n");
    printf("Digite o código do Estado: ");
    scanf(" %c", &carta2.codestado);

    printf("Digite o código da carta 2: ");
    scanf("%s", carta2.codcarta);

    printf("Digite o nome da cidade da carta 2: ");
    scanf(" %[^\n]", carta2.cidade);

    printf("Digite a população da cidade da carta 2: ");
    scanf("%d", &carta2.pop);

    printf("Digite a área da cidade da carta 2 (em Km2): ");
    scanf("%f", &carta2.areakm);

    printf("Digite o PIB da cidade da carta 2: ");
    scanf("%f", &carta2.pib);

    printf("Digite o número de pontos turísticos da cidade da carta 2: ");
    scanf("%d", &carta2.pointtur);

     // Determinando Densidade Populacional e PIB per Capita da Carta 2

     float densidadepop_2 = (float) carta2.pop / carta2.areakm;
     printf("A densidade populacional é: %.2f hab/Km2", densidadepop_2);
 
     float pibpercapita_2 = (float) carta2.pib / carta2.pop;
     printf(" O PIB per Capita é: %.2f reais", pibpercapita_2);

    // Exibindo os dados das cartas
    printf("\n*** Cartas Cadastradas ***\n");

    // Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", carta1.codestado);
    printf("Código: %s\n", carta1.codcarta);
    printf("Nome da Cidade: %s\n", carta1.cidade);
    printf("População: %d\n", carta1.pop);
    printf("Área: %.2f Km2\n", carta1.areakm);
    printf("PIB: %.2f bilhões de reais\n", carta1.pib);
    printf("Número de pontos turísticos: %d\n", carta1.pointtur);
    printf("Densidade Populacional: %.2f hab/Km2", densidadepop_1);
    printf("O PIB per Capita é: %.2f", pibpercapita_1);
    
    // Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", carta2.codestado);
    printf("Código: %s\n", carta2.codcarta);
    printf("Nome da Cidade: %s\n", carta2.cidade);
    printf("População: %d\n", carta2.pop);
    printf("Área: %.2f Km2\n", carta2.areakm);
    printf("PIB: %.2f bilhões de reais\n", carta2.pib);
    printf("Número de pontos turísticos: %d\n", carta2.pointtur);
    printf("Densidade Populacional: %.2f hab/Km2", densidadepop_2);
    printf("O PIB per Capita é: %.2f", pibpercapita_2);

    return 0;
}
