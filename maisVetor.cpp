#include <stdio.h>

#define TAMANHO 10


//void preencherVetor(int vet[], int tam){
//	int i;
//	for(i = 0; i < tam; i++){
//		printf("Informe o valor da posicao %d: ", i);
//		scanf("%d", &vet[i]);
//	}
//}
//
//void imprimeVetor(int vet[], int tam){
//	int i;
//	for(i = 0; i < tam; i++){
//		printf("POSICAO %d => %d\n ",i, vet[i]);
//	}
//}
//
//void trocaValores(int a, int b){
//	int temporario;
//	a = b;
//	b = temporario;
//}

void imprime(int v[], int tam){
	int i;
	for(i = 0; i < tam; i++){

		printf("%d", v[i]);
	}
}

void uniao(int a[], int b[], int c[], int tamAB){
	int i, j=0;
	
	
	for(i = 0; i < tamAB; i++){
		c[j] = a[i];
		j++;
		
		c[j] = b[i];
		j++;
		
	}
	
}

// interseção
int existe(int elem, int vet[], int tam){
	int i;
	
	for(i = 0; i < tam; i++){
		if(elem == vet[i]){
			return 1;
		}
	}
}

void intersecao(int a[], int b[], int c[]){
	int i, j = 0;
	for(i = 0; i < tam; i++){
		if(existe[a[i], b, tam]){
			c[j] = a[i];
			j++
		}
	}
}

int main(){
	int a[5] = {1,2,3,4,5};
	int b[5] = {5,6,7,8,9};
	int c[10] = {0,0,0,0,0,0,0,0,0,0};
	uniao(a,b,c,5);
	intersecao(a,b,c, 5);
	imprime(c, 10);
	
	return 0;
}
