#include <stdio.h>

int tensao(){
	int resultado, r, i;
	
	printf("Digite a resistencia: ");
	scanf("%d", &r);
	
	printf("Digite a corrente: ");
	scanf("%d", &i);
	
	resultado = r * i;
	
	printf("O valor da tensao eh: %dV", resultado);
	
}

int resistencia(){
	int resultado, v, i;
	
	printf("Digite a tensao: ");
	scanf("%d", &v);
	
	printf("Digite a corrente: ");
	scanf("%d", &i);
	
	resultado = v / i;
	
	printf("O valor da resistencia eh: %d", resultado);
}

int corrente(){
	int resultado, v, r;
	
	printf("Digite a tensao: ");
	scanf("%d", &v);
	
	printf("Digite a resistencia: ");
	scanf("%d", &r);
	
	resultado = v / r;
	
	printf("O valor da resistencia eh: %d", resultado);
}

int potencia(){
	int resultado, v, i;
	
	printf("Digite a tensao: ");
	scanf("%d", &v);
	
	printf("Digite a corrente: ");
	scanf("%d", &i);
	
	resultado = v * i;
	
	printf("O valor da potencia eh: %d", resultado);
}

int main(){
	int opc, escolha;
	
	printf("MULTIMETRO DIGITAL\n");
	printf("DIGITE:\n (1) para calcular tensao\n (2) para calcular resistencia\n (3) para calcular corrente\n (4) para calcular potencia\n (0) para sair\n OPCAO: ");
	scanf("%d", &opc);
	
	while(escolha != 0){
	
		switch(opc){
			case 1:
				printf("Calcular a tensao\n");
				tensao();
				
				break;
				
			case 2:
				printf("Calcular a resistencia\n");
				resistencia();
				
				break;
				
			case 3:
				printf("Calcular a corrente\n");
				corrente();
				
				break;
				
			case 4:
				printf("Calcular a potencia\n");
				potencia();
				
				break;
				
			case 0:
				break;
				
			default:
				printf("Opcao incorreta\n");
				break;
				
		}
		
		
	}
	
	return 0;
	
}
