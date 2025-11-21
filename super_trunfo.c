#include <stdio.h>


    char estado1, estado2;              // Letra de A a H
    char codigo1[4], código2[4];        // Código Ex: A03
    char Cidade1[50],Cidade2[50];       // Nome das cidades
    int população1, população2;         // Número de habitantes
    float area1, area2;                 // Área em km²
    float pib1, pib2;                   // PIB
    int pontos1, pontos2;               // Quantidade de pontos turísticos

int main() {
    printf(" Cadastro da Carta 1 \n"); //Inicio das Informações

    printf("Estado (A-H): ");          //Estado com apenas um caractere entre A e H
    scanf(" %c", &estado1);

    printf("Codigo da Carta (ex: A01): ");  //Código da carta com Um caracter e 2 Numerais
    scanf("%s", codigo1);

    printf("Nome da Cidade: ");          //Nome da cidade
    scanf("%s", &Cidade1);          

    printf("Populacao: ");             //População
    scanf("%d", &população1);

    printf("Area (km²): ");            //Area sem a obrigação de colocar 'km²'
    scanf("%f", &area1);

    printf("PIB: ");                   //PIB 
    scanf("%f", &pib1);

    printf("Numero de Pontos Turisticos: "); //Pontos turísticos 
    scanf("%d", &pontos1);


    printf("\n Cadastro da Carta 2 \n");    //Todo o procedimento repetido código por código

    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Codigo da Carta (ex: A01): ");
    scanf("%s", &código2);

    printf("Nome da Cidade: ");
    scanf("%s", Cidade2);

    printf("Populacao: ");
    scanf("%d", &população2);

    printf("Area (km²): ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turisticos: ");
    scanf("%d", &pontos2);

    printf("\nCadastro concluido com sucesso!\n"); //Todas as informações passadas

    //Exibição da Primeira Carta Trunfo

    printf("\n======= CARTA nº1 =======\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s \n", Cidade1);
    printf("População: %d Habitantes\n", população1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos1);

    //Exibição da Segunda Carta Trunfo

    printf("\n======= CARTA nº2 =======\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", código2);
    printf("Nome da Cidade: %s\n", Cidade2);
    printf("População: %d Habitantes\n", população2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos2);

    //Fim do Código

    return 0;
}

