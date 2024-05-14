#include <stdio.h>
#include <stdlib.h>

int main(){
	float valor1, valor2, media;
	
	printf("Digite um valor: ");
	scanf("%f", &valor1);
	
	printf("Digite outro valor: ");
	scanf("%f", &valor2);
	
	media = valor1 / valor2;
	
	printf("%f", media);
	
	return 0;
}
