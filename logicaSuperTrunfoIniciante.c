# include <stdio.h>

int main (){

    // Área para definição das variáveis para armazenar as propriedades das cidades

    char estado1[20];
    char codigo1[20];
    char nomeCidade1[50];
    double populacao1;
    double area1;
    double pib1;
    int pontosTuristicos1;
    double densidadePopulacional1;
    double pibPerCapita1;

    char estado2[20];
    char codigo2[20];
    char nomeCidade2[50];
    double populacao2;
    double area2;
    double pib2;
    int pontosTuristicos2;
    double densidadePopulacional2;
    double pibPerCapita2;

    // Área para entrada de dados da carta 01

    printf ("Informe os detalhes da Carta 01\n");
    printf ("Qual o estado?\n");
    scanf ("%s", estado1);

    printf ("Qual o código da Carta?\n");
    scanf ("%s", codigo1);

    printf ("Qual o Nome da Cidade?\n");
    scanf ("%s", nomeCidade1);

    printf ("Qual o tamanho da População?\n");
    scanf ("%lf", &populacao1);

    printf ("Qual a Área?\n");
    scanf ("%lf", &area1);

    printf ("Qual o PIB?\n");
    scanf ("%lf", &pib1);

    printf ("Qual o Número de Pontos Turísticos?\n");
    scanf ("%d", &pontosTuristicos1);    

    // Área para entrada de dados da carta 02

    printf ("Informe os detalhes da Carta 02\n");
    printf ("Qual o estado?\n");
    scanf ("%s", estado2);

    printf ("Qual o código da Carta?\n");
    scanf ("%s", codigo2);

    printf ("Qual o Nome da Cidade?\n");
    scanf ("%s", nomeCidade2);

    printf ("Qual o tamanho da População?\n");
    scanf ("%lf", &populacao2);

    printf ("Qual a Área?\n");
    scanf ("%lf", &area2);

    printf ("Qual o PIB?\n");
    scanf ("%lf", &pib2);

    printf ("Qual o Número de Pontos Turísticos?\n");
    scanf ("%d", &pontosTuristicos2);

    // Área para calculo de densidade populacional e do pib per Capita.

    // Calculo para carta 01

    densidadePopulacional1 = populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;

    // Calculo para carta 02

    densidadePopulacional2 = populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;

    // Área para comparação entre as cartas do jogo

    // Somente 1 dos atributos pode ser o ESCOLHIDO. 

    printf("-----BATALHA DAS CARTAS-----\n");
    printf("Atributo: Pib Per Capita!\n");
    printf("Carta 1: %lf \n", pibPerCapita1);
    printf("Carta 2: %lf \n", pibPerCapita2);
    if (pibPerCapita1>pibPerCapita2){
        printf ("O Pib Per Capita da cidade 01 eh maior. \n");
        printf("A carta 01 venceu!!!!!\n");
        } else {
        printf ("O Pib Per Capita da cidade 02 eh maior. \n");
        printf ("A carta 02 venceu!!!!!\n");
    }

    return 0;
}