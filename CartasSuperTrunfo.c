#include <stdio.h>
#include <string.h> // Adiciona suporte para o fgets

int main() {
    
    int varPopulacao_01 = 0, varPopulacao_02 = 0;
    int varPontosTuristicos_01 = 0, varPontosTuristicos_02 = 0;
    float varPIB_01 = 0, varPIB_02 = 0;
    float varArea_01 = 0, varArea_02 = 0;
    float varDensidadePopulacional_01 = 0, varDensidadePopulacional_02 = 0;
    float varPIBperCapita_01 = 0, varPIBperCapita_02 = 0;
    char varCidade_01[50] = {'\0'}, varCidade_02[50] = {'\0'}; //Uma array necessita de um conjunto nulos para ser vazio
    char varEstado_01 = '\0', varEstado_02 = '\0';

    printf("Para começar o jogo, você precisa cadastrar duas cartas com informações de duas cidades à sua escolha.\nCada carta será cadastrada separadamente.\nVamos lá?\n\nCadastro da Primeira Carta");

    //DADOS PRIMEIRA CARTA
    printf("\nInforme uma única letra que representará o estado da primeira cidade (exemplo: B para Bahia):\n");
    scanf(" %c", &varEstado_01); //O espaço antes de %c evita problemas com '\n'

    getchar(); // Consome o '\n' do scanf (Resolve problema de "pulo" da linha)
    printf("\nInforme o nome da primeira cidade selecionada:\n");
    fgets(varCidade_01, sizeof(varCidade_01), stdin); // Garantindo que o nome da cidade não ultrapasse o buffer* (Resolve nomes com espaço, mas não resolve acentuação)
    varCidade_01[strcspn(varCidade_01, "\n")] = '\0'; // Remove '\n'
    
    printf("\nInforme a população da primeira cidade (número total de habitantes):\n");
    scanf("%d", &varPopulacao_01);

    printf("\nInforme a área da primeira cidade em km²:\n");
    scanf("%f", &varArea_01);

    getchar(); // Consome o '\n' do scanf após a entrada de float (Resolve problema de "pulo" da linha)
    printf("\nInforme o Produto Interno Bruto (PIB) da primeira cidade:\n");
    scanf("%f", &varPIB_01);

    getchar(); // Consome o '\n' do scanf após a entrada de float (Resolve problema de "pulo" da linha)
    printf("\nInforme o número de pontos turísticos da primeira cidade:\n");
    scanf("%d", &varPontosTuristicos_01);
        //CÁLCULOS
            varDensidadePopulacional_01 = varPopulação_01/varÁrea_01;
            varPIBperCapita_01 = varPIB_01/varPopulação_01;

    //DADOS SEGUNDA CARTA
    printf("Chegou a vez de cadastrar os dados da segunda carta. A estrutura é a mesma da primeira.\nVamos lá?\n\nCadastro da Segunda Carta");

    printf("\nEscolha uma letra única que representará o estado da segunda cidade:\n");
    scanf(" %c", &varEstado_02);

    getchar(); // Consome o '\n' do scanf
    printf("\nDigite o nome da segunda cidade que você escolheu:\n");
    fgets(varCidade_02, sizeof(varCidade_02), stdin); // Garantindo que o nome da cidade não ultrapasse o buffer
    varCidade_02[strcspn(varCidade_02, "\n")] = '\0'; // Remove '\n'
    
    printf("\nQual é a população total da segunda cidade? Informe o número de habitantes:\n");
    scanf("%d", &varPopulacao_02);

    printf("\nQuantos km² a segunda cidade ocupa? Informe a área total:\n");
    scanf("%f", &varArea_02);

    getchar(); // Consome o '\n' do scanf após a entrada de float
    printf("\nO Produto Interno Bruto (PIB) da segunda cidade. Qual é o valor?\n");
    scanf("%f", &varPIB_02);

    getchar(); // Consome o '\n' do scanf após a entrada de float
    printf("\nQuantos pontos turísticos a segunda cidade oferece aos visitantes?\n");
    scanf("%d", &varPontosTuristicos_02);
        //CÁLCULOS
            varDensidadePopulacional_02 = varPopulação_02/varÁrea_02;
            varPIBperCapita_02 = varPIB_02/varPopulação_02;
    
    //RESULTADO, INFORMAÇÃO DAS CARTAS
    printf("\nCARTA 01");
    printf("\nEstado: %c", varEstado_01);
    printf("\nCódigo: %c01", varEstado_01);
    printf("\nNome da Cidade: %s", varCidade_01);
    printf("\nPopulação: %d", varPopulacao_01);
    printf("\nÁrea: %.3f Km²", varArea_01); // Usando %.3f para maior precisão
    printf("\nPIB: R$ %.2f", varPIB_01);
    printf("\nNúmero de Pontos Turísticos: %d", varPontosTuristicos_01);
    printf("\nDensidade Populacional: %.1f Hab/km²", varDensidadePopulacional_01);
    printf("\nPIB per Capita: R$ %.2f", varPIBperCapita_01);

    printf("\n\nCARTA 02");
    printf("\nEstado: %c", varEstado_02);
    printf("\nCódigo: %c02", varEstado_02);
    printf("\nNome da Cidade: %s", varCidade_02);
    printf("\nPopulação: %d", varPopulacao_02);
    printf("\nÁrea: %.3f Km²", varArea_02); // Usando %.3f para maior precisão
    printf("\nPIB: R$ %.2f", varPIB_02);
    printf("\nNúmero de Pontos Turísticos: %d", varPontosTuristicos_02);
    printf("\nDensidade Populacional: %.1f Hab/km²", varDensidadePopulacional_02);
    printf("\nPIB per Capita: R$ %.2f", varPIBperCapita_02);

    return 0;
}
