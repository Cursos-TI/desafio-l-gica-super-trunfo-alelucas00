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

    int escolhaDoJogador;

    // Área para entrada de dados da carta 01

    printf ("*****  CARTA 01  *****\n");
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

    printf ("*****  CARTA 02  *****\n");
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

    // AGORA VAMO ATRIBUIR UM MENU ONDE O JOGADOR ESCOLHE QUAL ATRIBUTO SERÁ ESCOLHIDO PARA COMPARAÇAO

    printf("-----   BATALHA DAS CARTAS   -----\n");
    printf("Escolha uma das opções abaixo e verifique qual EH a vencedora...\n");
    printf("1 - Populacao.\n");
    printf("2 - Area.\n");
    printf("3 - PIB.\n");
    printf("4 - Pontos Turisticos.\n");
    printf("5 - Densidade Populacional.\n");
    printf("6 - Pib Per Capita.\n");

    scanf("%d", &escolhaDoJogador);

    switch (escolhaDoJogador)
    {
    case 1:
       if (populacao1>populacao2){
        printf ("A Populacao de %s eh maior. \n",nomeCidade1 );
        printf("A carta 01 venceu!!!!!\n");
        } else if (populacao1<populacao2) {
        printf ("A Populacao de %s eh maior. \n",nomeCidade2 );
        printf ("A carta 02 venceu!!!!!\n");
        } else {
            printf("EMPATE...\n");
        }
        break;
    case 2:
        if (area1>area2){
        printf ("A Area de %s eh maior. \n",nomeCidade1 );
        printf("A carta 01 venceu!!!!!\n");
        } else if (area1<area2) {
        printf ("A Area de %s eh maior. \n",nomeCidade2 );
        printf ("A carta 02 venceu!!!!!\n");
        } else {
            printf("EMPATE...\n");
        }
        break;
    case 3:
        if (pib1>pib2){
        printf ("O PIB de %s eh maior. \n",nomeCidade1 );
        printf("A carta 01 venceu!!!!!\n");
        } else if (pib1<pib2) {
        printf ("O PIB de %s eh maior. \n",nomeCidade2 );
        printf ("A carta 02 venceu!!!!!\n");
        } else {
            printf("EMPATE...\n");
        }
        break;
    case 4:
        if (pontosTuristicos1>pontosTuristicos2){
        printf ("O numero de Pontos Turisticos de %s eh maior. \n",nomeCidade1 );
        printf("A carta 01 venceu!!!!!\n");
        } else if (pontosTuristicos1<pontosTuristicos2) {
        printf ("O numero de Pontos Turisticos de %s eh maior. \n",nomeCidade2 );
        printf ("A carta 02 venceu!!!!!\n");
        } else {
            printf("EMPATE...\n");
        }
        break;        
    case 5:
        if (densidadePopulacional1<densidadePopulacional2){
        printf ("A Densidade Populacional de %s eh MENOR. \n",nomeCidade1 );
        printf("A carta 01 venceu!!!!!\n");
        } else if (densidadePopulacional1>densidadePopulacional2) {
        printf ("A Densidade Populacional de %s eh MENOR. \n",nomeCidade2 );
        printf ("A carta 02 venceu!!!!!\n");
        } else {
            printf("EMPATE...\n");
        }
        break;
    case 6:
        if (pibPerCapita1>pibPerCapita2){
        printf ("O PIB Per Capita de %s eh maior. \n",nomeCidade1 );
        printf("A carta 01 venceu!!!!!\n");
        } else if (pibPerCapita1<pibPerCapita2) {
        printf ("O PIB Per Capita de %s eh maior. \n",nomeCidade2 );
        printf ("A carta 02 venceu!!!!!\n");
        } else {
            printf("EMPATE...\n");
        }
        break;
        default:
        printf("OPCAO INVALIDA");
        break;
    }

    return 0;
}