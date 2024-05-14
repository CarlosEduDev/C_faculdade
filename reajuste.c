#include <stdio.h>
#include <stdlib.h>

int main() {
    float salarioAtual;
    int reajuste, tempoServico;
    
    printf("Digite seu salario: ");
    scanf("%f", &salarioAtual);
    
    printf("Digite seu tempo de servico: ");
    scanf("%d", &tempoServico);
    
    if(salarioAtual <= 500.00 && tempoServico < 1) {
        reajuste = salarioAtual * 0.25; // Use ponto (.) em vez de vírgula (,) para representar números decimais
        printf("Seu salario reajustado tera um aumento de: %d e voce nao possui bonus", reajuste);
    }
    else if(salarioAtual <= 1000.00 && tempoServico >= 1 && tempoServico <= 3) {
        reajuste = salarioAtual * 0.20; // Use ponto (.) em vez de vírgula (,) para representar números decimais
        printf("Seu salario reajustado tera um aumento de: %d e voce possui bonus de 100,00", reajuste);
    }
    else if(salarioAtual <= 1500.00 && tempoServico >= 4 && tempoServico <= 6) {
        reajuste = salarioAtual * 0.15; // Use ponto (.) em vez de vírgula (,) para representar números decimais
        printf("Seu salario reajustado tera um aumento de: %d e voce possui bonus de 200,00", reajuste);
    }
    else if(salarioAtual <= 2000.00 && tempoServico >= 7 && tempoServico <= 10) {
        reajuste = salarioAtual * 0.1; // Use ponto (.) em vez de vírgula (,) para representar números decimais
        printf("Seu salario reajustado tera um aumento de: %d e voce possui bonus de 300,00", reajuste);
    }
    else if(salarioAtual > 2000.00 && tempoServico > 10) {
        printf("Seu salario nao possui reajuste, porem possui um bonus de 500,00");
    }
    
    return 0;
}

