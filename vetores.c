#include <stdio.h>
#include <stdlib.h>


void zeraVetor(int vetor[], int tam){
	int i;
	for(i = 0; i < tam; i++){
		vetor[i] = 0;
	}
}

void inverteVetor(int vetor[], int tam){
	int i;
	int temp[tam];
	
	//copiando invertido
	for(i = 0; i < tam; i++){
		temp[i] = vetor[(tam-1) - i];
	    }
	
		//copiando de volta para o vetor original
		for(i = 0; i < tam; i++){
		vetor[i] = temp[i];
	    }
}

void copiaVetor(int vetOrigem[], int vetDestino[], int tam){
	int i;
	
	for(i = 0; i < tam; i++){
		vetDestino[i] = vetOrigem[i];
	}
	
}


int buscaElementovoid (int vetor[], int tam, int buscado){
	int i;
	
	for(i = 0; i < tam; i++){
		if(buscado == vetor[i]){
			return i;
		 }
	    }
	    
	    return -1;
}

int imprimeVetor (int vetor[], int tam){
	int i;
	
	for(i = 0; i < tam; i++){
		printf("%d", vetor[i]);
	    }
	    
	    printf("\n");
}
