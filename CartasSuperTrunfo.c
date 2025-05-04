#include <stdio.h>

int main() {
    
    unsigned long int varPopulacao_01 = 0, varPopulacao_02 = 0; //PODE RECEBER NÚMEROS MAIORES

    int varPontosTuristicos_01 = 0, varPontosTuristicos_02 = 0;

    float varPIB_01 = 0, varPIB_02 = 0;

    float varArea_01 = 0, varArea_02 = 0;

    float varDensidadePopulacional_01 = 0, varDensidadePopulacional_02 = 0;

    float varPIBperCapita_01 = 0, varPIBperCapita_02 = 0;

    float varSuperPoder_01 = 0, varSuperPoder_02 = 0;

    char varCidade_01[51], varCidade_02[51];

    char varEstado_01, varEstado_02;

    //INTRUÇÕES INICIAIS

    printf("Para jogar, é necessário cadastrar duas cartas.\nCada carta terá informações de uma cidade.\nVocê irá cadastrar cada carta separadamente.\n\nVamos começar!\n\nCadastro Primeira Carta");
        

    //DADOS PRIMEIRA CARTA

    printf("\nInforme uma única letra que representará o estado da primeira cidade (exemplo: B para Bahia):\n");
    scanf(" %c", &varEstado_01); //O espaço antes de %c evita problemas com '\n'

    printf("\nInforme o nome da primeira cidade selecionada (Remover os espaços):\n");
    scanf(" %50s", varCidade_01);
    
    printf("\nInforme a população da primeira cidade (número total de habitantes):\n");
    scanf("%lu", &varPopulacao_01);

    printf("\nInforme a área da primeira cidade em km²:\n");
    scanf("%f", &varArea_01);

    printf("\nInforme o Produto Interno Bruto (PIB) da primeira cidade:\n");
    scanf("%f", &varPIB_01);

    printf("\nInforme o número de pontos turísticos da primeira cidade:\n");
    scanf("%d", &varPontosTuristicos_01);

            //CÁLCULOS

            varDensidadePopulacional_01 = varPopulacao_01/varArea_01;
            
            varPIBperCapita_01 = varPIB_01/varPopulacao_01;

            varSuperPoder_01 = (
                (float)(varPopulacao_01 + varPontosTuristicos_01) +
                varArea_01 +
                varPIB_01 +
                varPIBperCapita_01 +
                1.0f / varDensidadePopulacional_01
            );
            


        
    //DADOS SEGUNDA CARTA

    printf("\n\nChegou a vez de cadastrar os dados da segunda carta.\nA estrutura é a mesma da primeira.\nVamos lá?\n\nCadastro da Segunda Carta");

    printf("\nEscolha uma letra única que representará o estado da segunda cidade:\n");
    scanf(" %c", &varEstado_02);

    printf("\nInforme o nome da segunda cidade selecionada (Remover os espaços):\n");
    scanf(" %50s", varCidade_02);
    
    printf("\nQual é a população total da segunda cidade? Informe o número de habitantes:\n");
    scanf("%lu", &varPopulacao_02);

    printf("\nQuantos km² a segunda cidade ocupa? Informe a área total:\n");
    scanf("%f", &varArea_02);

    printf("\nO Produto Interno Bruto (PIB) da segunda cidade. Qual é o valor?\n");
    scanf("%f", &varPIB_02);

    printf("\nQuantos pontos turísticos a segunda cidade oferece aos visitantes?\n");
    scanf("%d", &varPontosTuristicos_02);

            //CÁLCULOS

            varDensidadePopulacional_02 = varPopulacao_02/varArea_02;

            varPIBperCapita_02 = varPIB_02/varPopulacao_02;

            varSuperPoder_02 = (
                (float)(varPopulacao_02 + varPontosTuristicos_02) +
                varArea_02 +
                varPIB_02 +
                varPIBperCapita_02 +
                1.0f / varDensidadePopulacional_02
            );
            

    //MOSTRANDO OS DADOS DAS CARTAS    
    printf("\nCARTA 1");
    printf("\nEstado: %c", varEstado_01);
    printf("\nCódigo: %c01", varEstado_01);
    printf("\nNome da Cidade: %s", varCidade_01);
    printf("\nPopulação: %lu", varPopulacao_01);
    printf("\nÁrea: %.3f Km²", varArea_01); // Usando %.3f para maior precisão
    printf("\nPIB: R$ %.2f", varPIB_01);
    printf("\nNúmero de Pontos Turísticos: %d", varPontosTuristicos_01);
    printf("\nDensidade Populacional: %.1f Hab/km²", varDensidadePopulacional_01);
    printf("\nPIB per Capita: R$ %.2f", varPIBperCapita_01);
    printf("\nSuper Poder: %.3f", varSuperPoder_01);

    printf("\n\nCARTA 2");
    printf("\nEstado: %c", varEstado_02);
    printf("\nCódigo: %c02", varEstado_02);
    printf("\nNome da Cidade: %s", varCidade_02);
    printf("\nPopulação: %lu", varPopulacao_02);
    printf("\nÁrea: %.3f Km²", varArea_02); // Usando %.3f para maior precisão
    printf("\nPIB: R$ %.2f", varPIB_02);
    printf("\nNúmero de Pontos Turísticos: %d", varPontosTuristicos_02);
    printf("\nDensidade Populacional: %.1f Hab/km²", varDensidadePopulacional_02);
    printf("\nPIB per Capita: R$ %.2f", varPIBperCapita_02);
    printf("\nSuper Poder: %.3f", varSuperPoder_02);

    //RESULTADO DA COMPARAÇÃO
    printf("\n\n===== RESULTADO DA COMPARAÇÃO DAS CARTAS =====\n");
    printf("População ......................... Vencedora: CARTA %d\n", 1 + (varPopulacao_01 < varPopulacao_02));
    printf("Área .............................. Vencedora: CARTA %d\n", 1 + (varArea_01 < varArea_02));
    printf("PIB ............................... Vencedora: CARTA %d\n", 1 + (varPIB_01 < varPIB_02));
    printf("Pontos Turísticos ................. Vencedora: CARTA %d\n", 1 + (varPontosTuristicos_01 < varPontosTuristicos_02));
    printf("Densidade Populacional (menor) .... Vencedora: CARTA %d\n", 1 + (varDensidadePopulacional_01 > varDensidadePopulacional_02));
    printf("PIB per Capita .................... Vencedora: CARTA %d\n", 1 + (varPIBperCapita_01 < varPIBperCapita_02));
    printf("Super Poder ....................... Vencedora: CARTA %d\n", 1 + (varSuperPoder_01 < varSuperPoder_02));


    return 0;
}
