

#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    
    int populacao1;
    float pib1;
    char estado1[50];
    char codigo_de_carta1[40];
    float area1;
    char nome_da_cidade1 [55];
    int numeros_de_pontos_turisticos1;

    int populacao2;
    float pib2;
    char estado2[45];
    char codigo_de_carta2[40];
    float area2;
    char nome_da_cidade2[35];
    int numeros_de_pontos_turisticos2;

    printf("Carta 1 \n");

    printf("Digite a letra do seu estado: ");
    scanf("%s", &estado1);

    printf("Digite o codigo da carta: ");
    scanf("%s", &codigo_de_carta1);
    
    printf("Digite o Nome da Cidade:  ");
    scanf("%s", &nome_da_cidade1 );

    printf("Digite a População: ");
    scanf("%d", & populacao1);

    printf("Digite a Área:  ");
    scanf("%f", &area1);

    printf("Digite o PIB:. ");
    scanf("%f", &pib1);

    printf("Digite o Número de Pontos Turísticos:  ");
    scanf("%d", &numeros_de_pontos_turisticos1);

    
    
    printf("Carta 2 \n");

    

    printf("digite a letra do seu estado: ");
    scanf("%s", & estado2);

    printf("digite o codigo da carta: ");
    scanf("%s", &codigo_de_carta2);
    
    printf("Nome da Cidade:  ");
    scanf("%s", &nome_da_cidade2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área: ");
    scanf("%f", & area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos:  ");
    scanf("%d", &numeros_de_pontos_turisticos2);

    printf("Carta 1 \n");

    printf("letra do estado: %s\nCódigo da carta: %s\nNome da cidade: %s\nPopulação: %d \nÁrea: %f\nPib: %f \nNúmeros de pontos turisticos: %d \n\n", estado1,codigo_de_carta1,
        nome_da_cidade1, populacao1, area1,pib1,numeros_de_pontos_turisticos1);

    printf("Carta 2 \n");

    printf("letra do estado: %s\nCódigo da carta: %s\nNome da cidade: %s\nPopulação: %d \nÁrea: %f\nPib: %f \nNúmeros de pontos turisticos: %d \n", estado2,codigo_de_carta2,
        nome_da_cidade2, populacao2, area2,pib2,numeros_de_pontos_turisticos2);
    
    return 0;


    
}



