#include <stdio.h>

//Declaração de variáveis globais
char estado[10], estado2[10], codigo[4], codigo2[4], nomeCidade[20], nomeCidade2[20];
int qtdPontosTur, qtdPontosTur2, resultadoPopulacao;
float area, area2, pib, pib2,densidadePop,densidadePop2, pibCapita, pibCapita2, superPod, superPod2;
unsigned long int populacao, populacao2;



//Método responsável por calcular e retornar o PIB per capita
float calcularPibPerCapita(int populacao, float pib){
    return pib/populacao;
}

//Método responsável por calcular e retornar a densidade populacional
float calcularDensidadePop(int populacao, float area){
    return (float)populacao/area;
}

//Método responsável por calcular e retornar o super poder
float calcularSuperPod(int populacao, int qtdPontosTur, float area, float pib, float densidadePop, float pibCapita){
    return (float)populacao + (float)qtdPontosTur + area + pib + densidadePop + pibCapita;
}

//Métodos responsáveis pela coleta de dados das cartas
void ColetarDados(){
    printf("Digite o Estado:\n");
    scanf(" %c", &estado);

    printf("Digite o código da cidade:\n");
    scanf(" %2s", &codigo);


    printf("Digite o nome da cidade:\n");
    scanf("%19s", &nomeCidade);
    
    printf("Digite a população da cidade:\n");
    scanf("%i", &populacao);

    printf("Digite quantos pontos turísticos exisatem na cidade:\n");
    scanf("%i", &qtdPontosTur);
    
    printf("Digite pib:\n");
    scanf("%f", &pib);
    
    printf("Digite a area da cidade:\n");
    scanf("%f", &area);

    pibCapita = (float)calcularPibPerCapita(populacao,pib);
    densidadePop = calcularDensidadePop(populacao,area);
    superPod = calcularSuperPod(populacao, qtdPontosTur, area, pib, densidadePop, pibCapita);
}

void ColetarDados2(){
    printf("Digite o Estado:\n");
    scanf(" %c", &estado2);

    printf("Digite o código da cidade:\n");
    scanf("%2s", &codigo2);


    printf("Digite o nome da cidade:\n");
    scanf("%19s", &nomeCidade2);
    
    printf("Digite a população da cidade:\n");
    scanf("%i", &populacao2);

    printf("Digite quantos pontos turísticos exisatem na cidade:\n");
    scanf("%i", &qtdPontosTur2);
    
    printf("Digite pib:\n");
    scanf("%f", &pib2);
    
    printf("Digite a area da cidade:\n");
    scanf("%f", &area2);

    pibCapita2 = calcularPibPerCapita(populacao2,pib2);
    densidadePop2 = calcularDensidadePop(populacao2,area2);
    superPod2 = calcularSuperPod(populacao2, qtdPontosTur2, area2, pib2, densidadePop2, pibCapita2);
}

//Método responsável pela exibição dos dados
void ExibirDados(){
    printf("Carta 1:\n");
    printf("Estado: %c\n",estado);
    printf("Codigo: %c%s\n",estado,codigo);
    printf("Nome da cidade: %s\n", nomeCidade);
    printf("População da cidade: %i\n", populacao);
    printf("Qtd pontos turísticos da cidade: %i\n", qtdPontosTur);
    printf("Pib da cidade: %.2f\n", pib);
    printf("Area da cidade: %.2f\n", area);
    printf("Densidade populacional: %.2f\n", densidadePop);
    printf("PIB per Capita: %.2f\n", pibCapita);
    printf("Super poder: %.2f\n", superPod);


    //Exibindo dados da segunda carta
    printf("\nCarta 2:\n");
    printf("Estado: %c \n", estado2);
    printf("Codigo: %c%s \n",estado2, codigo2);
    printf("Nome da cidade: %s \n", nomeCidade2);
    printf("População da cidade: %i \n", populacao2);
    printf("Qtd pontos turísticos da cidade: %i \n", qtdPontosTur2);
    printf("Pib da cidade: %.2f \n", pib2);
    printf("Area da cidade: %.2f \n", area2);
    printf("Densidade populacional: %.2f\n", densidadePop2);
    printf("PIB per Capita: %.2f\n", pibCapita2);
    printf("Super poder: %.2f\n", superPod2);

}

void CompararEExibirPopulacao(){
    printf("Comparação de populações:\n");
    printf("Carta 1: %lu\n", populacao);
    printf("Carta 2: %lu\n", populacao2);

    if(populacao > populacao2){
        printf("População da carta 1 é maior que da carta 2.\n");
    } else{
        printf("População da carta 2 é maior que a população da carta 1\n");
    }
}

//Método main com a chamada para os demais métodos
int main() {
   ColetarDados();
   ColetarDados2();
   ExibirDados();
   CompararEExibirPopulacao();

    return 0;
}