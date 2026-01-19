# include <stdio.h>

int main (){

    // Área para definição das variáveis para armazenar as propriedades das cidades;

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

    int escolha1DoJogador,escolha2DoJogador,resultadoDaEscolha;

    double atributo1Carta1, atributo1Carta2;
    double atributo2Carta1, atributo2Carta2;
    double somaCarta1, somaCarta2;

    // Área para entrada de dados da carta 01;

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

    printf ("Qual o Número de Pontos Turisticos?\n");
    scanf ("%d", &pontosTuristicos1);    

    // Área para entrada de dados da carta 02;

    printf ("*****  CARTA 02  *****\n");
    printf ("Qual o estado?\n");
    scanf ("%s", estado2);

    printf ("Qual o código da Carta?\n");
    scanf ("%s", codigo2);

    printf ("Qual o Nome da Cidade?\n");
    scanf ("%s", nomeCidade2);

    printf ("Qual o tamanho da Populacao?\n");
    scanf ("%lf", &populacao2);

    printf ("Qual a Area?\n");
    scanf ("%lf", &area2);

    printf ("Qual o PIB?\n");
    scanf ("%lf", &pib2);

    printf ("Qual o Número de Pontos Turisticos?\n");
    scanf ("%d", &pontosTuristicos2);

    // Area para calculo de densidade populacional e do pib per Capita;

    // Calculo para carta 01;

    densidadePopulacional1 = populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;

    // Calculo para carta 02;

    densidadePopulacional2 = populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;

    // AGORA VAMOS ATRIBUIR UM MENU ONDE O JOGADOR ESCOLHE QUAL ATRIBUTO SERÁ ESCOLHIDO PARA COMPARAÇAO;

    // MENU ATRIBUTO 01;

    printf("-----   BATALHA DAS CARTAS   -----\n");
    printf(" VOCE TERA QUE ESCOLHER DOIS ATRIBUTOS, E ELES NAO PODEM SE REPETIR...\n");
    printf("Escolha o primeiro\n");
    printf("1 - Populacao.\n");
    printf("2 - Area.\n");
    printf("3 - PIB.\n");
    printf("4 - Pontos Turisticos.\n");
    printf("5 - Densidade Populacional.\n");
    printf("6 - Pib Per Capita.\n");
    scanf("%d", &escolha1DoJogador);

    if (escolha1DoJogador < 1 || escolha1DoJogador > 6) {
        printf("Opcao invalida.\n");
        return 0;
    }

    // MENU ATRIBUTO 02

    printf("AGORA ESCOLHA O SEGUNDO ATRIBUTO\n");
    printf("1 - Populacao.\n");
    printf("2 - Area.\n");
    printf("3 - PIB.\n");
    printf("4 - Pontos Turisticos.\n");
    printf("5 - Densidade Populacional.\n");
    printf("6 - Pib Per Capita.\n");
    scanf("%d", &escolha2DoJogador);

    if (escolha2DoJogador < 1 || escolha2DoJogador > 6 || escolha2DoJogador == escolha1DoJogador) {
        printf("Opcao invalida ou atributo repetido.\n");
        return 0;
    }

    // PRIMEIRO ATRIBUTO, LINCANDO COM A ESCOLHA DO USUARIO;

    switch (escolha1DoJogador) {
        case 1: atributo1Carta1 = populacao1; atributo1Carta2 = populacao2; 
            break;
        case 2: atributo1Carta1 = area1; atributo1Carta2 = area2; 
            break;
        case 3: atributo1Carta1 = pib1; atributo1Carta2 = pib2; 
            break;
        case 4: atributo1Carta1 = pontosTuristicos1; atributo1Carta2 = pontosTuristicos2; 
            break;
        case 5: atributo1Carta1 = densidadePopulacional1; atributo1Carta2 = densidadePopulacional2; 
            break;
        case 6: atributo1Carta1 = pibPerCapita1; atributo1Carta2 = pibPerCapita2; 
            break;
    }
    // SEGUNDO ATRIBUTO;

    switch (escolha2DoJogador) {
        case 1: atributo2Carta1 = populacao1; atributo2Carta2 = populacao2; 
            break;
        case 2: atributo2Carta1 = area1; atributo2Carta2 = area2; 
            break;
        case 3: atributo2Carta1 = pib1; atributo2Carta2 = pib2; 
            break;
        case 4: atributo2Carta1 = pontosTuristicos1; atributo2Carta2 = pontosTuristicos2; 
            break;
        case 5: atributo2Carta1 = densidadePopulacional1; atributo2Carta2 = densidadePopulacional2; 
            break;
        case 6: atributo2Carta1 = pibPerCapita1; atributo2Carta2 = pibPerCapita2; 
            break;
    }

    // SOMATORIA DOS ATRIBUTOS;
    somaCarta1 = atributo1Carta1 + atributo2Carta1;
    somaCarta2 = atributo1Carta2 + atributo2Carta2;

    // EXIBINDO OS RESULTADOS AO USUARIO;

    printf("\n===== RESULTADO FINAL =====\n");
    printf("Cidade 1: %s\n", nomeCidade1);
    printf("Cidade 2: %s\n\n", nomeCidade2);

    printf("%s: %.2lf + %.2lf = %.2lf\n",
           nomeCidade1, atributo1Carta1, atributo2Carta1, somaCarta1);

    printf("%s: %.2lf + %.2lf = %.2lf\n", nomeCidade2, atributo1Carta2, atributo2Carta2, somaCarta2);

    // QUEM GANHOU?

    somaCarta1 > somaCarta2 ? 
    /* caso positivo*/printf("\nVencedor: %s\n", nomeCidade1) : 
    /* caso negativo */somaCarta2 > somaCarta1 ? printf("\nVencedor: %s\n", nomeCidade2) :
    /* em nenhum dos casos... coloquei um operador ternário dentro da condição negativa */ printf("\nEMPATE!\n");

    return 0;
}

