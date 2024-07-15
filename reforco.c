#include <stdio.h>

int telefonema(){
	int ddd, minutos, opc;
	float resultado;
	
	printf("Digite o ddd do seu pais\n 54 = Argentina\n 598 = Uruguai\n 595 = Paraguai\n 56 = Chile\n 49 = Alemanha\n 33 = Franca\n 44 = Inglaterra\n 1 = Canada e EUA\n 2 = outros\n");
	scanf("%d", &ddd);
	
	while(opc != 0){
		switch(ddd){
		case 54:
			printf("Quanto tempo em minutos de ligacao?: ");
			scanf("%d", &minutos);
			if(minutos > 5){
				resultado = (5 * 1.90) + ((minutos - 5) * (1.90 * 0.95));
				printf("Voce esta ligando de Argentina.\n");
				printf("Voce obteve uma reducao de 5%% do preco dos minutos adicionais, voce deve R$%.2f\n", resultado);
			}
			break;
			
		case 598:
			printf("Quanto tempo em minutos de ligacao?: ");
			scanf("%d", &minutos);
			if(minutos > 5){
				resultado = (5 * 1.90) + ((minutos - 5) * (1.90 * 0.95));
				printf("Voce esta ligando de Uruguai.\n");
				printf("Voce obteve uma reducao de 5%% do preco dos minutos adicionais, voce deve R$%.2f\n", resultado);
			}
			break;
			
		case 595:
			printf("Quanto tempo em minutos de ligacao?: ");
			scanf("%d", &minutos);
			if(minutos > 5){
				resultado = (5 * 1.90) + ((minutos - 5) * (1.90 * 0.95));
				printf("Voce esta ligando de Paraguai.\n");
				printf("Voce obteve uma reducao de 5%% do preco dos minutos adicionais, voce deve R$%.2f\n", resultado);
			}
			break;
			
		case 56:
			printf("Quanto tempo em minutos de ligacao?: ");
			scanf("%d", &minutos);
			if(minutos > 5){
				resultado = (5 * 1.90) + ((minutos - 5) * (1.90 * 0.95));
				printf("Voce esta ligando de Chile.\n");
				printf("Voce obteve uma reducao de 5%% do preco dos minutos adicionais, voce deve R$%.2f\n", resultado);
			}
			break;
			
		case 49:
			if(minutos > 5){
				printf("Quanto tempo em minutos de ligacao?: ");
				scanf("%d", &minutos);
				resultado = (5 * 2.00) + ((minutos - 5) * (2.00 * 0.95));
				printf("Voce esta ligando de Alemanha.\n");
				printf("Voce obteve uma reducao de 5%% do preco dos minutos adicionais, voce deve R$%.2f\n", resultado);
			}
			break;
			
		case 33:
			printf("Quanto tempo em minutos de ligacao?: ");
			scanf("%d", &minutos);
			if(minutos > 5){
				resultado = (5 * 2.00) + ((minutos - 5) * (2.00 * 0.95));
				printf("Voce esta ligando da Franca.\n");
				printf("Voce obteve uma reducao de 5%% do preco dos minutos adicionais, voce deve R$%.2f\n", resultado);
			}
			break;
			
		case 44:
			printf("Quanto tempo em minutos de ligacao?: ");
			scanf("%d", &minutos);
			if(minutos > 5){
				resultado = (5 * 2.00) + ((minutos - 5) * (2.00 * 0.95));
				printf("Voce esta ligando da Inglaterra.\n");
				printf("Voce obteve uma reducao de 5%% do preco dos minutos adicionais, voce deve R$%.2f\n", resultado);
			}
			break;
			
		case 1:
			printf("Quanto tempo em minutos de ligacao?: ");
			scanf("%d", &minutos);
			if(minutos > 5){
				resultado = (5 * 2.10) + ((minutos - 5) * (2.10 * 0.95));
				printf("Voce esta ligando de Canada/EUA.\n");
				printf("Voce obteve uma reducao de 5%% do preco dos minutos adicionais, voce deve R$%.2f\n", resultado);
			}
			break;
		
		case 2:
			printf("Quanto tempo em minutos de ligacao?: ");
			scanf("%d", &minutos);
			if(minutos > 5){
				resultado = (5 * 2.30) + ((minutos - 5) * (2.30 * 0.95));
				printf("Voce esta ligando de outro pais nao registrado\n");
				printf("Voce obteve uma reducao de 5%% do preco dos minutos adicionais, voce deve R$%.2f\n", resultado);
			}
		}
		
		
			printf("Deseja sair?\n 1 - nao | 0 - sim: ");
			scanf("%d", &opc);
			if(opc == 0){
				opc = 0;
			}else{
				printf("Digite o ddd do seu pais\n 54 = Argentina\n 598 = Uruguai\n 595 = Paraguai\n 56 = Chile\n 49 = Alemanha\n 33 = Franca\n 44 = Inglaterra\n 1 = Canada e EUA\n 2 = outros\n");
				scanf("%d", &ddd);
			}		
	}
	
}

int main(){
	telefonema();
	
	return 0;
    }
