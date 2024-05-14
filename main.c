#include <stdio.h>
#include <stdlib.h>

int main()
{

  //   int n, a= 0;

  //   scanf("%d",&n);

  //   while (a < 10)
  //   {
  //     printf("\n %d * %d = %d", n, a, n  * a);
  //     a++;
  //   }
    
  //   float valor1, media, somatorio = 0;
  //   int quantidadeValores = 0, contador=0;
    
  //   printf("Digite um valor: ");
  //   scanf("%d", &quantidadeValores);
	    
  //   while(contador < quantidadeValores){
  //   	printf("Insira um numero: ");
  //   	scanf("%f", &valor1);
  //   	somatorio = somatorio + valor1;
    	
    	
  //   	contador++;
	// }
	
	// media = somatorio / quantidadeValores;
	// printf("%f", media);
    
  // return 0;
        float salarioAtual;
    int reajuste, tempoServico;
    
    printf("Digite seu salario: ");
    scanf("%f", &salarioAtual);
    
    printf("Digite seu tempo de servico: ");
    scanf("%d", &tempoServico);
    
    if(salarioAtual <= 500.00 && tempoServico < 1) {
        reajuste = salarioAtual * 0.25; // Use ponto (.) em vez de vírgula (,) para representar números decimais
        printf("Seu salario reajustado tera um aumento de: %d e voce não possoi bônus", reajuste);
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
        printf("Seu salario não possui reajuste, porém possui um bônus de 500,00");
    }
    
    return 0;
}
