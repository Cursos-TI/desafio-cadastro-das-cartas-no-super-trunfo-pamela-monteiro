#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

    printf("Super trunfo");

    //Declarando variaveis:

    int codigo;
    int populacao;
    int pontos_turisticos;
    char nome;
    float area;
    double pib;

    // Cadastro

    printf("Digite o codigo da cidade");
    scanf("%d", &codigo);

    printf("Digite a populcao");
    scanf("%d", &populacao);

    printf("Digite o numero de pontos turisticos");
    scanf("%d", &pontos_turisticos);

    printf("Digite o nome da cidade");
    scanf("%s", &nome);

    printf("Digite a area da cidade");
    scanf("%f", &area);

    printf("Digite o PIB da cidade");
    scanf("%f", &pib);

    //impressão

    printf("Codigo:, %d\n", codigo);
    printf("Populacao:, %d\n", populacao);
    printf("Numeros de Pontos Turisticos:, %d", pontos_turisticos);
    printf("Nome da Cidade: %s\n", nome);
    printf("Area: %f\n", area);
    printf("PIB, %f\n", pib);




    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
