#include <stdio.h>
#include <math.h>

#define TAMANHO 10


int main(){

	// EXERCÍCIO 1
	int numReais[10]={1,2,3,4,5,6,7,8,9,10}, i;
	
	for(i = 0; i < 10; i++){
		printf("Numeros reais : %d\n", numReais[i] *2 );
	}
	
	// EXERCÍCIO 2

	int vetor[10], i;
	
	for(i = 0; i < 10; i++){
		printf("Digite %d valor:", i+1);
		scanf("%d", &vetor[i]);
	}
	
	for(i = 0; i < 10; i++){
		if(vetor[i] < 0){
			vetor[i] = 0;
		}
	}
	
	printf("Vetor modificado: \n ");
	for(i = 0; i < 10; i++){
		printf("%d\n", vetor[i]);
	}
	
	// EXERCÍCIO 3
	
	int vetor2[TAMANHO], i, j;
	
	for(i = 0; i < TAMANHO; i++){
		printf("Digite 10 numeros\n numero %d: ", i+1);
		scanf("%d", &vetor2[i]);
	}
	
	for(i = 0; i < TAMANHO; i++){
		for(j = i+1; j < TAMANHO; j++){
			if(vetor2[i] == vetor2[j]){
				printf("Elementos ja existentes: %d\n", vetor2[i]);
			}
		}
	}
	
	
	return 0;
}
