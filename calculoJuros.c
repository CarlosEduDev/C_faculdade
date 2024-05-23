#include <stdio.h>
#include <math.h>

int main(){
    double aplicacao, aplicacao_fixa, divida_fixa, divida_variavel;
    double taxaAplicacao, taxaDivida;
    int meses_aplicacao = 0, meses_divida = 0;

    // Entrada de dados do usuario
    printf("Digite o valor da aplicacao: ");
    scanf("%lf", &aplicacao);

    printf("Digite o valor da divida: ");
    scanf("%lf", &divida_fixa);

    printf("Digite o valor do juros da aplicacao (em decimal, por exemplo, 0.04 para 4%%): ");
    scanf("%lf", &taxaAplicacao);

    printf("Digite o valor do juros da divida (em decimal, por exemplo, 0.025 para 2.5%%): ");
    scanf("%lf", &taxaDivida);

    // Inicialização da dívida variável
    divida_variavel = divida_fixa;
    
    // Calculo da dívida fixa
    aplicacao_fixa = aplicacao;
    while(aplicacao_fixa < divida_fixa) {
        aplicacao_fixa = aplicacao_fixa * (1 + taxaAplicacao); // M = P(1 + i);
        meses_aplicacao++;
    }
    printf("Para pagar a divida fixa de R$%.3lf com R$%.3lf sera necessario %d meses.\n", divida_fixa, aplicacao, meses_aplicacao);
    
    // Calculo da dívida com aumento de 2.5%
    while(aplicacao < divida_variavel) {
        aplicacao = aplicacao * (1 + taxaAplicacao);
        divida_variavel = divida_variavel * (1 + taxaDivida);
        meses_divida++;
    }
    
    printf("Para pagar a divida de R$%.3lf, com o aumento de 2.5%% ao mes com a divida sendo de R$%.3f sera necessario %d meses.\n", divida_fixa, aplicacao, meses_divida);
    
    return 0;
}

