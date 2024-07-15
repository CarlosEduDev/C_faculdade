#include <stdio.h>

int operacao(){
	int a, b, c;
	char opcao = 's';
	
	while(opcao != 'n'){
		scanf("%d%d%d", &a, &b, &c);
		
		if(a > b){
			if(b > c){
				printf("Ordem decrescente a > b > c \n");
			}else if(c > b){
				printf("Ordem decrescente a > c > b\n");
			}
		}else{
			printf("Outra ordem\n");
		}
		
		printf("Deseja continuar?\n");
		scanf("%c", &opcao);
	}
	
	return 0;
}

int comparacao(){
	int num1, num2, resultado;
	
	printf("Digite um numero: ");
	scanf("%d", &num1);
	
	printf("Digite outro numero: ");
	scanf("%d", &num2);
	
	if(num1 > num2){
		resultado = num1 > num2;
		printf("\n %d", resultado);
	}
	else if(num1 < num2){
		resultado = num1 < num2;
		printf("\n %d", resultado);
	}
	else if(num1 >= num2){
		resultado = num1 >= num2;
		printf("\n %d", resultado);
	}
	else if(num1 <= num2){
		resultado = num1 <= num2;
		printf("\n %d", resultado);
	}
	else if(num1 == num2){
		resultado = num1 == num2;
		printf("\n %d", resultado);
	}
	else{
		printf("\n %d", resultado);
	}
}

int main(){
	
	int num1, num2, resultado, opc;
	
	printf("Digite um numero: ");
	scanf("%d", &num1);
	
	printf("Digite outro numero: ");
	scanf("%d", &num2);
	
	printf("Qual operacao voce deseja?\n digite:\n 1 > \n 2 < \n 3 >= \n 4 <= \n 5 == \n 6 != \n");
	scanf("%d", &opc);
	
	switch(opc){
		case 1:
			resultado = num1 > num2;
			printf("Resultado da operacao logica: %d", resultado);
			
			break;
			
		case 2:
			resultado = num1 < num2;
			printf("Resultado da operacao logica: %d", resultado);
			
			break;
			
		case 3:
			resultado = num1 >= num2;
			printf("Resultado da operacao logica: %d", resultado);
			
			break;
			
		case 4:
			resultado = num1 <= num2;
			printf("Resultado da operacao logica: %d", resultado);
			
			break;
			
		case 5:
			resultado = num1 == num2;
			printf("Resultado da operacao logica: %d", resultado);
			
			break;
			
		case 6:
			resultado = num1 != num2;
			printf("Resultado da operacao logica: %d", resultado);
			
		
	}

return 0;
	
}
